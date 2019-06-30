#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_EQL, KC_BSLS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_BSPC, KC_ENT, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(1), TT(1), TT(1), MO(1), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_CAPS, KC_GRV, KC_LGUI, KC_PSCR, KC_SPC, KC_LCTL, KC_LALT, KC_LALT, KC_RCTL, KC_RALT, KC_DEL, KC_RGUI, KC_NONUS_BSLASH, KC_APP),
	[1] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_ACL2, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_F11, KC_F12, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL0, KC_TRNS, KC_VOLD, KC_VOLU, KC__MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLCK, KC_INS, KC_PAUS)
};



void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    switch (layer) {
        case 0:
            wht_led_off; // blue on falbatech device
            break;
        case 1:
            wht_led_on;
            break;
        default:
            break;
    }
};


