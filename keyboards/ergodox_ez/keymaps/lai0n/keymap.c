#include QMK_KEYBOARD_H       // Includes the QMK-verse.

#ifdef POINTING_DEVICE_ENABLE
    #include "pointing_device.h"  // Includes pointing device functions
#endif

#include "keycodes/aliases_definitions.c"
#include "layers/layers_definitions.c"
#include "tap_dance/tap_dance_setup.c"
#include "tap_dance/tap_dances.c"
#include "user/matrix_scan_user.c"
#include "tap_dance/mod_tap_layer_dances/none_boot.c"
#include "tap_dance/mod_tap_layer_dances/none_eep_rst.c"
#include "tap_dance/mod_tap_layer_dances/dot_comm.c"
#include "tap_dance/mod_tap_layer_dances/quot_dquot.c"
#include "tap_dance/mod_tap_layer_dances/scln_coln.c"
//#include "tap_dance/mod_tap_layer_dances/tap_dance_advanced.c"
#include "tap_dance/mod_tap_layer_dances/eql_plus.c"
#include "tap_dance/mod_tap_layer_dances/rprn_rabk.c"
#include "tap_dance/mod_tap_layer_dances/ampr_pipe.c"
#include "tap_dance/mod_tap_layer_dances/exlm_ques.c"
#include "tap_dance/mod_tap_layer_dances/mins_unds.c"
#include "tap_dance/mod_tap_layer_dances/slsh_bsls.c"
#include "tap_dance/mod_tap_layer_dances/grv_tild.c"
#include "tap_dance/tap_dance_actions.c"
#include "custom_dvorak.c"
#include "drivers/led.c"

#if defined(POINTING_DEVICE_ENABLE) && defined(POINTING_DEVICE_DRIVER_custom)
    #include "drivers/sensors/dummy_pointer_device.c"
#endif

#ifdef RAW_ENABLE
    #include "hid/hid.c"
#endif
#include "user/eeconfig_init_user.c"
#include "user/process_record_user.c"
#include "user/layer_set_state_user.c"
#include "user/keyboard_post_init_user.c"
