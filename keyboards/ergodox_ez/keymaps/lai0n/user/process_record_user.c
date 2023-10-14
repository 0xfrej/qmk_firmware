// bool SCROLL_LOCK = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LED_LEVEL:
            if (record->event.pressed) {
                keyboard_config.led_level++;
                if (keyboard_config.led_level > 4) {
                    keyboard_config.led_level = 0;
                }
                ergodox_led_all_set((uint8_t)keyboard_config.led_level * 255 / 4);
                eeconfig_update_kb(keyboard_config.raw);
                layer_state_set_kb(layer_state);
            }
            return false;

        // case KC_SLCK:
        //     if (record->event.pressed) {
        //         if (!(SCROLL_LOCK)) {
        //             SCROLL_LOCK = true;
        //         } else {
        //             SCROLL_LOCK = false;
        //         }
        //     }
        //     return true;

        // case KC_MS_WH_UP ... KC_MS_WH_RIGHT:
        //     if (record->event.pressed) {
        //         if (SCROLL_LOCK) {
        //             return false;
        //         } else {
        //             return true;
        //         }
        //     }
        default:
            return true;
    }
}
