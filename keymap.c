#include QMK_KEYBOARD_H

#include "keymap_german.h"


// Thumb keys
#define LTHUMB2 MT(MOD_LCTL, KC_ENT)
#define RTHUMB1 LT(NAV, KC_SPC)
#define RTHUMB2 LT(SPECIAL, KC_ENT)
#define NUMORI LT(NUM, DE_I)
#define BRACKORN LT(BRACK, DE_N)

#define KC_CTSC RCTL_T(DE_SCLN)
#define KC_CTLA LCTL_T(DE_A)
#define KC_LSHZ LSFT_T(DE_Z)
#define KC_RLSH RSFT_T(DE_SLSH)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(DE_GRV)

enum layers {
    BASE,
    SPECIAL,
    NAV,
    NUM,
    BRACK,
    FN,
	MOUSE,
	LNAV,
	QWERTY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT(
    DE_Q,                DE_W,            DE_F,              DE_P,     DE_B,    DE_J,    DE_L,             DE_U,    DE_Y,   DE_SCLN,
    LSFT_T(DE_A),        LT(FN,DE_R),     DE_S,              DE_T,     DE_G,    DE_M,    BRACKORN,         LT(MOUSE,DE_E),    NUMORI, RSFT_T(DE_O),
    DE_X,                DE_C,            DE_D,              DE_V,     DE_Z,    DE_K,    DE_H,             DE_COMM, DE_DOT, DE_SLSH,
                                                     LTHUMB2,  KC_BSPC, RTHUMB1, RTHUMB2
  ),
  [SPECIAL] = LAYOUT(
    DE_AT   ,            _______, _______, _______, _______, _______, _______,   DE_UDIA,   _______,   _______,
    LSFT_T(DE_ADIA),     _______, DE_SS,   _______, _______, _______, _______,   DE_EURO,   _______,  RSFT_T(DE_ODIA),
    _______,             _______, _______, _______, _______, _______, _______,   _______,   _______,   _______,
                                           _______, _______, _______,  XXXXXXX
  ),
  [NAV] = LAYOUT(
    _______,             _______, _______, _______, _______, _______, _______,   _______,   KC_ESC,    KC_DEL,
    _______,             _______, _______, _______, _______, KC_LGUI, KC_TAB,    _______,   _______,   _______,
    _______,             _______, _______, _______, _______, _______, _______,   _______,   _______,   KC_LALT,
                                           KC_LCTL, KC_LALT, XXXXXXX, _______
  ),
  [NUM] = LAYOUT(
    XXXXXXX,             KC_KP_7   , KC_KP_8   , KC_KP_9  ,  XXXXXXX, DE_PERC, DE_EQL,   DE_SLSH,  XXXXXXX, KC_DEL,
    XXXXXXX,             KC_KP_4   , KC_KP_5   , KC_KP_6  ,  XXXXXXX, XXXXXXX, DE_PLUS,  DE_MINS , XXXXXXX, DE_ASTR,
    KC_NUM_LOCK,         KC_KP_1   , KC_KP_2   , KC_KP_3  ,  KC_KP_0, XXXXXXX, XXXXXXX,  DE_BSLS, XXXXXXX, XXXXXXX,
                                                 KC_LCTL,    _______, _______, _______
  ),
  [BRACK] = LAYOUT(
    DE_TILD,             DE_LCBR   , DE_RCBR   , DE_AMPR,    DE_HASH,  XXXXXXX, XXXXXXX,   DE_QUOT,   DE_DQUO,   DE_QUES ,
    DE_SCLN,             DE_LBRC   , DE_LPRN   , DE_RPRN  ,  DE_RBRC,  XXXXXXX, XXXXXXX,   DE_MINS,   DE_UNDS,   DE_EXLM,
    DE_COLN,             DE_PIPE   , XXXXXXX   , DE_LABK  ,  DE_RABK,  XXXXXXX, XXXXXXX,   DE_DLR ,   DE_GRV ,   DE_SECT,
                                                 _______  ,  _______ , _______, _______
  ),
  [FN] = LAYOUT(
    QK_BOOT,             XXXXXXX   , KC_MSTP   , KC_VOLD  ,        KC_VOLU ,        XXXXXXX, KC_F7,   KC_F8,   KC_F9,    KC_F10,
    XXXXXXX,             XXXXXXX   , KC_LSFT   , KC_LALT  ,        XXXXXXX ,        XXXXXXX, KC_F4,   KC_F5,   KC_F6 ,   KC_F11,
    XXXXXXX,             XXXXXXX   , XXXXXXX   , XXXXXXX  ,        XXXXXXX ,        XXXXXXX, KC_F1,   KC_F2,   KC_F3 ,   KC_F2,
                                                 _______  ,        _______ ,        _______, _______
  ),
  [MOUSE] = LAYOUT(
    XXXXXXX,             XXXXXXX   , XXXXXXX   , XXXXXXX  ,  XXXXXXX , XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
    KC_MS_L,             KC_LEFT   , KC_UP     , KC_RIGHT ,  KC_MS_R , KC_MS_U, KC_BTN1,   XXXXXXX,   KC_BTN2 ,  XXXXXXX,
    XXXXXXX,             XXXXXXX   , KC_DOWN   , XXXXXXX  ,  XXXXXXX , KC_MS_D, XXXXXXX,   XXXXXXX,   XXXXXXX ,  XXXXXXX,
                                                 _______  ,  _______ , _______, _______
  ),
  [LNAV] = LAYOUT(
    _______,             _______, _______, _______, _______, _______, _______,   _______,   _______,   _______,
    XXXXXXX,             _______, _______, KC_TAB,  _______, _______, _______,   _______,   _______,   _______,
    _______,             _______, _______, _______, _______, _______, _______,   _______,   _______,   _______,
                                           XXXXXXX, _______, XXXXXXX, _______
  ),
  [QWERTY] = LAYOUT( /* QWERTY */
    DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,            DE_Y,    DE_U,  DE_I,    DE_O,   DE_P,
    KC_CTLA, DE_S,    DE_D,    DE_F,    DE_G,            DE_H,    DE_J,  DE_K,    DE_L,   KC_SCLN,
    KC_LSHZ, DE_X,    DE_C,    DE_V,    DE_B,            DE_N,    DE_M,  DE_COMM, DE_DOT, KC_RLSH,
                                    _______, _______, _______, _______
  ),
};


