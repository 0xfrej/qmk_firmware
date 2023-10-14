bool MATRIX_SCANNED = false;

void matrix_scan_user(void) {
    if (!(MATRIX_SCANNED)) {
        //rgblight_sethsv_noeeprom_green();
        MATRIX_SCANNED = true;
    }
};
