static tap none_boot_state = {
    .is_press_action = true,
    .state           = 0
};

void none_boot_finished(tap_dance_state_t *state, void *user_data) {
    none_boot_state.state = current_dance(state);
    switch (none_boot_state.state) {
        case SINGLE_TAP:
            register_code(KC_NO);
            break;

        case SINGLE_HOLD:
            register_code16(QK_BOOT);
            break;
    }
}

void none_boot_reset(tap_dance_state_t *state, void *user_data) {
    switch (none_boot_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_NO);
            break;

        case SINGLE_HOLD:
            unregister_code16(QK_BOOT);
            break;
    }
    none_boot_state.state = 0;
}
