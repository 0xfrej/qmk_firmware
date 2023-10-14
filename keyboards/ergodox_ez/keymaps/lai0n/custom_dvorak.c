const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

[DVORAK] = LAYOUT_ergodox_pretty(
      KC_ESC,  TD(GRV_TILD),    TD(DLR_AT), TD(LCBR_LBRC), TD(LPRN_LABK), TD(EXLM_QUES), DM_REC1,      DM_REC2, TD(APMR_PIPE), TD(RPRN_RABK), TD(RCBR_RBRC), TD(HASH_PERC), TD(ASTR_CIRC), KC_INS       ,
      KC_TAB, OSL(MEDIA_FN), TD(QUOT_DQUO),  TD(DOT_COMM), LCG_T(KC_P),   LAG_T(KC_Y),   DM_PLY1,      DM_PLY2, LAG_T(KC_F)  , LCG_T(KC_G)  , C_S_T(KC_C)  , LCA_T(KC_R)  , LAS_T(KC_L)  , TD(SLSH_BSLS),
TD(EQL_PLUS),  LALT_T(KC_A),  LCTL_T(KC_O),  LSFT_T(KC_E), KC_U,          SGUI_T(KC_I),                         SGUI_T(KC_D) , KC_H,          LSFT_T(KC_T) , LCTL_T(KC_N) , LALT_T(KC_S) , TD(MINS_UNDS),
     DM_RSTP, TD(SCLN_COLN),  LCAG_T(KC_Q),          KC_J, KC_K,          LCSG_T(KC_X),  KC_LGUI,      KC_LGUI, LCSG_T(KC_B) , KC_M,          KC_W,          LCAG_T(KC_V) , LASG_T(KC_Z) , COMPOSE      ,
   TG(CHORD),    TG(ARROWS),     TG(MOUSE),    TG(NUMPAD), TG(MEDIA_FN),                                                       KC_LEFT      , KC_UP        , KC_DOWN      , KC_RGHT      , KC_DEL       ,

                                                                                KC_WH_L,         KC_WH_R,      KC_WH_U        , KC_WH_D,
                                                                                                 KC_HOME,      KC_PGUP        ,
                                                                  KC_SPC,       KC_BSPC,          KC_END,      KC_PGDN        , QK_REP , KC_ENT
),


[GAMING] = LAYOUT_ergodox_pretty(
  KC_ESC,          KC_1,        KC_2,          KC_3,    KC_4,    KC_5,    KC_LEFT,              KC_RGHT,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,           KC_MINS,
  KC_TAB,          KC_Q,        KC_W,          KC_E,    KC_R,    KC_T,    TG(CHORD),            TG(CHORD),    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,           KC_BSLS,
  KC_BSPC,         KC_A,        KC_S,          KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,        GUI_T(KC_QUOT),
  KC_LSFT,         CTL_T(KC_Z), KC_X,          KC_C,    KC_V,    KC_B,    ALL_T(KC_NO),         MEH_T(KC_NO), KC_N,    KC_M,    KC_COMM, KC_DOT,  CTL_T(KC_SLSH), KC_RSFT,
  KC_GRV,          KC_QUOT,     LALT(KC_LSFT), KC_LEFT, KC_RGHT,                                                       KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,        KC_DEL,
                                                           ALT_T(KC_APP), KC_LGUI,                KC_LALT, CTL_T(KC_ESC),
                                                                          KC_HOME,                 KC_PGUP,
                                                         KC_SPC, KC_BSPC, KC_END,                  KC_PGDN, KC_TAB, KC_ENT
),

