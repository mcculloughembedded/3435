// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define SHIFT_T MT(MOD_LSFT, KC_T)
#define CTRL_S  MT(MOD_LCTL, KC_S)
#define ALT_R   MT(MOD_LALT, KC_R)
#define SUP_A   MT(MOD_LGUI, KC_A)

#define SHIFT_N MT(MOD_LSFT, KC_N)
#define CTRL_E  MT(MOD_LCTL, KC_E)
#define ALT_I   MT(MOD_LALT, KC_I)
#define SUP_O   MT(MOD_LGUI, KC_O)

const uint16_t PROGMEM esc_combo[]  = {SHIFT_N, CTRL_E, COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
  //,-----------------------------------------------------.                                ,-----------------------------------------------------.
         KC_Q,    KC_W,    KC_F,   KC_P,    KC_B,                                          KC_J,  KC_L,    KC_U,     KC_Y,   KC_QUOT,
  //|--------+--------+--------+--------+--------|                                         |--------+--------+--------+--------+--------|
         SUP_A,   ALT_R,   CTRL_S, SHIFT_T, KC_G,                                          KC_M,  SHIFT_N, CTRL_E,   ALT_I,  SUP_O,
  //|--------+--------+--------+--------+--------|                                         |--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,   KC_D,    KC_V,                                          KC_K,  KC_H,    KC_COMMA, KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|                        |--------+--------+--------+--------+--------+--------+--------|
                                         LT(2, KC_TAB), LT(1, KC_SPC),                       KC_ENT,   MO(3)
                                      //`--------------------------'                        `--------------------------'

  ),

    [1] = LAYOUT_split_3x5_2(
  //,-----------------------------------------------------.          ,-----------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSPC,
  //+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_LALT, KC_LCTL, XXXXXXX, XXXXXXX,                     CW_TOGG, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
  //+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_LPRN, KC_LCBR, KC_LBRC, XXXXXXX,

  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        XXXXXXX,  XXXXXXX,                  KC_DEL,   XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

      [2] = LAYOUT_split_3x5_2(
  //,-----------------------------------------------------.             ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,                       KC_ASTR, KC_7, KC_8, KC_9, KC_BSPC,
  //-+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+---------|
     XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,                       KC_EQL,  KC_4, KC_5, KC_6, KC_MINS,
  //-+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+---------|
     XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,                       KC_PLUS, KC_1, KC_2, KC_3, KC_SLSH,

  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,  XXXXXXX,              KC_0,   KC_DOT
                                      //`--------------------------'  `--------------------------'
  ),


    [3] = LAYOUT_split_3x5_2(
  //,-----------------------------------------------------.            ,-----------------------------------------------------.
       KC_TILD, KC_AMPR, KC_ASTR, KC_PIPE, KC_PERC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|---------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--
       KC_BSLS, KC_CIRC, KC_COLN,  KC_DLR, KC_SCLN,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|---------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--
       KC_GRV,   KC_HASH, KC_AT,  KC_EXLM, KC_PLUS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_MINS, KC_UNDS,             XXXXXXX, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  )
};
