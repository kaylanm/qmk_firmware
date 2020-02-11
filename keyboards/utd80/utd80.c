#include "utd80.h"


void matrix_init_kb(void) {
  // Keyboard start-up code goes here
  // Runs once when the firmware starts up
  matrix_init_user();
  led_init_ports();
}

void led_init_ports(void) {
   setPinOutput(B5); // scrolllock
   setPinOutput(B6); // capslock
}

bool led_update_kb(led_t led_state) {
    if(led_update_user(led_state)) {
        writePin(B6, led_state.caps_lock);
        // writePin(B5, led_state.scroll_lock);
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        writePin(B5, true);
    } else {
        writePin(B5, false);
    }

    return true;
}
