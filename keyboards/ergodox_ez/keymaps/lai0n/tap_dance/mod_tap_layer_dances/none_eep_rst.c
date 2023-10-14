static tap none_eeprst_state = {
    .is_press_action = true,
    .state           = 0
};

void none_eep_rst_finished(tap_dance_state_t *state, void *user_data) {
    none_eeprst_state.state = current_dance(state);
    switch (none_eeprst_state.state) {
        case SINGLE_TAP:
            register_code(KC_NO);
            break;

        case SINGLE_HOLD:
            register_code16(QK_CLEAR_EEPROM);
            break;
    }
}

void none_eep_rst_reset(tap_dance_state_t *state, void *user_data) {
    switch (none_eeprst_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_NO);
            break;

        case SINGLE_HOLD:
            unregister_code16(QK_CLEAR_EEPROM);
            break;
    }
    none_eeprst_state.state = 0;
}
