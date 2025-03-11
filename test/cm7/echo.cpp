/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/iomuxc.hpp"
#include "registers/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>
#include "fsl_debug_console.h"
#include "registers/lpuart1.hpp"

// TODO 

void InitLPUART1()
{
    // TODO get this clock frequency from clock driver.
    //uint32_t uartClkSrcFreq = 24'000'000;
    // nLPUART1::

    // Enable LPUART1 clock.
    auto &lpuart_clk_direct = nCCM::LPCG86_DIRECT::Instance();
    auto &lpuart_clk_status = nCCM::LPCG86_STATUS0::Instance();
    if (lpuart_clk_status.bits.ON != nCCM::LPCG86_STATUS0::eON::eON_1)
    {
        lpuart_clk_direct.bits.ON = nCCM::LPCG86_DIRECT::eON::eON_1;
        while (lpuart_clk_status.bits.ON != nCCM::LPCG86_STATUS0::eON::eON_1) {}
    }

    // Software reset lpuart1. 
    nLPUART1::GLOBAL::Instance().bits.RST = nLPUART1::GLOBAL::eRST::eRESET;
    nLPUART1::GLOBAL::Instance().bits.RST = nLPUART1::GLOBAL::eRST::eNO_EFFECT;

    // Set BAUD register.
    auto &baud = nLPUART1::BAUD::Instance();
    // BaudRate = LPUART Clock Frequency / ((OSR+1) * SBR)
    // TODO assert uartClkSrcFreq = 24'000'000;
    baud.bits.SBR = 8;
    baud.bits.OSR = nLPUART1::BAUD::eOSR::eOSR_25;
    baud.bits.SBNS = nLPUART1::BAUD::eSBNS::eONE;
    baud.bits.RXEDGIE = nLPUART1::BAUD::eRXEDGIE::eDISABLE;
    baud.bits.LBKDIE = nLPUART1::BAUD::eLBKDIE::eDISABLE;
    baud.bits.RESYNCDIS = nLPUART1::BAUD::eRESYNCDIS::eRESYNC;
    baud.bits.BOTHEDGE = nLPUART1::BAUD::eBOTHEDGE::eDISABLED;
    baud.bits.MATCFG = nLPUART1::BAUD::eMATCFG::eADDR_MATCH;
    baud.bits.RDMAE = nLPUART1::BAUD::eRDMAE::eDISABLED;
    baud.bits.TDMAE = nLPUART1::BAUD::eTDMAE::eDISABLED;
    baud.bits.M10 = nLPUART1::BAUD::eM10::eDISABLED;
    baud.bits.MAEN2 = nLPUART1::BAUD::eMAEN2::eDISABLED;
    baud.bits.MAEN1 = nLPUART1::BAUD::eMAEN1::eDISABLED;

    // Set FIFO
    auto &fifo = nLPUART1::FIFO::Instance();
    //fifo.value = 12648601;
    fifo.bits.RXFIFOSIZE = nLPUART1::FIFO::eRXFIFOSIZE::eFIFO_4;
    fifo.bits.RXFE = nLPUART1::FIFO::eRXFE::eENABLED;
    fifo.bits.TXFIFOSIZE = nLPUART1::FIFO::eTXFIFOSIZE::eFIFO_4;
    fifo.bits.TXFE = nLPUART1::FIFO::eTXFE::eENABLED;
    fifo.bits.RXUFE = nLPUART1::FIFO::eRXUFE::eDISABLED;
    fifo.bits.TXOFE = nLPUART1::FIFO::eTXOFE::eDISABLED;
    fifo.bits.RXIDEN = nLPUART1::FIFO::eRXIDEN::eDISABLED;
    fifo.bits.RXFLUSH = nLPUART1::FIFO::eRXFLUSH::eNO_EFFECT;
    fifo.bits.TXFLUSH = nLPUART1::FIFO::eTXFLUSH::eNO_EFFECT;
    fifo.bits.RXUF = nLPUART1::FIFO::eRXUF::eNO_UNDERFLOW;
    fifo.bits.TXOF = nLPUART1::FIFO::eTXOF::eNO_OVERFLOW;
    fifo.bits.RXEMPT = nLPUART1::FIFO::eRXEMPT::eEMPTY;
    fifo.bits.TXEMPT = nLPUART1::FIFO::eTXEMPT::eEMPTY;

    // Set Watermark
    auto &water = nLPUART1::WATER::Instance();
    water.Reset();

    // Set MODIR
    auto &modir = nLPUART1::MODIR::Instance();
    modir.Reset();

    // Set STAT. Not msb
    auto &stat = nLPUART1::STAT::Instance();
    // stat.value = 12582912;
    stat.bits.MA2F = nLPUART1::STAT::eMA2F::eNOMATCH;
    stat.bits.MA1F = nLPUART1::STAT::eMA1F::eNOMATCH;
    stat.bits.PF = nLPUART1::STAT::ePF::eNOPARITY;
    stat.bits.FE = nLPUART1::STAT::eFE::eNOERROR;
    stat.bits.NF = nLPUART1::STAT::eNF::eNONOISE;
    stat.bits.OR = nLPUART1::STAT::eOR::eNO_OVERRUN;
    stat.bits.IDLE = nLPUART1::STAT::eIDLE::eNOIDLE;
    stat.bits.RDRF = nLPUART1::STAT::eRDRF::eNO_RXDATA;
    stat.bits.TC = nLPUART1::STAT::eTC::eCOMPLETE;
    stat.bits.TDRE = nLPUART1::STAT::eTDRE::eNO_TXDATA;
    stat.bits.RAF = nLPUART1::STAT::eRAF::eIDLE;
    stat.bits.LBKDE = nLPUART1::STAT::eLBKDE::eDISABLED;
    stat.bits.BRK13 = nLPUART1::STAT::eBRK13::eSHORT;
    stat.bits.RWUID = nLPUART1::STAT::eRWUID::eIDLE_NOTSET;
    stat.bits.RXINV = nLPUART1::STAT::eRXINV::eNOT_INVERTED;
    stat.bits.MSBF = nLPUART1::STAT::eMSBF::eLSB_FIRST;
    stat.bits.RXEDGIF = nLPUART1::STAT::eRXEDGIF::eNO_EDGE;
    stat.bits.LBKDIF = nLPUART1::STAT::eLBKDIF::eNOT_DETECTED;

    // Set CTRL
    auto &ctrl = nLPUART1::CTRL::Instance();
    // ctrl.value = 786692;
    ctrl.bits.PT = nLPUART1::CTRL::ePT::eEVEN;
    ctrl.bits.PE = nLPUART1::CTRL::ePE::eDISABLED;
    ctrl.bits.ILT = nLPUART1::CTRL::eILT::eFROM_STOP;
    ctrl.bits.WAKE = nLPUART1::CTRL::eWAKE::eIDLE;
    ctrl.bits.M = nLPUART1::CTRL::eM::eDATA8;
    ctrl.bits.RSRC = nLPUART1::CTRL::eRSRC::eNO_EFFECT;
    ctrl.bits.DOZEEN = nLPUART1::CTRL::eDOZEEN::eENABLED;
    ctrl.bits.LOOPS = nLPUART1::CTRL::eLOOPS::eNOFFECT;
    ctrl.bits.IDLECFG = nLPUART1::CTRL::eIDLECFG::eIDLE_2;
    ctrl.bits.M7 = nLPUART1::CTRL::eM7::eNO_EFFECT;
    ctrl.bits.MA2IE = nLPUART1::CTRL::eMA2IE::eDISABLED;
    ctrl.bits.MA1IE = nLPUART1::CTRL::eMA1IE::eDISABLED;
    ctrl.bits.SBK = nLPUART1::CTRL::eSBK::eNO_EFFECT;
    ctrl.bits.RWU = nLPUART1::CTRL::eRWU::eNO_EFFECT;
    ctrl.bits.RE = nLPUART1::CTRL::eRE::eENABLED;
    ctrl.bits.TE = nLPUART1::CTRL::eTE::eENABLED;
}


