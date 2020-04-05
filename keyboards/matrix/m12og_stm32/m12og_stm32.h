#pragma once

#include "quantum.h"
#include "action_layer.h"
#include <stdint.h>
#include <stdbool.h>
#include "hal.h"

inline void m12og_board_caps_led_on(void) { palSetPad(GPIOB, 6); }
inline void m12og_board_scroll_led_on(void) { palSetPad(GPIOB, 5); }
inline void m12og_board_caps_led_off(void) { palClearPad(GPIOB, 6); }
inline void m12og_board_scroll_led_off(void) { palClearPad(GPIOB, 5); }
inline void m12og_led_all_off(void)
{
  palClearPad(GPIOB, 6);
  palClearPad(GPIOB, 5);
}

void m12og_blink_all_leds(void);

#define ____ KC_NO

#define LAYOUT_tkl_ansi( \
    K000,       K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C,    K00D, K00E, K00F, \
    K010, K011, K012, K013, K014, K015, K016, K017, K018, K019, K01A, K01B, K01C, K01D,    K03D, K01E, K01F, \
    K020, K021, K022, K023, K024, K025, K026, K027, K028, K029, K02A, K02B, K02C, K02D,    K03E, K02E, K02F, \
    K030, K031, K032, K033, K034, K035, K036, K037, K038, K039, K03A, K03B,       K03C,                      \
    K040,       K041, K042, K043, K044, K045, K046, K047, K048, K049, K04A,       K04B,          K04C,       \
    K050, K051, K052,                   K055,                         K056, K057, K058,    K04D, K04E, K03F  \
) \
{ \
    { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008, K009, K00A, K00B, K00C, K00D, K00E, K00F }, \
    { K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017,  K018, K019, K01A, K01B, K01C, K01D, K01E, K01F }, \
    { K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027,  K028, K029, K02A, K02B, K02C, K02D, K02E, K02F }, \
    { K030,  K031,  K032,  K033,  K034,  K035,  K036,  K037,  K038, K039, K03A, K03B, K03C, K03D, K03E, K03F }, \
    { K040,  K041,  K042,  K043,  K044,  K045,  K046,  K047,  K048, K049, K04A, K04B, K04C, K04D, K04E, ____ }, \
    { K050,  K051,  K052,  ____,  ____,  K055,  K056,  K057,  K058, ____, ____, ____, ____, ____, ____, ____ }  \
}
