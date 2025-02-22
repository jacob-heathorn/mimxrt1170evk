/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/gpio9.hpp"
#include "registers/iomuxc_gpr.hpp"
#include "registers/iomuxc.hpp"

#include "fsl_gpio.h"
volatile bool g_pinSet = false;
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define LED_INIT()                   \
    gpio_pin_config_t led_config = { \
        kGPIO_DigitalOutput,         \
        0,                           \
    };                               \
    GPIO_PinInit(BOARD_USER_LED_GPIO, BOARD_USER_LED_GPIO_PIN, &led_config);

//#define LED_TOGGLE() GPIO_PortToggle(BOARD_USER_LED_GPIO, 1u << BOARD_USER_LED_GPIO_PIN);
#define LED_TOGGLE()                                                     \
    if (g_pinSet)                                                        \
    {                                                                    \
        GPIO_PinWrite(BOARD_USER_LED_GPIO, BOARD_USER_LED_GPIO_PIN, 0U); \
        g_pinSet = false;                                                \
    }                                                                    \
    else                                                                 \
    {                                                                    \
        GPIO_PinWrite(BOARD_USER_LED_GPIO, BOARD_USER_LED_GPIO_PIN, 1U); \
        g_pinSet = true;                                                 \
    }

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

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


namespace n_IOMUXC
{
union SW_MUX_CTL_PAD_GPIO_AD_04 {
    enum class eMUX_MODE : uint32_t {
        eALT0_EMVSIM1_PD=0, // Select mux mode: ALT0 mux port: EMVSIM1_PD of instance: EMVSIM1
        eALT1_lpuart8_CTS_B=1, // Select mux mode: ALT1 mux port: LPUART8_CTS_B of instance: LPUART8
        eALT2_enet_1g_1588_EVENT3_IN=2, // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT3_IN of instance: ENET_1G
        eALT3_gpt2_COMPARE3=3, // Select mux mode: ALT3 mux port: GPT2_COMPARE3 of instance: GPT2
        eALT4_flexpwm1_PWMA2=4, // Select mux mode: ALT4 mux port: FLEXPWM1_PWM2_A of instance: FLEXPWM1
        eALT5_gpio_mux3_IO3=5, // Select mux mode: ALT5 mux port: GPIO_MUX3_IO03 of instance: GPIO_MUX3
        eALT6_WDOG1_B=6, // Select mux mode: ALT6 mux port: WDOG1_B of instance: WDOG1
        eALT8_flexio2_FLEXIO4=8, // Select mux mode: ALT8 mux port: FLEXIO2_D04 of instance: FLEXIO2
        eALT9_qtimer4_TIMER0=9, // Select mux mode: ALT9 mux port: TMR4_TIMER0 of instance: TMR4
        eALT10_gpio9_IO3=10, // Select mux mode: ALT10 mux port: GPIO9_IO03 of instance: GPIO9
    };

    uint32_t value;  // Full 32-bit register access
    struct {
        eMUX_MODE MUX_MODE : 4;
        uint32_t SION : 1;
        uint32_t _reserved : 27;
    } bits;  // Bit-field struct (automatically optimized)

    // // Constructor initializes the reference to the real register
    // SW_MUX_CTL_PAD_GPIO_AD_04() : value(*address) {}
    SW_MUX_CTL_PAD_GPIO_AD_04() = delete;

    static inline volatile SW_MUX_CTL_PAD_GPIO_AD_04 &Instance() {
        return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_AD_04*>(0x400E811C);
    }

    
    inline void Reset() volatile { this->value = 0x00000005; }

};
}

void BoardInitPins()
{
    // IOMUXC_SetPinMux(
    //   IOMUXC_GPIO_AD_04_GPIO9_IO03,           /* GPIO_AD_04 is configured as GPIO9_IO03 */
    //   0U);

    // nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04_t iomuxc_sw_pad{};
    // iomuxc_sw_pad.SetMUX_MODE(nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04_t::eMUX_MODE::eALT10_gpio9_IO3);

    // Set GPIO9, pin3 mux.
    auto &reg = n_IOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::Instance();
    reg.Reset();
    reg.bits.MUX_MODE = n_IOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::eMUX_MODE::eALT10_gpio9_IO3;
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
    BOARD_InitPins();
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
    LED_INIT();
    nGPIO9::Registers gpio9{};
    // nGPIO9::DR_t gpio9_dr;
    // auto dr = gpio9_dr.GetDR();

    for (int j = 0; j < 20; ++j)
    {
        //SDK_DelayAtLeastUs(500000U, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);

        for (int i = 0; i < 1000000; ++i)
        {
            int y = i * 3 / 2;
            (void)y;
        }
        LED_TOGGLE();
    }

    for (;;)
    {
        //SDK_DelayAtLeastUs(500000U, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);

        for (int i = 0; i < 10000000; ++i)
        {
            int y = i * 3 / 2;
            (void)y;
        }
        // gpio9_dr->DR_TOGGLE.SetDR_TOGGLE(1);
        // dr = gpio9_dr.GetDR();
        //LED_TOGGLE();
        // dr = gpio9_dr.GetDR();
        // auto x = dr;
        // (void)x;
        gpio9.DR_TOGGLE.SetDR_TOGGLE(8);
    }
}
