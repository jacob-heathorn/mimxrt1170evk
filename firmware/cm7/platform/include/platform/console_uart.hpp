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
    using Lpuart1 = regs::Lpuart<1>;

    ConsoleUart()
    {
        using Ccm = regs::Ccm;

        // Allocate tx buffer from non-cacheable OCRAM.
        Ocram2Allocator& ocram2 = Ocram2Allocator::instance();
        this->tx_buffer_ = reinterpret_cast<uint8_t *>(ocram2.allocate(kTxBufferSize, 4));
        assert(tx_buffer_ != nullptr);

        // 1. Enable Clocks.
        {
            using Direct = Ccm::LPCG22_DIRECT;
            using Status = Ccm::LPCG22_STATUS0;
            if (Status::read().get<Status::ON>() != Status::eON::eON_1) {
                Direct::modify(Direct::ON{Direct::eON::eON_1});
                while (Status::read().get<Status::ON>() != Status::eON::eON_1) {}
            }
        }
        {
            using Direct = Ccm::LPCG86_DIRECT;
            using Status = Ccm::LPCG86_STATUS0;
            if (Status::read().get<Status::ON>() != Status::eON::eON_1) {
                Direct::modify(Direct::ON{Direct::eON::eON_1});
                while (Status::read().get<Status::ON>() != Status::eON::eON_1) {}
            }
        }

        // 2. Configure LPUART (transmitter disabled initially).
        // Soft-reset pulse on lpuart1.
        Lpuart1::GLOBAL::modify(Lpuart1::GLOBAL::RST{Lpuart1::GLOBAL::eRST::eRESET});
        Lpuart1::GLOBAL::modify(Lpuart1::GLOBAL::RST{Lpuart1::GLOBAL::eRST::eNO_EFFECT});

        // BaudRate = LPUART Clock Frequency / ((OSR+1) * SBR)
        // TODO assert uartClkSrcFreq = 24'000'000;
        Lpuart1::BAUD::write(
            Lpuart1::BAUD::SBR{std::uint16_t{8}},
            Lpuart1::BAUD::SBNS     {Lpuart1::BAUD::eSBNS::eONE},
            Lpuart1::BAUD::RXEDGIE  {Lpuart1::BAUD::eRXEDGIE::eDISABLE},
            Lpuart1::BAUD::LBKDIE   {Lpuart1::BAUD::eLBKDIE::eDISABLE},
            Lpuart1::BAUD::RESYNCDIS{Lpuart1::BAUD::eRESYNCDIS::eRESYNC},
            Lpuart1::BAUD::BOTHEDGE {Lpuart1::BAUD::eBOTHEDGE::eDISABLED},
            Lpuart1::BAUD::MATCFG   {Lpuart1::BAUD::eMATCFG::eADDR_MATCH},
            Lpuart1::BAUD::RDMAE    {Lpuart1::BAUD::eRDMAE::eDISABLED},
            Lpuart1::BAUD::TDMAE    {Lpuart1::BAUD::eTDMAE::eDISABLED},  // keep disabled
            Lpuart1::BAUD::OSR      {Lpuart1::BAUD::eOSR::eOSR_25},
            Lpuart1::BAUD::M10      {Lpuart1::BAUD::eM10::eDISABLED},
            Lpuart1::BAUD::MAEN2    {Lpuart1::BAUD::eMAEN2::eDISABLED},
            Lpuart1::BAUD::MAEN1    {Lpuart1::BAUD::eMAEN1::eDISABLED});

        // FIFO: only the writable (non-RO, non-W1C) fields are listed; the
        // FIFO size fields are RO and the RXUF/TXOF flags are W1C and were
        // no-ops in the old union-style writes.
        Lpuart1::FIFO::modify(
            Lpuart1::FIFO::RXFE   {Lpuart1::FIFO::eRXFE::eENABLED},
            Lpuart1::FIFO::TXFE   {Lpuart1::FIFO::eTXFE::eENABLED},
            Lpuart1::FIFO::RXUFE  {Lpuart1::FIFO::eRXUFE::eDISABLED},
            Lpuart1::FIFO::TXOFE  {Lpuart1::FIFO::eTXOFE::eDISABLED},
            Lpuart1::FIFO::RXIDEN {Lpuart1::FIFO::eRXIDEN::eDISABLED},
            Lpuart1::FIFO::RXFLUSH{Lpuart1::FIFO::eRXFLUSH::eNO_EFFECT},
            Lpuart1::FIFO::TXFLUSH{Lpuart1::FIFO::eTXFLUSH::eTXFIFO_RST});

        Lpuart1::WATER::reset();
        Lpuart1::MODIR::reset();

        // STAT: only the normal-RW fields. The original code also assigned
        // "no-effect" values to W1C status flags (MA2F/MA1F/PF/FE/NF/OR/IDLE/
        // RXEDGIF/LBKDIF) — those are no-ops on hardware (write-0 to W1C) so
        // we drop them.
        Lpuart1::STAT::modify(
            Lpuart1::STAT::LBKDE{Lpuart1::STAT::eLBKDE::eDISABLED},
            Lpuart1::STAT::BRK13{Lpuart1::STAT::eBRK13::eSHORT},
            Lpuart1::STAT::RWUID{Lpuart1::STAT::eRWUID::eIDLE_NOTSET},
            Lpuart1::STAT::RXINV{Lpuart1::STAT::eRXINV::eNOT_INVERTED},
            Lpuart1::STAT::MSBF {Lpuart1::STAT::eMSBF::eLSB_FIRST});

        Lpuart1::CTRL::write(
            Lpuart1::CTRL::PT     {Lpuart1::CTRL::ePT::eEVEN},
            Lpuart1::CTRL::PE     {Lpuart1::CTRL::ePE::eDISABLED},
            Lpuart1::CTRL::ILT    {Lpuart1::CTRL::eILT::eFROM_STOP},
            Lpuart1::CTRL::WAKE   {Lpuart1::CTRL::eWAKE::eIDLE},
            Lpuart1::CTRL::M      {Lpuart1::CTRL::eM::eDATA8},
            Lpuart1::CTRL::RSRC   {Lpuart1::CTRL::eRSRC::eNO_EFFECT},
            Lpuart1::CTRL::DOZEEN {Lpuart1::CTRL::eDOZEEN::eENABLED},
            Lpuart1::CTRL::LOOPS  {Lpuart1::CTRL::eLOOPS::eNOFFECT},
            Lpuart1::CTRL::IDLECFG{Lpuart1::CTRL::eIDLECFG::eIDLE_2},
            Lpuart1::CTRL::M7     {Lpuart1::CTRL::eM7::eNO_EFFECT},
            Lpuart1::CTRL::MA2IE  {Lpuart1::CTRL::eMA2IE::eDISABLED},
            Lpuart1::CTRL::MA1IE  {Lpuart1::CTRL::eMA1IE::eDISABLED},
            Lpuart1::CTRL::SBK    {Lpuart1::CTRL::eSBK::eNO_EFFECT},
            Lpuart1::CTRL::RWU    {Lpuart1::CTRL::eRWU::eNO_EFFECT},
            Lpuart1::CTRL::RE     {Lpuart1::CTRL::eRE::eENABLED},
            Lpuart1::CTRL::TE     {Lpuart1::CTRL::eTE::eDISABLED});  // disable TX until DMA ready

        // Set DONE flag in case we inherit a different state.
        regs::Dma0::TCD_CSR<0>::modify(regs::Dma0::TCD_CSR<0>::DONE{true});
    }

