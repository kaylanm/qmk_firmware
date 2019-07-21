#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avR/io.h>
  #include <avR/inteRRupt.h>
#endif
#endif

#define LAYOUT_5x7( \
    L11, L12, L13, L14, L15, L16,      \
    L21, L22, L23, L24, L25, L26,      \
    L31, L32, L33, L34, L35, L36,      \
    L41, L42, L43, L44, L45, L46,      \
    L51, L52, L53, L54, L55,           \
                             L64, L63, \
                                  L62, \
                        L72, L71, L61, \
         R11, R12, R13, R14, R15, R16, \
         R21, R22, R23, R24, R25, R26, \
         R31, R32, R33, R34, R35, R36, \
         R41, R42, R43, R44, R45, R46, \
              R52, R53, R54, R55, R56, \
R64, R63,                              \
R65,                                   \
R66, R76, R75                          \
  ) \
  { \
    { L11,   L12,   L13, L14, L15, L16   },       \
    { L21,   L22,   L23, L24, L25, L26  },        \
    { L31,   L32,   L33, L34, L35, L36    },      \
    { L41,   L42,   L43, L44, L45, L46  },        \
    { L51,   L52,   L53, L54, L55, KC_NO  },      \
    { L61,   L62,   L63, L64, KC_NO, KC_NO },     \
    { L71,   L72,   KC_NO, KC_NO, KC_NO, KC_NO }, \
    { R11,   R12,   R13, R14, R15, R16, },        \
    { R21,   R22,   R23, R24, R25, R26 },         \
    { R31,   R32,   R33, R34, R35, R36 },         \
    { R41,   R42,   R43, R44, R45, R46 },         \
    { KC_NO, R52, R53, R54, R55, R56 },           \
    { KC_NO, KC_NO, R63, R64, R65, R66 },         \
    { KC_NO, KC_NO, KC_NO, KC_NO, R75, R76 }      \
}
