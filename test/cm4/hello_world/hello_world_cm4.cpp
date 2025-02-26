/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/gpio9.hpp"
#include "registers/iomuxc.hpp"
#include "registers/ccm.hpp"
#include "drivers_new/gpio.hpp"

volatile bool g_pinSet = false;

/*!
 * @brief Application-specific implementation of the SystemInitHook() weak function.
 */
void SystemInitHook(void)
{
    /* Initialize MCMGR - low level multicore management library. Call this
       function as close to the reset entry as possible to allow CoreUp event
       triggering. The SystemInitHook() weak function overloading is used in this
       application. */
    (void)MCMGR_EarlyInit();
}


void BoardInitPins()
{
}

/*!
 * @brief Main function
 */
int main(void)
{
    uint32_t startupData, i;
    mcmgr_status_t status;

    /* Init board hardware.*/
    BOARD_ConfigMPU();
    BoardInitPins();
    SystemCoreClock = CLOCK_GetRootClockFreq(kCLOCK_Root_M4);

    /* Initialize MCMGR, install generic event handlers */
    (void)MCMGR_Init();

    /* Get the startup data */
    do
    {
        status = MCMGR_GetStartupData(&startupData);
    } while (status != kStatus_MCMGR_Success);

    /* Make a noticable delay after the reset */
    /* Use startup parameter from the master core... */
    for (i = 0; i < startupData; i++)
    {
        SDK_DelayAtLeastUs(1000000U, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);
    }

    /* Configure LED */
    Gpio<9> led(3);
    led.configure(Direction::eOutput);
    led.write(false);

    for (int j = 0; j < 20; ++j)
    {
        //SDK_DelayAtLeastUs(500000U, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);

        for (int i = 0; i < 1000000; ++i)
        {
            int y = i * 3 / 2;
            (void)y;
        }
        led.toggle();
    }

    for (;;)
    {
        //SDK_DelayAtLeastUs(500000U, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);

        for (int i = 0; i < 10000000; ++i)
        {
            int y = i * 3 / 2;
            (void)y;
        }
        led.toggle();
    }
}
