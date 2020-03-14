#include QMK_KEYBOARD_H

extern inline void m12og_board_led_1_on(void);
extern inline void m12og_board_led_2_on(void);
extern inline void m12og_board_led_1_off(void);
extern inline void m12og_board_led_2_off(void);
extern inline void m12og_led_all_off(void);


void matrix_init_kb(void)
{
    // Init LED Ports
    palSetPadMode(GPIOB, 7, PAL_MODE_OUTPUT_PUSHPULL); // LED 1
    palSetPadMode(GPIOB, 5, PAL_MODE_OUTPUT_PUSHPULL); // LED 2

    m12og_blink_all_leds();

    matrix_init_user();
}

void m12og_blink_all_leds(void)
{
    m12og_led_all_off();
    // m12og_led_all_set(LED_BRIGHTNESS_DEFAULT);
    m12og_board_led_1_on();
    wait_ms(50);
    m12og_board_led_2_on();
    wait_ms(50);
    m12og_board_led_1_off();
    wait_ms(50);
    m12og_board_led_2_off();
}