[ARROWS] = LAYOUT_ergodox_pretty(
XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,  XXXXXXX,   XXXXXXX, XXXXXXX,      LGUI(KC_X), XXXXXXX      , LCTL(KC_X), KC_MS_WH_UP  , XXXXXXX   , XXXXXXX       , XXXXXXX       ,
XXXXXXX, SCMD_T(KC_NO), MEH_T(KC_NO), ALL_T(KC_NO),  XXXXXXX,   XXXXXXX, XXXXXXX,      LGUI(KC_C), XXXXXXX      , LCTL(KC_C), KC_UP        , SCTL(KC_C), LCTL(KC_Z)    , LGUI(KC_Z)    ,
XXXXXXX,      KC_LCTL,    KC_LSFT,      XXXXXXX,  _______,   XXXXXXX,                           KC_MS_WH_LEFT, KC_LEFT   , KC_DOWN      , KC_RIGHT  , KC_MS_WH_RIGHT, KC_APPLICATION,
XXXXXXX,       KC_RALT,      KC_LALT, GUI_T(KC_NO),  XXXXXXX,   XXXXXXX, XXXXXXX,      LGUI(KC_V), XXXXXXX      , LCTL(KC_V), KC_MS_WH_DOWN, SCTL(KC_V), LCTL(KC_Y)    , SGUI(KC_Z)    ,
_______,       _______,      _______,      _______,  _______,                                                     XXXXXXX   , XXXXXXX      , XXXXXXX   , XXXXXXX       , XXXXXXX       ,

                                                                XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX     ,
                                                                         KC_HOME,      KC_PGUP,
                                                        KC_SPC, KC_BSPC,  KC_END,      KC_PGDN, QK_REP, KC_ENT
),

[MOUSE] = LAYOUT_ergodox_pretty(
   XXXXXXX,       XXXXXXX,    XXXXXXX,   KC_MS_WH_UP,  LCTL(KC_X),        XXXXXXX, LGUI(KC_X),      XXXXXXX, XXXXXXX, XXXXXXX     , XXXXXXX     , XXXXXXX     , XXXXXXX      , XXXXXXX     ,
LGUI(KC_Z),    LCTL(KC_Z), SCTL(KC_C),      KC_MS_UP,  LCTL(KC_C),     KC_MS_BTN4, LGUI(KC_C),      XXXXXXX, XXXXXXX, XXXXXXX     , ALL_T(KC_NO), MEH_T(KC_NO), SCMD_T(KC_NO), XXXXXXX     ,
KC_MS_BTN3, KC_MS_WH_LEFT, KC_MS_LEFT,    KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_RIGHT,                           XXXXXXX, _______     , KC_MS_ACCEL1, KC_LSFT   , KC_LCTL     , KC_MS_ACCEL2,
LGUI(KC_Z),    LCTL(KC_Y), SCTL(KC_V), KC_MS_WH_DOWN,  LCTL(KC_V),     KC_MS_BTN5, LGUI(KC_V),      XXXXXXX, XXXXXXX, XXXXXXX     , GUI_T(KC_NO), KC_LALT     , KC_RALT      , XXXXXXX     ,
   _______,       _______,    _______,       _______,     _______,                                                    XXXXXXX     , XXXXXXX     , XXXXXXX     , XXXXXXX      , XXXXXXX     ,

                                                                          XXXXXXX,    XXXXXXX,      XXXXXXX, XXXXXXX,
                                                                                      XXXXXXX,      XXXXXXX,
                                                       KC_MS_BTN1,     KC_MS_BTN2,    XXXXXXX,      XXXXXXX, XXXXXXX, KC_MS_ACCEL0
),

[NUMPAD] = LAYOUT_ergodox_pretty(
XXXXXXX,  XXXXXXX,      XXXXXXX, XXXXXXX,       XXXXXXX,   XXXXXXX, XXXXXXX,      KC_X     , KC_A     , KC_B    , KC_C, KC_D   , KC_E   , KC_F   ,
XXXXXXX,  XXXXXXX, GUI_T(KC_NO), XXXXXXX,  ALL_T(KC_NO),   XXXXXXX, XXXXXXX,      KC_O     , KC_I     , KC_1    , KC_2, KC_3   , KC_SLSH, KC_PERC,
_______, KC_LCTL,    KC_LSFT, _______,  MEH_T(KC_NO),   XXXXXXX,                          KC_M     , KC_4    , KC_5, KC_6   , KC_PLUS, KC_MINS,
XXXXXXX,  KC_RALT,      KC_LALT, XXXXXXX, SCMD_T(KC_NO),   XXXXXXX, XXXXXXX,      KC_L     , KC_J     , KC_7    , KC_8, KC_9   , KC_ASTR, KC_CIRC,
_______,  _______,      _______, _______,       _______,                                                KC_DOT  , KC_0, KC_COMM, KC_UNDS, KC_BSLS,

                                                           XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX     ,
                                                                    KC_HOME,      KC_PGUP,
                                                   KC_SPC, KC_BSPC,  KC_END,      KC_PGDN, QK_REP, KC_ENT
),

