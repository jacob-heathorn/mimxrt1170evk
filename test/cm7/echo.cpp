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

    // Set CTRL
    nLPUART1::CTRL::Instance().value = 260;

    // Set FIFO
    nLPUART1::FIFO::Instance().value = 12648601;

    // TODO set water

    // Set MODIR
    nLPUART1::MODIR::Instance().value = 0;

    // Set STAT. Not msb
    nLPUART1::STAT::Instance().value = 12582912;

    // Set CTRL.
    nLPUART1::CTRL::Instance().value = 786692;
}


// void uart_read_string(char *buffer, size_t max_length) {
//     size_t i = 0;
//     while (i < max_length - 1) {
//         char c = DbgConsole_Getchar();
//         if (c == '\r' || c == '\n') break;  // Stop on Enter key
//         buffer[i++] = c;
//     }
//     buffer[i] = '\0';  // Null-terminate string
// }

int main(void) {
    // char input_buffer[50];
    InitLPUART1();
    BOARD_InitDebugConsole();
    
    DbgConsole_Putchar('H');

    // TODO: Restore.
    // printf("MIMXRT1170 UART String Echo Test\r\n");

    // while (1) {
    //     printf("Type something: ");
    //     uart_read_string(input_buffer, sizeof(input_buffer));
    //     printf("\r\nYou typed: %s\r\n", input_buffer);
    // }
}
