layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    // // update leds showing current layer
    // set_status_right_state(0x7 & layer);
    // update_leds_from_state();

    if (layer == PLOVER && ! PLOVER_MODE) {
        plover_toggle();
        PLOVER_MODE = true;
    } else if (PLOVER_MODE) {
        plover_toggle();
        PLOVER_MODE = false;
    }

    return state;
}
