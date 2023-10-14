static tap slsh_bsls_state = {
    .is_press_action = true,
    .state           = 0
};

void slsh_bsls_finished(tap_dance_state_t *state, void *user_data) {
    slsh_bsls_state.state = current_dance(state);
    switch (slsh_bsls_state.state) {
        case SINGLE_TAP:
            register_code16(KC_SLSH);
            break;
        case DOUBLE_TAP:
            register_code16(KC_BSLS);
            break;
        case DOUBLE_HOLD:
            SEND_STRING("\\\\");
            break;
    }
}

void slsh_bsls_reset(tap_dance_state_t *state, void *user_data) {
    switch (slsh_bsls_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_SLSH);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_BSLS);
            break;
    }
    slsh_bsls_state.state = 0;
}
