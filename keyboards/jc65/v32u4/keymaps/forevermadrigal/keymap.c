#include "v32u4.h"

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP(
      KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS, KC_GRV , KC_HOME,
      KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSPC, KC_PGUP,
      KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT , KC_PGDN,
      KC_LSFT, KC_NO  , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_UP  , KC_END ,
      KC_LCTL, KC_LGUI, KC_LALT, LT(2, KC_SPC), LT(2, KC_SPC) , LT(2, KC_SPC) , KC_RALT, KC_NO  , KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
      ),

  [1] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      MO(2)  , _______, _______, KC_SPC , KC_SPC , KC_SPC , _______, _______, _______, _______, _______, _______
      ),

  [2] = KEYMAP(
      _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, _______, TO(0),
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TO(1),
      KC_CAPS, _______, _______, _______, _______, _______, _______, BL_TOGG, BL_INC , BL_DEC , _______, _______, _______, TO(3),
      _______, _______, _______, RGB_VAI, RGB_VAD, RGB_SAI, RGB_SAD, RGB_TOG, RGB_HUI, RGB_HUD, RGB_MOD, _______, _______, _______, RESET  ,
      KC_LCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
      ),

  [3] = KEYMAP(
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , MO(4)  , MO(4)  , MO(4)  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO
      ),

  [4] = KEYMAP(
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , TO(0)  ,
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
      KC_NO  , KC_NO  , KC_NO  , _______, _______, _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO
      ),
};
