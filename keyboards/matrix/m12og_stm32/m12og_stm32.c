#include QMK_KEYBOARD_H

extern inline void m12og_board_caps_led_on(void);
extern inline void m12og_board_scroll_led_on(void);
extern inline void m12og_board_caps_led_off(void);
extern inline void m12og_board_scroll_led_off(void);
extern inline void m12og_led_all_off(void);


void matrix_init_kb(void)
{
    // Init LED Ports
    palSetPadMode(GPIOB, 6, PAL_MODE_OUTPUT_PUSHPULL); // Caps LED
    palSetPadMode(GPIOB, 5, PAL_MODE_OUTPUT_PUSHPULL); // Scroll LED

    palSetPadMode(GPIOA, 8, PAL_MODE_OUTPUT_PUSHPULL); // USB Reset
    palClearPad(GPIOA, 8);                             // Stop resetting USB

    m12og_blink_all_leds();

    matrix_init_user();
}

void m12og_blink_all_leds(void)
{
    m12og_led_all_off();
    // m12og_led_all_set(LED_BRIGHTNESS_DEFAULT);
    m12og_board_caps_led_on();
    wait_ms(50);
    m12og_board_scroll_led_on();
    wait_ms(50);
    m12og_board_caps_led_off();
    wait_ms(50);
    m12og_board_scroll_led_off();
}

void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        m12og_board_caps_led_on();
    } else {
        m12og_board_caps_led_off();
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
        m12og_board_scroll_led_on();
    } else {
        m12og_board_scroll_led_off();
    }
}
