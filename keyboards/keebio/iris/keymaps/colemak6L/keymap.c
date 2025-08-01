#include QMK_KEYBOARD_H

#ifdef CONSOLE_ENABLE
#include "print.h"
#endif 
#include <keycodes.h>
#include "keymap_german.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum layers
{
    _COLEMAK = 0,
    _NAV,
    _NUM,
    _SRT,
    _FUN,
    _GAM,
};

// enum custom_keycodes {
//     SELWBAK = SAFE_RANGE,
//     SELWFWD,
//     SELLINE,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, SC_LSPO, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, SC_RSPC, LCTL_T(KC_LCBR), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_HOME, KC_END, KC_K, KC_M, KC_COMM, KC_DOT, KC_QUOT, LALT_T(KC_RCBR), LT(1,KC_LGUI), LT(2,OSM(MOD_LALT)), LT(3,KC_ENT), KC_SPC, LT(4,OSM(MOD_RALT)), LT(5,KC_APP)),
    [_NAV] = LAYOUT(KC_NO, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_PSCR, KC_NO, KC_NO, QK_MACRO_1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F11, KC_F12, QK_MACRO_2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_0, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [_NUM] = LAYOUT(KC_NO, KC_NO, KC_CIRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_TAB, KC_DQUO, KC_PERC, KC_LT, KC_GT, KC_COLN, KC_PPLS, KC_P7, KC_P8, KC_P9, KC_MINS, KC_BSPC, KC_LSFT, KC_DLR, KC_HASH, KC_LPRN, KC_RPRN, KC_AT, KC_PAST, KC_P4, KC_P5, KC_P6, KC_PSLS, KC_RSFT, KC_LCTL, KC_TILD, KC_BSLS, KC_QUES, KC_EXLM, KC_AMPR, KC_NO, KC_BSPC, KC_AMPR, KC_P1, KC_P2, KC_P3, KC_EQL, KC_RCTL, KC_NO, KC_TRNS, KC_NO, KC_PENT, KC_PDOT, KC_P0),
    [_SRT] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, LSFT(KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO, KC_LSFT, LSFT(KC_ENT), LALT(KC_ENT), KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_LCTL, LCTL(KC_ENT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SELWBAK, SELLINE, SELWORD, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
    [_FUN] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU, KC_NO, KC_LSFT, KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_NO, RALT(KC_Q), RALT(KC_P), RALT(KC_Y), KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO),
    [_GAM] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LALT(KC_P), KC_RSFT, KC_LCTL, KC_Y, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_M, KC_N, KC_SCLN, KC_DOT, KC_MINS, KC_RCTL, QK_LLCK, KC_NO, KC_SPC, KC_ENT, KC_NO, KC_TRNS)
   };

// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     if (host_keyboard_led_state().caps_lock) {
//         RGB_MATRIX_INDICATOR_SET_COLOR(5, 255, 255, 255); // assuming caps lock is at led #5
//     } else {
//         RGB_MATRIX_INDICATOR_SET_COLOR(5, 0, 0, 0);
//     }
//     return false;
// }

// https://docs.qmk.fm/#/feature_rgb_matrix?id=functions
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case _GAM:
                rgb_matrix_set_color(i, RGB_PURPLE); // Violet
                break;
             case _FUN:
                rgb_matrix_set_color(i, RGB_CORAL); // Medium Blue
                break;
            case _SRT:
                rgb_matrix_set_color(i, RGB_RED); // Red
                break;
            case _NUM:
                rgb_matrix_set_color(i, RGB_BLUE); // Ice Blue
                break;
            case _NAV:
                rgb_matrix_set_color(i, RGB_GREEN); // Green
                break;
            case _COLEMAK:
                rgb_matrix_set_color(i, RGB_YELLOW); // Golden
                break;
            default:
                rgb_matrix_set_color(i, RGB_YELLOW); // Golden
                break;
        }
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_MACRO_0:
            if (record->event.pressed) {
            SEND_STRING(SS_LGUI("."));
            return false;
        }
        case QK_MACRO_1:
            if (record->event.pressed) {
            SEND_STRING(SS_LGUI("l")); // WIN+L = lock Computer
            return false;
        }
        case QK_MACRO_2:
            if (record->event.pressed) {
            SEND_STRING(SS_LGUI("v")); // WIN+V = Paste Cycle
            return false;
        }
    }

    return true;
}







