bool SCROLL_LOCK = false;

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
            return true;
        case KC_MS_WH_UP ... KC_MS_WH_RIGHT:
            if (record->event.pressed) {
                if (SCROLL_LOCK) {
                    return false;
                } else {
                    return true;
                }
            }

        case C_INC:
            if (record->event.pressed) {
                SEND_STRING("++");
            }
            return true;
        case C_DEC:
            if (record->event.pressed) {
                SEND_STRING("--");
            }
            return true;
        case C_AND:
            if (record->event.pressed) {
                SEND_STRING("&&");
            }
            return true;
        case C_OR:
            if (record->event.pressed) {
                SEND_STRING("||");
            }
            return true;
        case C_DQMRK:
            if (record->event.pressed) {
                SEND_STRING("??");
            }
            return true;
        case C_DBSLS:
            if (record->event.pressed) {
                SEND_STRING("\\\\");
            }
            return true;
        case C_DUNDS:
            if (record->event.pressed) {
                SEND_STRING("__");
            }
            return true;
        case C_DEQL:
            if (record->event.pressed) {
                SEND_STRING("==");
            }
            return true;
        case C_TEQL:
            if (record->event.pressed) {
                SEND_STRING("===");
            }
            return true;
        case C_DCLN:
            if (record->event.pressed) {
                SEND_STRING("::");
            }
            return true;
        case C_TGRV:
            if (record->event.pressed) {
                SEND_STRING("```");
            }
            return true;
        case C_OBJACC:
            if (record->event.pressed) {
                SEND_STRING("->");
            }
            return true;
        default:
            return true;
    }
}
