/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Use SPI to drive 74HC595 shift register */
#define DRIVE_SHRIFT_REGISTER_WITH_SPI

/* Turn off effects when suspended */
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define LED_DISABLE_WHEN_USB_SUSPENDED

/* DIP switch for Mac/win OS switch */
#define DIP_SWITCH_PINS \
    { A8 }

/* Caps lock LED Pin */
#define LED_CAPS_LOCK_PIN A0
#define LED_PIN_ON_STATE 1

/* Increase I2C speed to 1000 KHz */
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 15U
#define I2C1_TIMINGR_SCLL 51U

#ifdef KC_BLUETOOTH_ENABLE
/* Hardware configuration */
#    define USB_BT_MODE_SELECT_PIN A10

#    define CKBT51_RESET_PIN A9
#    define CKBT51_INT_INPUT_PIN A5
#    define BLUETOOTH_INT_INPUT_PIN A6

#    define USB_POWER_SENSE_PIN B1
#    define USB_POWER_CONNECTED_LEVEL 0

#    define BAT_LOW_LED_PIN A4
#    define BAT_LOW_LED_PIN_ON_STATE 1

#    define HOST_DEVICES_COUNT 3

#    define HOST_LED_PIN_LIST \
        { H3, H3, H3 }
#    define HOST_LED_PIN_ON_STATE 1

#    if defined(RGB_MATRIX_ENABLE) || defined(LED_MATRIX_ENABLE)

#        define LED_DRIVER_SHUTDOWN_PIN C14

#        define HOST_LED_MATRIX_LIST \
            { 17, 18, 19 }

#        define BAT_LEVEL_LED_LIST \
            { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 }

/* Backlit disable timeout when keyboard is disconnected(unit: second) */
#        define DISCONNECTED_BACKLIGHT_DISABLE_TIMEOUT 40

/* Backlit disable timeout when keyboard is connected(unit: second) */
#        define CONNECTED_BACKLIGHT_DISABLE_TIMEOUT 600
#    endif

/* Keep USB connection in blueooth mode */
#    define KEEP_USB_CONNECTION_IN_BLUETOOTH_MODE

/* Enable bluetooth NKRO */
#    define BLUETOOTH_NKRO_ENABLE

/* Raw hid command for factory test and bluetooth DFU */
#    define RAW_HID_CMD 0xAA ... 0xAB
#else
/* Raw hid command for factory test */
#    define RAW_HID_CMD 0xAB
#endif

/* Emulated EEPROM configuration */
#define FEE_DENSITY_BYTES FEE_PAGE_SIZE
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2047

/* Factory test keys */
#define FN_KEY1 MO(1)
#define FN_KEY2 MO(3)

// Custom mouse keys config
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
// #define MK_C_OFFSET_0 1
// #define MK_C_INTERVAL_0 32
#define MK_C_OFFSET_1 8
#define MK_C_INTERVAL_1 4
#define MK_C_OFFSET_UNMOD 24
#define MK_C_INTERVAL_UNMOD 4
#define MK_C_OFFSET_2 72
#define MK_C_INTERVAL_2 4

// #define MK_W_OFFSET_0 1
// #define MK_W_INTERVAL_0 360
#define MK_W_OFFSET_1 1
#define MK_W_INTERVAL_1 100
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 60
#define MK_W_OFFSET_2 1
#define MK_W_INTERVAL_2 20
