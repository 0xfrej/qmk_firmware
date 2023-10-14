static tap rprn_rabk_state = {
    .is_press_action = true,
    .state           = 0
};

void rprn_rabk_finished(tap_dance_state_t *state, void *user_data) {
    rprn_rabk_state.state = current_dance(state);
    switch (rprn_rabk_state.state) {
        case SINGLE_TAP:
            register_code16(KC_RPRN);
            break;
        case DOUBLE_TAP:
            register_code16(KC_RABK);
            break;
        case TRIPLE_TAP:
            SEND_STRING("->");
            break;
    }
}

void rprn_rabk_reset(tap_dance_state_t *state, void *user_data) {
    switch (rprn_rabk_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_RPRN);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_RABK);
            break;
    }
    rprn_rabk_state.state = 0;
}
