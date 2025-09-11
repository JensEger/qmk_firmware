// You shouldn't need to edit any of this.

#pragma once

// https://docs.qmk.fm/features/pointing_device
// https://ryanis.cool/cosmos/docs/qmk-rp2040/#configuration
// https://ryanis.cool/cosmos/_app/immutable/assets/lemon-pcb-pinout.vhb9kmvX.png


// #include "keyboards/dr_jegtyl/vik/config.vik.pre.h"

// #define EE_HANDS
// #define VIK_SPI_DRIVER   SPID1

// #define VIK_SPI_SCK_PIN  GP14
// #define VIK_SPI_MOSI_PIN GP15
// #define VIK_SPI_MISO_PIN GP12
// #define VIK_SPI_CS       GP13
// #define VIK_I2C_DRIVER   I2CD1
// #define VIK_I2C_SDA_PIN  GP18
// #define VIK_I2C_SCL_PIN  GP19
// #define VIK_GPIO_1       GP26
// #define VIK_GPIO_2       GP27
// #define VIK_WS2812_DI_PIN GP2

// Config from Docs - doesn't work:
/* Trackball */
// #define SPI_DRIVER SPID0
// #define SPI_SCK_PIN GP18
// #define SPI_MISO_PIN GP20
// #define SPI_MOSI_PIN GP19
// #define POINTING_DEVICE_CS_PIN GP10
// #define ROTATIONAL_TRANSFORM_ANGLE -30 // Optional: Rotates the trackball
// #define POINTING_DEVICE_INVERT_X // Optional: Inverts trackball X


/* Trackball  Config using VIK Pins - doesn't work*/
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP14
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP15
#define POINTING_DEVICE_CS_PIN GP13
#define ROTATIONAL_TRANSFORM_ANGLE -30 // Optional: Rotates the trackball
#define POINTING_DEVICE_INVERT_X // Optional: Inverts trackball X

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define SPLIT_USB_DETECT
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_PIN_SWAP
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

// Case Words
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Speculative Hold
#define MODS_TO_NEUTRALIZE { MOD_BIT(KC_LEFT_ALT), MOD_BIT(KC_LEFT_GUI), MOD_BIT(KC_APP) }

// Auto Shift
#define AUTO_SHIFT_TIMEOUT 175
#define NO_AUTO_SHIFT_NUMERIC 
#define AUTO_SHIFT_ENTER

#include "keyboards/dr_jegtyl/vik/config.vik.post.h"
