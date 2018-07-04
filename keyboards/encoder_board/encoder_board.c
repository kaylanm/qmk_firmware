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
#include "encoder_board.h"

// From https://gist.github.com/jackhumbert/58d601131e3f39061bfaab87f144c233

static uint8_t encoder_state = 0;
static int8_t encoder_value = 0;
static int8_t encoder_LUT[] = { 0, -1, 1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0 };

void matrix_init_user(void) {
    DDRB &= ~_BV(DDB1) & ~_BV(DDB2);
    PORTB |= (_BV(DDB1) | _BV(DDB2));
}

void matrix_scan_user(void) {
    encoder_state <<= 2;
    encoder_state |= ((PINB & 0b00000100) >> 2) | (PINB & 0b00000010);
    encoder_value += encoder_LUT[encoder_state & 0xF];
    if (encoder_value >= 4) {
        encoder_right();
    }
    if (encoder_value <= -4) {
        encoder_left();
    }
    encoder_value %= 4;
}
