# This is fork of hacker_dvorak layout
# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

# PWMS PC7 (NC), PD7 (RGB DATA IN)

# bootloader
BOOTMAGIC_ENABLE = no

# optimizations
LTO_ENABLE 				= yes
AVR_USE_MINIMAL_PRINTF 	= yes

# debug
DEBUG_ENABLE	= no
CONSOLE_ENABLE 	= no # Console for debug(+400b)
VARIABLE_TRACE 	= no

NKRO_ENABLE					= yes # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
FORCE_NKRO 					= yes
EXTRAKEY_ENABLE 			= yes # Audio control and System control(+450b).
LEADER_ENABLE 				= no
TAP_DANCE_ENABLE 			= no
CAPS_WORD_ENABLE 			= no
COMBO_ENABLE      			= no
AUTO_SHIFT_ENABLE    		= no
KEY_LOCK_ENABLE   			= no  # (+1730b)
SPACE_CADET_ENABLE 			= no
GRAVE_ESC_ENABLE 			= no
MAGIC_ENABLE 				= no
SEND_STRING_ENABLE 			= no
MOUSEKEY_ENABLE 			= no # (+4700b) we will use pointing device for this using hack shown in this video (https://www.youtube.com/watch?v=bORY26QnDvA)
POINTING_DEVICE_ENABLE 		= no # Used as mousekey replacement because it's more lightweight
POINTING_DEVICE_DRIVER		= custom
DYNAMIC_MACRO_ENABLE		= yes
PROGRAMMABLE_BUTTON_ENABLE 	= no
REPEAT_KEY_ENABLE 			= no
STENO_ENABLE 				= yes
STENO_PROTOCOL 				= txbolt

UNICODE_ENABLE    = no
UCIS_ENABLE       = no  # For Unicode.
UNICODEMAP_ENABLE = no
COMMAND_ENABLE    = no  # Commands for debug and configuration
SWAP_HANDS_ENABLE = no  # Allow swapping hands of keyboard.

DEFERRED_EXEC_ENABLE = yes

# HW
RAW_ENABLE 			= no   # Turn off if You do not require this
SLEEP_LED_ENABLE  	= yes  # Turn off leds when computer is sleeping.
RGBLIGHT_ENABLE 	= no
BACKLIGHT_ENABLE  	= no
RGB_MATRIX_ENABLE 	= no

STENO_ENABLE = yes   # Additional protocols for Stenography(+1700), requires VIRTSER
MOUSEKEY_ENABLE = no # Not enough interupts, so something has to go
