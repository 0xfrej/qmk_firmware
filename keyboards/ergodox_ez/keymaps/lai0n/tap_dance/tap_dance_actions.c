/* #define ACTION_TAP_DANCE_ADVANCED( \
    kc_s_t, \
    kc_s_h, \
    kc_d_t, \
    kc_d_h, \
    kc_t_t, \
    kc_t_h, \
    kc_d_s_t, \
    kc_t_s_t \
  ) { \
    .fn = { NULL, qk_tap_dance_advanced_finished, qk_tap_dance_advanced_reset }, \
    .user_data = (void *)&((qk_tap_dance_advanced_t) { kc_s_t, kc_s_h, kc_d_t, kc_d_h, kc_d_s_t, kc_t_t, kc_t_h, kc_t_s_t }),  \
  }
*/

#define _ KC_NO

// Register the double tap dances:
tap_dance_action_t tap_dance_actions[] = {
    [ASTR_CIRC]    = ACTION_TAP_DANCE_DOUBLE(KC_ASTR, KC_CIRC),
    [HASH_PERC]    = ACTION_TAP_DANCE_DOUBLE(KC_HASH, KC_PERC),
    [DLR_AT]       = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  KC_AT),
    [LPRN_LABK]    = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LABK),
    [LCBR_LBRC]    = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_LBRC),
    [RCBR_RBRC]    = ACTION_TAP_DANCE_DOUBLE(KC_RCBR, KC_RBRC),
    [LSFT_DEL]     = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_DEL),
    [EQL_PLUS]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, eql_plus_finished,        eql_plus_reset),
    [RPRN_RABK]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, rprn_rabk_finished,       rprn_rabk_reset),
    [APMR_PIPE]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ampr_pipe_finished,       ampr_pipe_reset),
    [EXLM_QUES]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, exlm_ques_finished,       exlm_ques_reset),
    [MINS_UNDS]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, mins_unds_finished,       mins_unds_reset),
    [SLSH_BSLS]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, slsh_bsls_finished,       slsh_bsls_reset),
    [GRV_TILD]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, grv_tild_finished,        grv_tild_reset),
    [SCLN_COLN]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, scln_coln_finished,       scln_coln_reset),
    [QUOT_DQUO]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, quot_dquot_finished,      quot_dquot_reset),
    [DOT_COMM]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dot_comm_finished,        dot_comm_reset),
    [HOLD_BOOT]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, none_boot_finished,       none_boot_reset),
    [HOLD_EEP_RST] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, none_eep_rst_finished,    none_eep_rst_reset),
};

#undef _

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(MINS_UNDS):
        case TD(SLSH_BSLS):
        case TD(GRV_TILD):
        case TD(APMR_PIPE):
        case TD(EXLM_QUES):
        case TD(RPRN_RABK):
        case TD(EQL_PLUS):
        case TD(SCLN_COLN):
        case TD(QUOT_DQUO):
        case TD(DOT_COMM):
        case TD(HOLD_BOOT):
        case TD(HOLD_EEP_RST):
            return DANCING_TERM;
        default:
            return TAPPING_TERM;
    }
}
