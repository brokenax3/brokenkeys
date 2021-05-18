#include QMK_KEYBOARD_H

enum preonic_layers {
    _QWERTY,
    _COLEMAKDH,
    _ARRQWERTY,
    _SYMB,
    _SHORTCUT,
    _FUNC,
    _SET,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_1x2uL(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, MO(5), KC_LALT, KC_LGUI, KC_SPC, MO(4), MO(3), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT_preonic_1x2uL(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_DEL, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, MO(5), KC_LALT, KC_LGUI, KC_SPC, MO(4), MO(3), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[2] = LAYOUT_preonic_1x2uL(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_ENT, KC_LCTL, MO(5), KC_LALT, KC_LGUI, KC_SPC, MO(4), MO(3), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT),
	[3] = LAYOUT_preonic_1x2uL(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_BSPC, KC_TAB, KC_F11, KC_F12, KC_EQL, KC_UNDS, KC_DLR, KC_CIRC, KC_LBRC, KC_RBRC, KC_BSLS, KC_AT, KC_PLUS, KC_ESC, KC_PIPE, KC_BSLS, KC_PLUS, KC_MINS, KC_HASH, KC_PERC, KC_LCBR, KC_RCBR, KC_LT, KC_GT, KC_MINS, KC_LSFT, KC_EXLM, KC_TILD, KC_DQUO, KC_QUOT, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_TILD, KC_EQL, KC_LCTL, KC_NO, KC_LALT, KC_LGUI, KC_SPC, MO(6), KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END),
	[4] = LAYOUT_preonic_1x2uL(KC_GRV, LGUI(KC_F1), LGUI(KC_F2), LGUI(KC_F3), LGUI(KC_F4), LGUI(KC_F5), LGUI(KC_F6), LGUI(KC_F7), LGUI(KC_F8), LGUI(KC_F9), LGUI(KC_F10), LGUI(KC_F11), KC_TAB, LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), KC_NO, LGUI(KC_H), LGUI(KC_J), LGUI(KC_K), LGUI(KC_L), KC_NO, KC_NO, KC_LSFT, KC_NO, LGUI(KC_X), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_ENT), KC_LCTL, KC_NO, KC_LALT, KC_LGUI, KC_NO, KC_TRNS, MO(6), LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_UP), LGUI(KC_RGHT)),
	[5] = LAYOUT_preonic_1x2uL(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_NO, KC_WH_U, KC_NO, KC_PMNS, KC_P7, KC_P8, KC_P9, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, KC_PSCR, KC_WH_L, KC_WH_D, KC_WH_R, KC_PPLS, KC_P4, KC_P5, KC_P6, KC_LSFT, KC_CUT, KC_COPY, KC_PSTE, KC_INS, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_LCTL, KC_TRNS, KC_LALT, KC_LGUI, KC_SPC, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END),
	[6] = LAYOUT_preonic_1x2uL(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, DF(0), RGB_TOG, RGB_MOD, MU_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, DEBUG, KC_NO, DF(1), RGB_VAI, RGB_SPI, AU_ON, MUV_IN, MU_ON, MI_ON, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(2), RGB_VAD, RGB_SPD, AU_OFF, MUV_DE, MU_OFF, MI_OFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)
};

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM my_qwerty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_CYAN}
);
const rgblight_segment_t PROGMEM my_colemakdh_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_RED}
);
const rgblight_segment_t PROGMEM my_arrow_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_GOLD}
);
const rgblight_segment_t PROGMEM my_symb_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_PINK}
);
const rgblight_segment_t PROGMEM my_shortcut_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_func_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_AZURE}
);
const rgblight_segment_t PROGMEM my_set_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_MAGENTA}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(

        my_qwerty_layer,
        my_colemakdh_layer,
        my_arrow_layer,
        my_symb_layer,
        my_shortcut_layer,
        my_func_layer,
        my_set_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
    rgblight_set_layer_state(1, layer_state_cmp(state, _COLEMAKDH));
    rgblight_set_layer_state(2, layer_state_cmp(state, _ARRQWERTY));

    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {

    rgblight_set_layer_state(3, layer_state_cmp(state, _SYMB));
    rgblight_set_layer_state(4, layer_state_cmp(state, _SHORTCUT));
    rgblight_set_layer_state(5, layer_state_cmp(state, _FUNC));
    rgblight_set_layer_state(6, layer_state_cmp(state, _SET));

    return state;
}
#endif // RGBLIGHT_ENABLE
