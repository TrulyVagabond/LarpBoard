#include QMK_KEYBOARD_H

#define KC_COPY_M  LCTL(KC_C)
#define KC_PASTE_M LCTL(KC_V)

/* Keycode compatibility aliases */
#ifndef RGB_TOG
#    define RGB_TOG UG_TOGG
#    define RGB_MOD UG_NEXT
#    define RGB_HUI UG_HUEU
#    define RGB_HUD UG_HUED
#    define RGB_SAI UG_SATU
#    define RGB_SAD UG_SATD
#    define RGB_VAI UG_VALU
#    define RGB_VAD UG_VALD
#endif

enum custom_layers {
_BASE,
_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_MUTE,
    KC_BSPC, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    KC_BSLS, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_LCTL, MO(_FN),
    KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_PSCR, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_COPY_M, KC_UP,   KC_PASTE_M
),

[_FN] = LAYOUT(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  QK_BOOT,
    KC_DEL,  _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,
    _______, _______, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END,  _______,   KC_PGUP, _______
)
};

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
if (index == 0) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
}
return true;
}
#endif

#if defined(OLED_ENABLE)
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
return OLED_ROTATION_180;
}

bool oled_task_user(void) {
oled_write_P(PSTR("VAGABOND // RP2040\n"), false);
oled_write_P(PSTR("LAYER: "), false);
switch (get_highest_layer(layer_state)) {
    case _BASE:
        oled_write_P(PSTR("BASE\n"), false);
        break;
    case _FN:
        oled_write_P(PSTR("FN / MEDIA\n"), false);
        break;
    default:
        oled_write_P(PSTR("UNKNOWN\n"), false);
}
return false;
}
#endif
