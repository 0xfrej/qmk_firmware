static tap grv_tild_state = {
    .is_press_action = true,
    .state           = 0
};

void grv_tild_finished(tap_dance_state_t *state, void *user_data) {
    grv_tild_state.state = current_dance(state);
    switch (grv_tild_state.state) {
        case SINGLE_TAP:
            register_code16(KC_GRV);
            break;
        case DOUBLE_TAP:
            register_code16(KC_TILD);
            break;
        case TRIPLE_TAP:
            SEND_STRING("```");
            break;
    }
}

void grv_tild_reset(tap_dance_state_t *state, void *user_data) {
    switch (grv_tild_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_GRV);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_TILD);
            break;
    }
    grv_tild_state.state = 0;
}
