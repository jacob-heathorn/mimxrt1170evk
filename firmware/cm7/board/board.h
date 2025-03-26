/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include "clock_config.h"
#include "fsl_common.h"
#include "fsl_gpio.h"
#include "fsl_clock.h"
#if defined(CONFIG_BT_LOW_POWER_MODE) && (CONFIG_BT_LOW_POWER_MODE)
#if (defined(BUTTON_COUNT) && (BUTTON_COUNT > 0U))
#include "fsl_component_button.h"
#endif /* BUTTON_COUNT */
#endif /* CONFIG_BT_LOW_POWER_MODE */

/*! @brief The EMVSIM SMARTCARD PHY configuration. */
#define BOARD_SMARTCARD_MODULE                (EMVSIM1)      /*!< SMARTCARD communicational module instance */
#define BOARD_SMARTCARD_MODULE_IRQ            (EMVSIM1_IRQn) /*!< SMARTCARD communicational module IRQ handler */
#define BOARD_SMARTCARD_CLOCK_MODULE_CLK_FREQ (CLOCK_GetRootClockFreq(kCLOCK_Root_Emv1))
#define BOARD_SMARTCARD_CLOCK_VALUE           (4000000U) /*!< SMARTCARD clock frequency */

/* USB PHY condfiguration */
#define BOARD_USB_PHY_D_CAL     (0x07U)
#define BOARD_USB_PHY_TXCAL45DP (0x06U)
#define BOARD_USB_PHY_TXCAL45DM (0x06U)

#define BOARD_ARDUINO_INT_IRQ   (GPIO1_INT3_IRQn)
#define BOARD_ARDUINO_I2C_IRQ   (LPI2C1_IRQn)
#define BOARD_ARDUINO_I2C_INDEX (1)

#define BOARD_HAS_SDCARD (1U)

/* @Brief Board accelerator sensor configuration */
#define BOARD_ACCEL_I2C_BASEADDR LPI2C5
/* Clock divider for LPI2C clock source */
#define BOARD_ACCEL_I2C_CLOCK_FREQ (CLOCK_GetRootClockFreq(kCLOCK_Root_Lpi2c5))

#define BOARD_CODEC_I2C_BASEADDR             LPI2C5
#define BOARD_CODEC_I2C_INSTANCE             5U
#define BOARD_CODEC_I2C_CLOCK_SOURCE_SELECT  (0U)
#define BOARD_CODEC_I2C_CLOCK_SOURCE_DIVIDER (6U)
#define BOARD_CODEC_I2C_CLOCK_FREQ           (24000000U)

/* @Brief Board CAMERA configuration */
#define BOARD_CAMERA_I2C_BASEADDR      LPI2C6
#define BOARD_CAMERA_I2C_CLOCK_ROOT    kCLOCK_Root_Lpi2c6
#define BOARD_CAMERA_I2C_CLOCK_SOURCE  (1U)  /* OSC24M. */
#define BOARD_CAMERA_I2C_CLOCK_DIVIDER (12U) /* Divider = 12, LPI2C clock frequency 2M. */

/*! @brief The MIPI panel pins. */
#define BOARD_MIPI_PANEL_RST_GPIO   GPIO9
#define BOARD_MIPI_PANEL_RST_PIN    1
#define BOARD_MIPI_PANEL_POWER_GPIO GPIO11
#define BOARD_MIPI_PANEL_POWER_PIN  16
/* Back light pin. */
#define BOARD_MIPI_PANEL_BL_GPIO GPIO9
#define BOARD_MIPI_PANEL_BL_PIN  29

/* Touch panel. */
#define BOARD_MIPI_PANEL_TOUCH_I2C_BASEADDR      LPI2C5
#define BOARD_MIPI_PANEL_TOUCH_I2C_CLOCK_ROOT    kCLOCK_Root_Lpi2c5
#define BOARD_MIPI_PANEL_TOUCH_I2C_CLOCK_SOURCE  (1U)  /* OSC24M. */
#define BOARD_MIPI_PANEL_TOUCH_I2C_CLOCK_DIVIDER (12U) /* Divider = 12, LPI2C clock frequency 2M. */
#define BOARD_MIPI_PANEL_TOUCH_I2C_CLOCK_FREQ    CLOCK_GetRootClockFreq(BOARD_MIPI_PANEL_TOUCH_I2C_CLOCK_ROOT)
#define BOARD_MIPI_PANEL_TOUCH_RST_GPIO          GPIO9
#define BOARD_MIPI_PANEL_TOUCH_RST_PIN           0
#define BOARD_MIPI_PANEL_TOUCH_INT_GPIO          GPIO8
#define BOARD_MIPI_PANEL_TOUCH_INT_PIN           31

/*! @brief The camera pins. */
#define BOARD_CAMERA_PWDN_GPIO GPIO9
#define BOARD_CAMERA_PWDN_PIN  25
#define BOARD_CAMERA_RST_GPIO  GPIO11
#define BOARD_CAMERA_RST_PIN   15

/* SD card detection method when using wifi module. */
#define BOARD_WIFI_SD_DETECT_TYPE kSDMMCHOST_DetectCardByHostDATA3

#define BOARD_BT_UART_INSTANCE    7
#define BOARD_BT_UART_BASEADDR    (uint32_t) LPUART7
#define BOARD_BT_UART_BAUDRATE    3000000
#define BOARD_BT_UART_CLK_FREQ    CLOCK_GetRootClockFreq(kCLOCK_Root_Lpuart7);
#define BOARD_BT_UART_IRQ         LPUART7_IRQn
#define BOARD_BT_UART_IRQ_HANDLER LPUART7_IRQHandler

/*! @brief The Ethernet port used by network examples, default use 1G port. */
/* Below comment is for test script to easily define which port to be used, please don't delete. */
/* @TEST_ANCHOR */
#ifndef BOARD_NETWORK_USE_100M_ENET_PORT
#define BOARD_NETWORK_USE_100M_ENET_PORT (0U)
#endif

/* Timer Manager definition. */
#define BOARD_TM_INSTANCE   1
#define BOARD_TM_CLOCK_ROOT kCLOCK_Root_Gpt1

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */


void BOARD_ConfigMPU(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* _BOARD_H_ */
