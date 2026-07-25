// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later 
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┐
     *     │ 8 │ 
     * ┌───┼───┼───┐
     * │ 4 │ 5 │ 6 │
     * └───┼───┼───┘
     *     │ . │
     *     └───┘
     */
    [0] = LAYOUT(
        MS_UP,   
        MS_LEFT,   MS_BTN1,   MS_RGHT,
        MS_DOWN
    )
};
#if defined(OLED_ENABLE)
bool oled_task_user(void) {
        oled_write("SelPad", false);
        return false;
    }
#endif
