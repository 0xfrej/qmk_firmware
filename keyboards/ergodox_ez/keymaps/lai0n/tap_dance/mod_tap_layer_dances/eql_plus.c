static tap eql_plus_state = {
    .is_press_action = true,
    .state           = 0
};

void eql_plus_finished(tap_dance_state_t *state, void *user_data) {
    eql_plus_state.state = current_dance(state);
    switch (eql_plus_state.state) {
        case SINGLE_TAP:
            register_code16(KC_EQL);
            break;
        case SINGLE_HOLD:
            SEND_STRING("==");
            break;
        case DOUBLE_TAP:
            register_code16(KC_PLUS);
            break;
        case DOUBLE_HOLD:
            SEND_STRING("++");
            break;
        case TRIPLE_TAP:
            SEND_STRING("===");
            break;
    }
}

void eql_plus_reset(tap_dance_state_t *state, void *user_data) {
    switch (eql_plus_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_EQL);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_PLUS);
            break;
    }
    eql_plus_state.state = 0;
}
