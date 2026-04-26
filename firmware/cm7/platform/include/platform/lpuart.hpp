#pragma once

#include <cassert>
#include <cstdio>
#include <cstring>

#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
#include "registers/codegen/lpuart.hpp"
#include "registers/codegen/dma0.hpp"
#include "registers/codegen/dmamux0.hpp"

#include "etl/singleton.h"
#include "utils/ocram2_allocator.hpp"
#include "ftl/singleton.hpp"

#include "board.h"
#include "cachel1_armv7.h"

class ConsoleUart : public ftl::Singleton<ConsoleUart>
{
    friend class ftl::Singleton<ConsoleUart>;
public:
    static constexpr uint32_t kTxBufferSize = 128;
private:
    using lpuart1 = regs::Lpuart<1>;

    ConsoleUart()
    {
        namespace ccm = regs::ccm;

        // Allocate tx buffer from non-cacheable OCRAM.
        Ocram2Allocator& ocram2 = Ocram2Allocator::instance();
        this->tx_buffer_ = reinterpret_cast<uint8_t *>(ocram2.allocate(kTxBufferSize, 4));
        assert(tx_buffer_ != nullptr);

        // 1. Enable Clocks.
        {
            using direct = ccm::LPCG22_DIRECT;
            using status = ccm::LPCG22_STATUS0;
            if (status::read().get<status::ON>() != status::eON::eON_1) {
                direct::modify(direct::ON{direct::eON::eON_1});
                while (status::read().get<status::ON>() != status::eON::eON_1) {}
            }
        }
        {
            using direct = ccm::LPCG86_DIRECT;
            using status = ccm::LPCG86_STATUS0;
            if (status::read().get<status::ON>() != status::eON::eON_1) {
                direct::modify(direct::ON{direct::eON::eON_1});
                while (status::read().get<status::ON>() != status::eON::eON_1) {}
            }
        }

        // 2. Configure LPUART (transmitter disabled initially).
        // Soft-reset pulse on lpuart1.
        lpuart1::GLOBAL::modify(lpuart1::GLOBAL::RST{lpuart1::GLOBAL::eRST::eRESET});
        lpuart1::GLOBAL::modify(lpuart1::GLOBAL::RST{lpuart1::GLOBAL::eRST::eNO_EFFECT});

        // BaudRate = LPUART Clock Frequency / ((OSR+1) * SBR)
        // TODO assert uartClkSrcFreq = 24'000'000;
        lpuart1::BAUD::write(
            lpuart1::BAUD::SBR{std::uint16_t{8}},
            lpuart1::BAUD::SBNS     {lpuart1::BAUD::eSBNS::eONE},
            lpuart1::BAUD::RXEDGIE  {lpuart1::BAUD::eRXEDGIE::eDISABLE},
            lpuart1::BAUD::LBKDIE   {lpuart1::BAUD::eLBKDIE::eDISABLE},
            lpuart1::BAUD::RESYNCDIS{lpuart1::BAUD::eRESYNCDIS::eRESYNC},
            lpuart1::BAUD::BOTHEDGE {lpuart1::BAUD::eBOTHEDGE::eDISABLED},
            lpuart1::BAUD::MATCFG   {lpuart1::BAUD::eMATCFG::eADDR_MATCH},
            lpuart1::BAUD::RDMAE    {lpuart1::BAUD::eRDMAE::eDISABLED},
            lpuart1::BAUD::TDMAE    {lpuart1::BAUD::eTDMAE::eDISABLED},  // keep disabled
            lpuart1::BAUD::OSR      {lpuart1::BAUD::eOSR::eOSR_25},
            lpuart1::BAUD::M10      {lpuart1::BAUD::eM10::eDISABLED},
            lpuart1::BAUD::MAEN2    {lpuart1::BAUD::eMAEN2::eDISABLED},
            lpuart1::BAUD::MAEN1    {lpuart1::BAUD::eMAEN1::eDISABLED});

        // FIFO: only the writable (non-RO, non-W1C) fields are listed; the
        // FIFO size fields are RO and the RXUF/TXOF flags are W1C and were
        // no-ops in the old union-style writes.
        lpuart1::FIFO::modify(
            lpuart1::FIFO::RXFE   {lpuart1::FIFO::eRXFE::eENABLED},
            lpuart1::FIFO::TXFE   {lpuart1::FIFO::eTXFE::eENABLED},
            lpuart1::FIFO::RXUFE  {lpuart1::FIFO::eRXUFE::eDISABLED},
            lpuart1::FIFO::TXOFE  {lpuart1::FIFO::eTXOFE::eDISABLED},
            lpuart1::FIFO::RXIDEN {lpuart1::FIFO::eRXIDEN::eDISABLED},
            lpuart1::FIFO::RXFLUSH{lpuart1::FIFO::eRXFLUSH::eNO_EFFECT},
            lpuart1::FIFO::TXFLUSH{lpuart1::FIFO::eTXFLUSH::eTXFIFO_RST});

        lpuart1::WATER::reset();
        lpuart1::MODIR::reset();

        // STAT: only the normal-RW fields. The original code also assigned
        // "no-effect" values to W1C status flags (MA2F/MA1F/PF/FE/NF/OR/IDLE/
        // RXEDGIF/LBKDIF) — those are no-ops on hardware (write-0 to W1C) so
        // we drop them.
        lpuart1::STAT::modify(
            lpuart1::STAT::LBKDE{lpuart1::STAT::eLBKDE::eDISABLED},
            lpuart1::STAT::BRK13{lpuart1::STAT::eBRK13::eSHORT},
            lpuart1::STAT::RWUID{lpuart1::STAT::eRWUID::eIDLE_NOTSET},
            lpuart1::STAT::RXINV{lpuart1::STAT::eRXINV::eNOT_INVERTED},
            lpuart1::STAT::MSBF {lpuart1::STAT::eMSBF::eLSB_FIRST});

        lpuart1::CTRL::write(
            lpuart1::CTRL::PT     {lpuart1::CTRL::ePT::eEVEN},
            lpuart1::CTRL::PE     {lpuart1::CTRL::ePE::eDISABLED},
            lpuart1::CTRL::ILT    {lpuart1::CTRL::eILT::eFROM_STOP},
            lpuart1::CTRL::WAKE   {lpuart1::CTRL::eWAKE::eIDLE},
            lpuart1::CTRL::M      {lpuart1::CTRL::eM::eDATA8},
            lpuart1::CTRL::RSRC   {lpuart1::CTRL::eRSRC::eNO_EFFECT},
            lpuart1::CTRL::DOZEEN {lpuart1::CTRL::eDOZEEN::eENABLED},
            lpuart1::CTRL::LOOPS  {lpuart1::CTRL::eLOOPS::eNOFFECT},
            lpuart1::CTRL::IDLECFG{lpuart1::CTRL::eIDLECFG::eIDLE_2},
            lpuart1::CTRL::M7     {lpuart1::CTRL::eM7::eNO_EFFECT},
            lpuart1::CTRL::MA2IE  {lpuart1::CTRL::eMA2IE::eDISABLED},
            lpuart1::CTRL::MA1IE  {lpuart1::CTRL::eMA1IE::eDISABLED},
            lpuart1::CTRL::SBK    {lpuart1::CTRL::eSBK::eNO_EFFECT},
            lpuart1::CTRL::RWU    {lpuart1::CTRL::eRWU::eNO_EFFECT},
            lpuart1::CTRL::RE     {lpuart1::CTRL::eRE::eENABLED},
            lpuart1::CTRL::TE     {lpuart1::CTRL::eTE::eDISABLED});  // disable TX until DMA ready

        // Set DONE flag in case we inherit a different state.
        regs::dma0::TCD_CSR<0>::modify(regs::dma0::TCD_CSR<0>::DONE{true});
    }

public:
    void write(const uint8_t *buffer, uint16_t size)
    {
        namespace dma0    = regs::dma0;
        namespace dmamux0 = regs::dmamux0;

        // Per-channel TCD aliases — channel 0 is wired to LPUART1 TX.
        using csr    = dma0::TCD_CSR<0>;
        using citer  = dma0::TCD_CITER_ELINKNO<0>;
        using biter  = dma0::TCD_BITER_ELINKNO<0>;
        using soff   = dma0::TCD_SOFF<0>;
        using doff   = dma0::TCD_DOFF<0>;
        using saddr  = dma0::TCD_SADDR<0>;
        using daddr  = dma0::TCD_DADDR<0>;
        using attr   = dma0::TCD_ATTR<0>;
        using nbytes = dma0::TCD_NBYTES_MLNO<0>;

        using chcfg0 = dmamux0::CHCFG<0>;

        // Wait for completion of the previous write.
        while (!csr::read().get<csr::DONE>()) {}

        // Wait for UART shift register to empty.
        while (lpuart1::STAT::read().get<lpuart1::STAT::TC>() != lpuart1::STAT::eTC::eCOMPLETE) {}

        // Tear down any ongoing transfer: disable UART + its DMA trigger,
        // disable DMAMUX channel, disable DMA requests.
        lpuart1::CTRL::modify(lpuart1::CTRL::TE{lpuart1::CTRL::eTE::eDISABLED});
        lpuart1::BAUD::modify(lpuart1::BAUD::TDMAE{lpuart1::BAUD::eTDMAE::eDISABLED});
        chcfg0::modify(chcfg0::ENBL{chcfg0::eENBL::eENBL_0});
        dma0::ERQ::modify(dma0::ERQ::ERQ0{dma0::ERQ::eERQ0::eDISABLE});

        // Clear sticky flags. (ES is RO in SVD; the old es.Reset() write was
        // ignored on silicon. Real error-clear goes through CR[CX] / CERR.)
        csr::modify(csr::DONE{true},                      // clear DONE
                    csr::DREQ{csr::eDREQ::eCLEAR});        // prevent auto-disable

        // Copy the data (no cache clean necessary for OCRAM2).
        assert(size <= kTxBufferSize);
        std::memcpy(tx_buffer_, buffer, size);

        // Reconfigure the TCD.
        saddr::write (saddr::SADDR{reinterpret_cast<std::uint32_t>(tx_buffer_)});
        soff::write  (soff::SOFF{static_cast<std::uint16_t>(1)});       // step source by 1 byte
        daddr::write (daddr::DADDR{static_cast<std::uint32_t>(lpuart1::DATA::kAddr)});
        doff::write  (doff::DOFF{static_cast<std::uint16_t>(0)});       // keep dest fixed
        nbytes::write(nbytes::NBYTES{1u});                              // 1 byte per minor-loop
        attr::write  (attr::SSIZE{attr::eSSIZE::eEIGHT},                // 8-bit transfers
                      attr::DSIZE{static_cast<std::uint8_t>(0)});
        biter::write (biter::BITER{size}, biter::ELINK{biter::eELINK::eDISABLED});
        // CITER must be loaded *after* BITER per the reference manual.
        citer::write (citer::CITER{size}, citer::ELINK{citer::eELINK::eDISABLED});

        // Arm DMAMUX (SOURCE=8 → LPUART1 TX) & clear pending requests.
        chcfg0::modify(chcfg0::SOURCE{std::uint8_t{8}},
                       chcfg0::ENBL  {chcfg0::eENBL::eENBL_1});
        dma0::SERQ::reset();

        // Enable DMA + UART, then kick off.
        dma0::ERQ::modify(dma0::ERQ::ERQ0{dma0::ERQ::eERQ0::eENABLE});
        lpuart1::CTRL::modify(lpuart1::CTRL::TE   {lpuart1::CTRL::eTE::eENABLED});
        lpuart1::BAUD::modify(lpuart1::BAUD::TDMAE{lpuart1::BAUD::eTDMAE::eENABLED});
    }

    int read(uint8_t *buffer, size_t max_length)
    {
        assert(buffer != nullptr);

        size_t i = 0;
        uint8_t* data_address = buffer;

        while (i < max_length - 1)
        {
            uint8_t c = this->read_byte();
            data_address[i++] = c;
            if (c == '\r' || c == '\n') break;  // Stop on Enter key
        }
        buffer[i++] = '\0';  // Null-terminate string
        return i;
    }

    uint8_t read_byte()
    {
        while (lpuart1::STAT::read().get<lpuart1::STAT::RDRF>() == lpuart1::STAT::eRDRF::eNO_RXDATA) {}
        return static_cast<std::uint8_t>(lpuart1::DATA::raw() & 0xFFu);
    }
private:
    uint8_t *tx_buffer_ = nullptr;
};
