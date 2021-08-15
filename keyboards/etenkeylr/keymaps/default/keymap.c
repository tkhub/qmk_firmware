/* Copyright 2021 tkhub
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _DEFTENKEY = 0,
    _FN
    // _BASE,
    //_FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base 
    [_BASE] = LAYOUT(
        KC_A,    KC_1,    MO(_FN),
            KC_TAB,   KC_SPC
    ),
    [_FN] = LAYOUT(/
        QMKBEST, QMKURL,  _______,
            RESET,    XXXXXXX
    )
};
*/
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_DEFTENKEY] = LAYOUT(
    //              COL0        COL1        COL2        COL3        COL4        COL5
    /* ROW4 */      KC_ESC,     KC_PMNS,    KC_PAST,    KC_PSLS,    KC_BSPC,    KC_A,   \
    /* ROW3 */      KC_TAB,     KC_PPLS,    KC_P9,      KC_P8,      KC_P7,      KC_X, \
    /* ROW2 */      KC_LCTL,    KC_NO,      KC_P6,      KC_P5,      KC_P4,      KC_C, \
    /* ROW1 */      KC_LSFT,    KC_ENT,     KC_P3,      KC_P2,      KC_P1,      KC_V, \
    /* ROW0 */      KC_NO,      KC_NO,      KC_PDOT,    KC_P0,      KC_P0,      KC_Z\
    ),
    [_FN] = LAYOUT(
    //              COL0        COL1        COL2        COL3        COL4        COL5
    /* ROW4 */      KC_ESC,     KC_PMNS,    KC_PAST,    KC_PSLS,    KC_BSPC,    KC_A,   \
    /* ROW3 */      KC_TAB,     KC_PPLS,    KC_P9,      KC_P8,      KC_P7,      KC_X, \
    /* ROW2 */      KC_LCTL,    KC_NO,      KC_P6,      KC_P5,      KC_P4,      KC_C, \
    /* ROW1 */      KC_LSFT,    KC_ENT,     KC_P3,      KC_P2,      KC_P1,      KC_V, \
    /* ROW0 */      KC_NO,      KC_NO,      KC_PDOT,    KC_P0,      KC_P0,      KC_Z\
    )};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
