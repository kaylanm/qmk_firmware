/*
Copyright 2019 Yaotian Feng(Codetector) <codetector@codetector.cn>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "config_common.h"

#define VENDOR_ID 0x4D4C
#define PRODUCT_ID 0x1212
#define DEVICE_VER 0x101
#define MANUFACTURER Matrix
#define PRODUCT Matrix M12og STM
#define DESCRIPTION Matrix M12OG STM32 Keyboard

#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROWS 6
#define MATRIX_COLS 16
#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A5 }
#define MATRIX_COL_PINS { C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15 }

#define RGB_DI_PIN B8
#define RGBLED_NUM 16

#define WS2812_PWM_DRIVER PWMD4  // default: PWMD2
#define WS2812_PWM_CHANNEL 3  // default: 2
// #define WS2812_PWM_PAL_MODE 0  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA_STREAM_ID(1, 7)  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 7  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_PWM_TARGET_PERIOD 800000 // Not 10x less on F103 -_-

// TM1812 is RGB, not GRB color order
#define WS2812_RED_ORDER 0
#define WS2812_GREEN_ORDER 1
#define WS2812_BLUE_ORDER 2

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)