bool lpuart1_write_blocking(const uint8_t* buffer, size_t length) {
    assert(buffer != nullptr);

    const uint8_t* data_address = buffer;
    size_t transfer_size = length;

    auto &stat = nLPUART1::STAT::Instance();
    auto &data = nLPUART1::DATA::Instance();

    while (transfer_size > 0)
    {   
        while (stat.bits.TDRE == nLPUART1::STAT::eTDRE::eTXDATA) {
          // TODO: Add wait time, and fail if necessary.
        }
        data.value = static_cast<uint32_t>(*data_address);
        transfer_size--;
        data_address++;
    }
    while (stat.bits.TC == nLPUART1::STAT::eTC::eACTIVE) {
      // TODO: Add wait time, and fail if necessary.
    }

    return true;
}

int lpuart1_read_blocking(uint8_t *buffer, size_t max_length)
{
    assert(buffer != nullptr);

    size_t i = 0;
    uint8_t* data_address = buffer;
    auto &stat = nLPUART1::STAT::Instance();
    auto &data = nLPUART1::DATA::Instance();

    // TODO look for read errors.

    while (i < max_length - 1)
    {
        while (stat.bits.RDRF == nLPUART1::STAT::eRDRF::eNO_RXDATA) {}
        uint8_t c = (uint8_t)(data.value & 0xFF);
        data_address[i++] = c;

        if (c == '\r' || c == '\n') break;  // Stop on Enter key
    }
    buffer[i++] = '\0';  // Null-terminate string
    return i;
}


int main(void) {
    // TODO use printf and readf?

    InitLPUART1();
    char input_buffer[100];
    const char* message = "MIMXRT1170 UART String Echo Test\r\n";
    lpuart1_write_blocking(reinterpret_cast<const uint8_t*>(message), std::strlen(message));

    while (1) {
        const char* message2 = "Type something: ";
        lpuart1_write_blocking(reinterpret_cast<const uint8_t*>(message2), std::strlen(message2));
        lpuart1_read_blocking(reinterpret_cast<uint8_t*>(input_buffer), sizeof(input_buffer));
        
        lpuart1_write_blocking(reinterpret_cast<const uint8_t*>("\r\n"), std::strlen("\r\n"));
        lpuart1_write_blocking(reinterpret_cast<const uint8_t*>("You typed: "), std::strlen("You typed: "));
        lpuart1_write_blocking(reinterpret_cast<uint8_t*>(input_buffer), std::strlen(input_buffer));
        lpuart1_write_blocking(reinterpret_cast<const uint8_t*>("\r\n"), std::strlen("\r\n"));
    }
}