enum combo_events {
    ALT,
    ALT_TAB,
    QWERTY_COMB,
    QWERTY_DCOMB,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM alt_combo[] = {
    LSFT_T(DE_A),
    LTHUMB2,
    COMBO_END
};
const uint16_t PROGMEM alt_tab_combo[] = {
    LSFT_T(DE_A),
    LTHUMB2,
    DE_T,
    COMBO_END
};
const uint16_t PROGMEM qwerty_comb[] = {
    DE_Y,
    DE_J,
    COMBO_END
};
const uint16_t PROGMEM qwerty_dcomb[] = {
    DE_O,
    DE_Y,
    COMBO_END
};

combo_t key_combos[] = {
    [ALT] = COMBO_ACTION(alt_combo),
    [ALT_TAB] = COMBO_ACTION(alt_tab_combo),
    [QWERTY_COMB] = COMBO_ACTION(qwerty_comb),
    [QWERTY_DCOMB] = COMBO_ACTION(qwerty_dcomb),
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case ALT:
            if (pressed) {
                register_code(KC_LALT);
                layer_on(LNAV);
            } else {
                unregister_code(KC_LALT);
                layer_off(LNAV);
            }
            break;
        case QWERTY_COMB:
            if (pressed) {
                layer_on(QWERTY);
            }
            break;
        case QWERTY_DCOMB:
            if (pressed) {
                layer_off(QWERTY);
            }
            break;

    }
}