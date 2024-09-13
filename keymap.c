// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_Y_ESC,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_Y_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_ESC),
};


#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q         ,KC_W              , KC_E              , KC_R,               KC_T,        TD(TD_Y_ESC), KC_U              , KC_I              , KC_O               , KC_P,
    LSFT_T(KC_A) ,MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LGUI, KC_F), KC_G,        KC_H, MT(MOD_RGUI, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_RALT, KC_L) , RSFT_T(KC_SCLN),
    KC_Z         ,KC_X              , KC_C              , KC_V,               KC_B,        KC_N, KC_M              , KC_COMM           , KC_DOT             , KC_SLSH,
                                       LT(2, KC_TAB), KC_SPC,    KC_ENT, LT(1, KC_BSPC) 
  ),

  [1] = LAYOUT(
    KC_1   ,    KC_2, KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,      KC_9,    KC_0,
    QK_GESC, KC_HOME, KC_PGDN, KC_PGUP, CW_TOGG,                  KC_LEFT, KC_DOWN,   KC_UP,   KC_RGHT, KC_TRNS ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,                  KC_HOME, KC_PGDN, KC_PGUP,   KC_END , KC_TRNS,
                                          MO(3), KC_ESC, KC_TRNS, KC_DEL  
  ),

  [2] = LAYOUT(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_DQT, KC_QUOT,         KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_TILD,         KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                                    KC_TRNS, KC_TRNS, KC_TRNS, MO(3)
  ),

  [3] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
};
