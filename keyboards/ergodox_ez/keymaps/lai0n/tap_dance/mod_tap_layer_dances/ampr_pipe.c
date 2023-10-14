static tap ampr_pipe_state = {
    .is_press_action = true,
    .state           = 0
};

void ampr_pipe_finished(tap_dance_state_t *state, void *user_data) {
    ampr_pipe_state.state = current_dance(state);
    switch (ampr_pipe_state.state) {
        case SINGLE_TAP:
            register_code16(KC_AMPR);
            break;
        case SINGLE_HOLD:
            SEND_STRING("&&");
            break;
        case DOUBLE_TAP:
            register_code16(KC_PIPE);
            break;
        case DOUBLE_HOLD:
            SEND_STRING("||");
            break;
    }
}

void ampr_pipe_reset(tap_dance_state_t *state, void *user_data) {
    switch (ampr_pipe_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_AMPR);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_PIPE);
            break;
    }
    ampr_pipe_state.state = 0;
}
