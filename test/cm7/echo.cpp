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


void uart_read_string(char *buffer, size_t max_length) {
    size_t i = 0;
    while (i < max_length - 1) {
        char c = DbgConsole_Getchar();
        if (c == '\r' || c == '\n') break;  // Stop on Enter key
        buffer[i++] = c;
    }
    buffer[i] = '\0';  // Null-terminate string
}

int main(void) {
    char input_buffer[50];

    printf("MIMXRT1170 UART String Echo Test\r\n");

    while (1) {
        printf("Type something: ");
        uart_read_string(input_buffer, sizeof(input_buffer));
        printf("\r\nYou typed: %s\r\n", input_buffer);
    }
}
