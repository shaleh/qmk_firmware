/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( DRAG_SCROLL, KC_BTN4, KC_BTN5, KC_BTN3,
                  KC_BTN1,                       KC_BTN2 )
    /* Desired layout
       [0] = LAYOUT( DRAG_SCROLL, KC_BTN4, KC_BTN5, KC_BTN3 + layer shift,
                     KC_BTN1,                       KC_BTN2 )
       [1] = LAYOUT( VOLUME_SCROLL, PGUP or Wheel up, PgDn or Wheel down, ___,
                      HOME,                          END )
       Explore combos. How they work.
       Make a combo for Zoom in (Ctrl +) and Zoom out (Ctrol -) and Zoom reset (Ctrl 0)
       Can I also get Mute/Video working with meet? Maybe another layer?
     */
};
