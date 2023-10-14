static tap TEMPLATE_state = {
    .is_press_action = true,
    .state           = 0
};

void TEMPLATE_finished(tap_dance_state_t *state, void *user_data) {
    TEMPLATE_state.state = current_dance(state);
    switch (TEMPLATE_state.state) {
        case SINGLE_TAP:
            register_code16(KC_NO);
            break;
        case SINGLE_HOLD:
            register_code16(KC_NO);
            break;
        case DOUBLE_TAP:
            register_code16(KC_NO);
            break;
        case DOUBLE_HOLD:
            register_code16(KC_NO);
            break;
        case TRIPLE_TAP:
            register_code16(KC_NO);
            break;
        case TRIPLE_HOLD:
            register_code16(KC_NO);
            break;
        case DOUBLE_SINGLE_TAP:
            register_code16(KC_NO);
            break;
        case TRIPLE_SINGLE_TAP:
            register_code16(KC_NO);
            break;
    }
}

void TEMPLATE_reset(tap_dance_state_t *state, void *user_data) {
    switch (TEMPLATE_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_NO);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_NO);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_NO);
            break;
        case DOUBLE_HOLD:
            unregister_code16(KC_NO);
            break;
        case TRIPLE_TAP:
            unregister_code16(KC_NO);
            break;
        case TRIPLE_HOLD:
            unregister_code16(KC_NO);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_NO);
            break;
        case TRIPLE_SINGLE_TAP:
            unregister_code16(KC_NO);
            break;
    }
    TEMPLATE_state.state = 0;
}
