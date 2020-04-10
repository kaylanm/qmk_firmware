CFLAGS += "-Wno-error=deprecated"

MCU_FAMILY = STM32
MCU_SERIES = STM32F1xx

MCU_LDSCRIPT = stm32f103_bootloader

MCU_STARTUP = stm32f1xx

BOARD = M12OG_STM32_BOARD

MCU = cortex-m3

ARMV = 7

EXTRAFLAGS=-O1 -g

BOOTMAGIC_ENABLE = lite
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = pwm
MOUSEKEY_ENABLE = no	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = no	# Console for debug
COMMAND_ENABLE = no    # Commands for debug and configuration
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes	    # USB Nkey Rollover
CUSTOM_MATRIX = no # Custom matrix file
NKRO_ENABLE      = yes # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
UNICODE_ENABLE   = yes # Unicode


# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE -DSTM32_DMA_REQUIRED
