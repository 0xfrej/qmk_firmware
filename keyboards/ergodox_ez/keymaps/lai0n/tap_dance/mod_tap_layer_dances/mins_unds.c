static tap mins_unds_state = {
    .is_press_action = true,
    .state           = 0
};

void mins_unds_finished(tap_dance_state_t *state, void *user_data) {
    mins_unds_state.state = current_dance(state);
    switch (mins_unds_state.state) {
        case SINGLE_TAP:
            register_code16(KC_MINS);
            break;
        case SINGLE_HOLD:
            SEND_STRING("--");
            break;
        case DOUBLE_TAP:
            register_code16(KC_UNDS);
            break;
        case DOUBLE_HOLD:
            SEND_STRING("__");
            break;
    }
}

void mins_unds_reset(tap_dance_state_t *state, void *user_data) {
    switch (mins_unds_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_MINS);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_UNDS);
            break;
    }
    mins_unds_state.state = 0;
}
