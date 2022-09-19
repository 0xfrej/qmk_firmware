static tap tap_dance_advanced_state = {
    .is_press_action = true,
    .state           = 0
};

void qk_tap_dance_advanced_finished(qk_tap_dance_state_t *state, void *user_data) {
    qk_tap_dance_advanced_t *tuple = (qk_tap_dance_advanced_t *)user_data;
    tap_dance_advanced_state.state = current_dance(state);
    switch (tap_dance_advanced_state.state) {
        case SINGLE_TAP:
            dprint("Register SINGLE_TAP");
            register_code16(tuple->kc_s_t);
            break;
        case SINGLE_HOLD:
            dprint("Register SINGLE_HOLD");
            register_code16(tuple->kc_s_h);
            break;
        case DOUBLE_TAP:
            dprint("Register DOUBLE_TAP");
            register_code16(tuple->kc_d_t);
            break;
        case DOUBLE_HOLD:
            dprint("Register DOUBLE_HOLD");
            register_code16(tuple->kc_d_h);
            break;
        case DOUBLE_SINGLE_TAP:
            dprint("Register DOUBLE_SINGLE_TAP");
            register_code16(tuple->kc_d_s_t);
            break;
        case TRIPLE_TAP:
            dprint("Register TRIPLE_TAP");
            register_code16(tuple->kc_t_t);
            break;
        case TRIPLE_HOLD:
            dprint("Register TRIPLE_HOLD");
            register_code16(tuple->kc_t_h);
            break;
        case TRIPLE_SINGLE_TAP:
            dprint("Register TRIPLE_SINGLE_TAP");
            register_code16(tuple->kc_t_s_t);
            break;
    }
}

void qk_tap_dance_advanced_reset(qk_tap_dance_state_t *state, void *user_data) {
    qk_tap_dance_advanced_t *tuple = (qk_tap_dance_advanced_t *)user_data;
    switch (tap_dance_advanced_state.state) {
        case SINGLE_TAP:
            unregister_code16(tuple->kc_s_t);
            break;
        case SINGLE_HOLD:
            unregister_code16(tuple->kc_s_h);
            break;
        case DOUBLE_TAP:
            unregister_code16(tuple->kc_d_t);
            break;
        case DOUBLE_HOLD:
            unregister_code16(tuple->kc_d_h);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(tuple->kc_d_s_t);
            break;
        case TRIPLE_TAP:
            unregister_code16(tuple->kc_t_t);
            break;
        case TRIPLE_HOLD:
            unregister_code16(tuple->kc_t_h);
            break;
        case TRIPLE_SINGLE_TAP:
            unregister_code16(tuple->kc_t_s_t);
            break;
    }
    tap_dance_advanced_state.state = 0;
}
