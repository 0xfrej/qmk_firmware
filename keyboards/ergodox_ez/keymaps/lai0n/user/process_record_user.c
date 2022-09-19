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
                register_code16(KC_PLUS);
                register_code16(KC_PLUS);
                unregister_code16(KC_PLUS);
                unregister_code16(KC_PLUS);
            }
            return true;
        case C_DEC:
            if (record->event.pressed) {
                register_code16(KC_MINS);
                register_code16(KC_MINS);
                unregister_code16(KC_MINS);
                unregister_code16(KC_MINS);
            }
            return true;
        case C_AND:
            if (record->event.pressed) {
                register_code16(KC_AMPR);
                register_code16(KC_AMPR);
                unregister_code16(KC_AMPR);
                unregister_code16(KC_AMPR);
            }
            return true;
        case C_OR:
            if (record->event.pressed) {
                register_code16(KC_PIPE);
                register_code16(KC_PIPE);
                unregister_code16(KC_PIPE);
                unregister_code16(KC_PIPE);
            }
            return true;
        case C_DQMRK:
            if (record->event.pressed) {
                register_code16(KC_QUES);
                register_code16(KC_QUES);
                unregister_code16(KC_QUES);
                unregister_code16(KC_QUES);
            }
            return true;
        case C_DBSLS:
            if (record->event.pressed) {
                register_code16(KC_NUBS);
                register_code16(KC_NUBS);
                unregister_code16(KC_NUBS);
                unregister_code16(KC_NUBS);
            }
            return true;
        case C_DUNDS:
            if (record->event.pressed) {
                register_code16(KC_UNDS);
                register_code16(KC_UNDS);
                unregister_code16(KC_UNDS);
                unregister_code16(KC_UNDS);
            }
            return true;
        case C_DEQL:
            if (record->event.pressed) {
                register_code16(KC_EQL);
                register_code16(KC_EQL);
                unregister_code16(KC_EQL);
                unregister_code16(KC_EQL);
            }
            return true;
        case C_TEQL:
            if (record->event.pressed) {
                register_code16(KC_EQL);
                register_code16(KC_EQL);
                register_code16(KC_EQL);
                unregister_code16(KC_EQL);
                unregister_code16(KC_EQL);
                unregister_code16(KC_EQL);
            }
            return true;
        case C_DCLN:
            if (record->event.pressed) {
                register_code16(KC_COLN);
                register_code16(KC_COLN);
                unregister_code16(KC_COLN);
                unregister_code16(KC_COLN);
            }
            return true;
        case C_TGRV:
            if (record->event.pressed) {
                register_code16(KC_GRV);
                register_code16(KC_GRV);
                register_code16(KC_GRV);
                unregister_code16(KC_GRV);
                unregister_code16(KC_GRV);
                unregister_code16(KC_GRV);
            }
            return true;
        case C_OBJACC:
            if (record->event.pressed) {
                register_code16(KC_MINS);
                register_code16(KC_RABK);
                unregister_code16(KC_RABK);
                unregister_code16(KC_MINS);
            }
            return true;
        default:
            return true;
    }
}
