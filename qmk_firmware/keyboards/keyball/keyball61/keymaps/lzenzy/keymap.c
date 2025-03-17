/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include QMK_KEYBOARD_H

#include "quantum.h"


// clang-format on

// コンボとなるキーの配列[
const uint16_t PROGMEM combo_esc[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_bs[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM jd_combo[] = {KC_J, KC_D, COMBO_END};

// コンボキーの配列
combo_t key_combos[] = {
  COMBO(combo_esc, KC_ESC),
  COMBO(combo_tab, KC_TAB),
  COMBO(combo_bs, KC_BSPC),
  COMBO(jd_combo, QK_CAPS_WORD_TOGGLE)
};
