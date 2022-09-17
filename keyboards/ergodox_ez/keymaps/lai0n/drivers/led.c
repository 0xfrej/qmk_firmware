enum STATUS_LIGHT_MASK {
    LED_1       = 1 << 0,
    LED_2       = 1 << 1,
    LED_3       = 1 << 2,
    //LED_BLINK   = 1 << 3,
};

typedef struct {
    uint8_t status_right :3;
} led_state_t;

led_state_t _led_state;

#define get_led_feature_state(feature, mask) _led_state.feature & (mask)

led_state_t get_led_state(void) {
    return _led_state;
}

led_state_t* get_led_state_p(void) {
    return &_led_state;
}

void set_status_right_state(uint8_t status_right) {
    _led_state.status_right = status_right;
}

void set_led_state(led_state_t state) {
    _led_state = state;
}

void clear_led_state(void) {
    _led_state.status_right = 0;
}

void led_state_init(void) {
    clear_led_state();
    dprint("LED State initialized");
}

void update_leds_from_state(void) {
    dprint("Update leds from state");
    // Right hand status leds
    if (get_led_feature_state(status_right, LED_1)) {
        ergodox_right_led_1_on();
    } else {
        ergodox_right_led_1_off();
    }

    if (get_led_feature_state(status_right, LED_2)) {
        ergodox_right_led_2_on();
    }
    else {
        ergodox_right_led_2_off();
    }

    if (get_led_feature_state(status_right, LED_3)) {
        ergodox_right_led_3_on();
    }
    else {
        ergodox_right_led_3_off();
    }
}
