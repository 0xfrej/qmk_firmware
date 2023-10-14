static tap exlm_ques_state = {
    .is_press_action = true,
    .state           = 0
};

void exlm_ques_finished(tap_dance_state_t *state, void *user_data) {
    exlm_ques_state.state = current_dance(state);
    switch (exlm_ques_state.state) {
        case SINGLE_TAP:
            register_code16(KC_EXLM);
            break;
        case DOUBLE_TAP:
            register_code16(KC_QUES);
            break;
        case DOUBLE_HOLD:
            SEND_STRING("??");
            break;
    }
}

void exlm_ques_reset(tap_dance_state_t *state, void *user_data) {
    switch (exlm_ques_state.state) {
        case SINGLE_TAP:
            unregister_code16(KC_EXLM);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_QUES);
            break;
    }
    exlm_ques_state.state = 0;
}