public:
    void write(const uint8_t *buffer, uint16_t size)
    {
        using Dma0    = regs::Dma0;
        using Dmamux0 = regs::Dmamux0;

        // Per-channel TCD aliases — channel 0 is wired to LPUART1 TX.
        using Csr    = Dma0::TCD_CSR<0>;
        using Citer  = Dma0::TCD_CITER_ELINKNO<0>;
        using Biter  = Dma0::TCD_BITER_ELINKNO<0>;
        using Soff   = Dma0::TCD_SOFF<0>;
        using Doff   = Dma0::TCD_DOFF<0>;
        using Saddr  = Dma0::TCD_SADDR<0>;
        using Daddr  = Dma0::TCD_DADDR<0>;
        using Attr   = Dma0::TCD_ATTR<0>;
        using Nbytes = Dma0::TCD_NBYTES_MLNO<0>;

        using Chcfg0 = Dmamux0::CHCFG<0>;

        // Wait for completion of the previous write.
        while (!Csr::read().get<Csr::DONE>()) {}

        // Wait for UART shift register to empty.
        while (Lpuart1::STAT::read().get<Lpuart1::STAT::TC>() != Lpuart1::STAT::eTC::eCOMPLETE) {}

        // Tear down any ongoing transfer: disable UART + its DMA trigger,
        // disable DMAMUX channel, disable DMA requests.
        Lpuart1::CTRL::modify(Lpuart1::CTRL::TE{Lpuart1::CTRL::eTE::eDISABLED});
        Lpuart1::BAUD::modify(Lpuart1::BAUD::TDMAE{Lpuart1::BAUD::eTDMAE::eDISABLED});
        Chcfg0::modify(Chcfg0::ENBL{Chcfg0::eENBL::eENBL_0});
        Dma0::ERQ::modify(Dma0::ERQ::ERQ0{Dma0::ERQ::eERQ0::eDISABLE});

        // Clear sticky flags. (ES is RO in SVD; the old es.Reset() write was
        // ignored on silicon. Real error-clear goes through CR[CX] / CERR.)
        Csr::modify(Csr::DONE{true},                      // clear DONE
                    Csr::DREQ{Csr::eDREQ::eCLEAR});        // prevent auto-disable

        // Copy the data (no cache clean necessary for OCRAM2).
        assert(size <= kTxBufferSize);
        std::memcpy(tx_buffer_, buffer, size);

        // Reconfigure the TCD.
        Saddr::write (Saddr::SADDR{reinterpret_cast<std::uint32_t>(tx_buffer_)});
        Soff::write  (Soff::SOFF{static_cast<std::uint16_t>(1)});       // step source by 1 byte
        Daddr::write (Daddr::DADDR{static_cast<std::uint32_t>(Lpuart1::DATA::kAddr)});
        Doff::write  (Doff::DOFF{static_cast<std::uint16_t>(0)});       // keep dest fixed
        Nbytes::write(Nbytes::NBYTES{1u});                              // 1 byte per minor-loop
        Attr::write  (Attr::SSIZE{Attr::eSSIZE::eEIGHT},                // 8-bit transfers
                      Attr::DSIZE{static_cast<std::uint8_t>(0)});
        Biter::write (Biter::BITER{size}, Biter::ELINK{Biter::eELINK::eDISABLED});
        // CITER must be loaded *after* BITER per the reference manual.
        Citer::write (Citer::CITER{size}, Citer::ELINK{Citer::eELINK::eDISABLED});

        // Arm DMAMUX (SOURCE=8 → LPUART1 TX) & clear pending requests.
        Chcfg0::modify(Chcfg0::SOURCE{std::uint8_t{8}},
                       Chcfg0::ENBL  {Chcfg0::eENBL::eENBL_1});
        Dma0::SERQ::reset();

        // Enable DMA + UART, then kick off.
        Dma0::ERQ::modify(Dma0::ERQ::ERQ0{Dma0::ERQ::eERQ0::eENABLE});
        Lpuart1::CTRL::modify(Lpuart1::CTRL::TE   {Lpuart1::CTRL::eTE::eENABLED});
        Lpuart1::BAUD::modify(Lpuart1::BAUD::TDMAE{Lpuart1::BAUD::eTDMAE::eENABLED});
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
        while (Lpuart1::STAT::read().get<Lpuart1::STAT::RDRF>() == Lpuart1::STAT::eRDRF::eNO_RXDATA) {}
        return static_cast<std::uint8_t>(Lpuart1::DATA::raw() & 0xFFu);
    }
private:
    uint8_t *tx_buffer_ = nullptr;
};
