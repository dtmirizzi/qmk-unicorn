#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
    LAYER8
};

enum macros {
    MAC_VI_CLOSE= SAFE_RANGE, MAC_VI_WRITE, 
    MAC_TERM, MAC_CHROME, MAC_CODE,
    MAC_REC_U, MAC_REC_I,  MAC_REC_L, MAC_REC_DOWN, MAC_REC_RIGHT, MAC_REC_ENT,  MAC_REC_J, MAC_REC_K, MAC_REC_CTR_L, MAC_REC_UP, MAC_REC_CTR_R, MAC_REC_LEFT,
    MAC_TUX_PREV, MAC_TUX_X, MAC_TUX_PERC, MAC_TUX_VERT, MAC_TUX_C,  MAC_TUX_NEXT, MAC_TUX_BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,     KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                                 KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,      KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                                 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, 
                                                KC_LGUI, MO(3), KC_SPC,          KC_ENT, TO(1), KC_LALT),

    [_LAYER1] = LAYOUT_split_3x6_3( KC_TAB, KC_NO, KC_LPRN, KC_RPRN, KC_NO, OSL(6),              KC_1, KC_2, KC_3, KC_MINS, KC_EQL, KC_BSPC, 
                                    KC_LCTL, KC_NO, KC_LCBR, KC_RCBR, MO(8), MO(5),             KC_4, KC_5, KC_6, KC_0, KC_UP, KC_BSLS, 
                                    KC_LSFT, KC_Z, KC_LBRC, KC_RBRC, OSL(7), OSL(4),            KC_7, KC_8, KC_9, KC_LEFT, KC_DOWN, KC_RGHT, 
                                                                KC_LGUI, TO(0), KC_TRNS,      KC_TRNS, MO(2), KC_LALT),

    [_LAYER2] = LAYOUT_split_3x6_3(KC_TRNS, RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD, RGB_TOG,         KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS,
                                     KC_TRNS, RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EE_CLR,
                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, 
                                                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),

    [_LAYER3] = LAYOUT_split_3x6_3(KC_GRV, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO,        KC_EXLM, KC_AT, KC_HASH, KC_MINS, KC_EQL, KC_BSPC,
                                 KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO,          KC_DLR, KC_PERC, KC_CIRC, KC_NO, KC_UP, KC_BSLS, 
                                 KC_LSFT, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO,         KC_AMPR, KC_ASTR, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, 
                                                    KC_LGUI, KC_NO, KC_SPC,                KC_ENT, KC_NO, KC_LALT),

    [_LAYER4] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, MAC_TUX_PREV, MAC_TUX_X,
                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,              KC_NO, MAC_TUX_PERC, KC_NO, KC_NO, KC_NO, MAC_TUX_VERT,
                                     KC_NO, KC_NO, MAC_TUX_X, MAC_TUX_C, KC_NO, MAC_TUX_BASE,      MAC_TUX_NEXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                     KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO),

    [_LAYER5] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, MAC_REC_U, MAC_REC_I, KC_NO, KC_NO, KC_NO,
                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, MAC_REC_J, MAC_REC_K, MAC_REC_CTR_L, MAC_REC_UP, MAC_REC_CTR_R, 
                                     KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, MAC_REC_LEFT, MAC_REC_DOWN, MAC_REC_RIGHT, 
                                                            KC_NO, KC_NO, KC_NO,        MAC_REC_ENT, KC_NO, KC_NO),

    [_LAYER6] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MAC_TERM,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                    KC_NO, KC_NO, KC_NO, MAC_CHROME, MAC_CODE, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                            KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO),

    [_LAYER7] = LAYOUT_split_3x6_3(KC_NO, MAC_VI_CLOSE, MAC_VI_WRITE, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                                KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO),

    [_LAYER8] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_F11, KC_F12, KC_F3, KC_NO, KC_NO, KC_NO, 
                                    KC_NO, KC_NO, KC_NO, KC_NO, MO(8), KC_NO,       KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, 
                                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, 
                                                        KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO)

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
    case MAC_TERM:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_SPC) SS_UP(X_LGUI) SS_DELAY(500) "iterm" SS_TAP(X_ENT));
      }
      break;
    case MAC_CHROME:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_SPC) SS_UP(X_LGUI)  SS_DELAY(500)  "chrome" SS_TAP(X_ENT));
      }
      break;
    case MAC_CODE:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_SPC) SS_UP(X_LGUI)  SS_DELAY(500)  "Visual Studio Code" SS_TAP(X_ENT));
      }
      break;
    case MAC_REC_U:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_U) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_I:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_I) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_J:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_J) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_L:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_L) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_K:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_K) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_DOWN:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_DOWN) SS_UP(X_LALT) SS_UP(X_LCTL));
      }                                                                                 
      break;
    case MAC_REC_UP:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_UP) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_RIGHT) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_LEFT:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_LEFT) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;
    case MAC_REC_ENT:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_ENT) SS_UP(X_LALT) SS_UP(X_LCTL));
      }
      break;

      case MAC_TUX_PREV:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b") "p");
      }
      break;
      case MAC_TUX_X:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b") "x");
      }
      break;
      case MAC_TUX_PERC:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b") "%");
      }
      break;
      case MAC_TUX_VERT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b") "\"");
      }
      break;
      case MAC_TUX_C:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b") "c");
      }
      break;
      case MAC_TUX_BASE:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("b"));
      }
      break;

      case MAC_VI_CLOSE:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESC) ":q!");
      }
      break;
      case MAC_VI_WRITE:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESC) ":wq");
      }
      break;
    };

    return true;
};
