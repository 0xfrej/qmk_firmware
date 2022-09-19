#define ACTION_TAP_DANCE_ADVANCED( \
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

#define _ KC_NO
// Register the double tap dances:
qk_tap_dance_action_t tap_dance_actions[] = {
    [EQL_PLUS]     = ACTION_TAP_DANCE_ADVANCED(KC_EQL, C_DEQL, KC_PLUS, C_INC, C_TEQL, _,_,_),
    [MINS_UNDS]    = ACTION_TAP_DANCE_ADVANCED(KC_MINS, C_DEC, KC_UNDS, C_DUNDS, _,_,_,_),
    [SLSH_BSLS]    = ACTION_TAP_DANCE_ADVANCED(KC_SLSH, _, KC_BSLS, C_DBSLS, _,_,_,_),
    [GRV_TILD]     = ACTION_TAP_DANCE_ADVANCED(KC_GRV, _, KC_TILD, _, C_TGRV, _,_,_),
    [ASTR_CIRC]    = ACTION_TAP_DANCE_DOUBLE(KC_ASTR, KC_CIRC),
    [APMR_PIPE]    = ACTION_TAP_DANCE_ADVANCED(KC_AMPR, _, KC_PIPE, _, C_OR, _, C_AND, _),
    [EXLM_QUES]    = ACTION_TAP_DANCE_ADVANCED(KC_EXLM, _,KC_QUES, _, C_DQMRK, _,_,_),
    [HASH_PERC]    = ACTION_TAP_DANCE_DOUBLE(KC_HASH, KC_PERC),
    [DLR_AT]       = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  KC_AT),
    [LPRN_LABK]    = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LABK),
    [RPRN_RABK]    = ACTION_TAP_DANCE_ADVANCED(KC_RPRN, _, KC_RABK, _,_,_, C_OBJACC, _),
    [LCBR_LBRC]    = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_LBRC),
    [RCBR_RBRC]    = ACTION_TAP_DANCE_DOUBLE(KC_RCBR, KC_RBRC),
    [LSFT_DEL]     = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_DEL),
    [SCLN_COLN]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, scln_coln_finished,       scln_coln_reset),
    [QUOT_DQUO]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, quot_dquot_finished,      quot_dquot_reset),
    [DOT_COMM]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dot_comm_finished,        dot_comm_reset),
    [NONE_LEAD]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, none_lead_finished,       none_lead_reset),
    [U_ARR_GUI]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, u_arrows_gui_finished,    u_arrows_gui_reset),
    [H_MOU_GUI]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, h_mouse_gui_finished,     h_mouse_gui_reset),
    [J_MED_MEH]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, j_media_meh_finished,     j_media_meh_reset),
    [W_MED_MEH]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, w_media_meh_finished,     w_media_meh_reset),
    [K_NUM_HYP]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, k_numpad_hyper_finished,  k_numpad_hyper_reset),
    [M_CHO_HYP]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, m_chords_hyper_finished,  m_chords_hyper_reset),
    [HOLD_BOOT]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, none_boot_finished,       none_boot_reset),
    [HOLD_EEP_RST] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, none_eep_rst_finished,    none_eep_rst_reset),
};

#undef _

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(SCLN_COLN):
        case TD(QUOT_DQUO):
        case TD(DOT_COMM):
        case TD(NONE_LEAD):
        case TD(U_ARR_GUI):
        case TD(H_MOU_GUI):
        case TD(J_MED_MEH):
        case TD(W_MED_MEH):
        case TD(K_NUM_HYP):
        case TD(M_CHO_HYP):
        case TD(HOLD_BOOT):
        case TD(HOLD_EEP_RST):
            return DANCING_TERM;
        default:
            return TAPPING_TERM;
    }
}
