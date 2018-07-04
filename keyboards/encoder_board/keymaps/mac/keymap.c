/*
Copyright 2018 QMK Contributors

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

#define KC_OSX_EJECT 0x66
#define LOCK_OSX LSFT(LCTL(KC_OSX_EJECT))
#define SLEEP_OSX LALT(LGUI(KC_OSX_EJECT))

//Tap Dance Declarations
enum {
  TD_SWITCH = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

LAYOUT(TD(TD_SWITCH)),

};

void dance_finished (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code(KC__MUTE);
  } else if (state->count == 2) {
    register_code(KC_LALT);
    register_code(KC_LGUI);
    register_code(KC_OSX_EJECT);
  } else if (state->count == 3) {
    reset_keyboard();
    reset_tap_dance(state);
  }
}

void dance_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code(KC__MUTE);
  } else if (state->count == 2) {
    unregister_code(KC_LALT);
    unregister_code(KC_LGUI);
    unregister_code(KC_OSX_EJECT);
  }
}

void encoder_right() {
  register_code(KC__VOLUP);
  unregister_code(KC__VOLUP);
}

void encoder_left() {
  register_code(KC__VOLDOWN);
  unregister_code(KC__VOLDOWN);
}

//All tap dance functions would go here. Only showing this one.
qk_tap_dance_action_t tap_dance_actions[] = {
 [TD_SWITCH] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_finished, dance_reset)
};