[MEDIA_FN] = LAYOUT_ergodox_pretty(
KC_VOLD, KC_MUTE,    XXXXXXX, XXXXXXX, KC_MAIL, KC_FIND, KC_WWW_REFRESH,      KC_WWW_FAVORITES, KC_MYCM, KC_CALC, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU,
KC_MPRV,   KC_F9,      KC_F7,   KC_F5,   KC_F3,   KC_F1,    KC_WWW_HOME,      KC_WWW_SEARCH   , KC_F2  , KC_F4  , KC_F6  , KC_F8  , KC_F10 , KC_MNXT,
KC_PAUS,  KC_F19,     KC_F17,  KC_F15,  KC_F13,  KC_F11,                                        KC_F12 , KC_F14 , KC_F16 , KC_F18 , KC_F20 , KC_MPLY,
XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX,  KC_F23,  KC_F21,    KC_WWW_BACK,      KC_WWW_FORWARD  , KC_F22 , KC_F24 , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
_______, _______, _______, _______, _______,                                                          KC_PWR , XXXXXXX, KC_SLEP, KC_WAKE, XXXXXXX,

                                                _______,        XXXXXXX,      XXXXXXX         , XXXXXXX,
                                                                XXXXXXX,      XXXXXXX         ,
                                       XXXXXXX, XXXXXXX, KC_MEDIA_EJECT,      XXXXXXX         , XXXXXXX, XXXXXXX
),

[CHORD] = LAYOUT_ergodox_pretty(
HYPR(KC_F21),  HYPR(KC_F1),  HYPR(KC_F2),  HYPR(KC_F3),  HYPR(KC_F4),  HYPR(KC_F5), XXXXXXX,      XXXXXXX         , XXXXXXX, XXXXXXX   , XXXXXXX  , XXXXXXX   , XXXXXXX, XXXXXXX,
HYPR(KC_F22),  HYPR(KC_F6),  HYPR(KC_F7),  HYPR(KC_F8),  HYPR(KC_F9), HYPR(KC_F10), XXXXXXX,      XXXXXXX         , XXXXXXX, XXXXXXX   , XXXXXXX  , XXXXXXX   , XXXXXXX, XXXXXXX,
HYPR(KC_F23), HYPR(KC_F11), HYPR(KC_F12), HYPR(KC_F13), HYPR(KC_F14), HYPR(KC_F15),                                 XXXXXXX, XXXXXXX   , XXXXXXX  , XXXXXXX   , XXXXXXX, XXXXXXX,
HYPR(KC_F24), HYPR(KC_F16), HYPR(KC_F17), HYPR(KC_F18), HYPR(KC_F19), HYPR(KC_F20), XXXXXXX,      XXXXXXX         , XXXXXXX, XXXXXXX   , XXXXXXX  , XXXXXXX   , XXXXXXX, XXXXXXX,
_______,_______, _______, _______, _______,                                                        XXXXXXX   , XXXXXXX  , XXXXXXX   , XXXXXXX, XXXXXXX,

                                                                      XXXXXXX, DF(DVORAK),      TD(HOLD_BOOT)   , AS_TOGG,
                                                                               DF(GAMING),      TD(HOLD_EEP_RST),
                                                        XXXXXXX,      TO(DVORAK), TO(GAMING),      LED_LEVEL       , XXXXXXX, XXXXXXX
),
};
