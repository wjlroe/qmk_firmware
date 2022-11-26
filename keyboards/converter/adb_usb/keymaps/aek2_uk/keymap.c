#include QMK_KEYBOARD_H

/* M3501 Apple Extended Keyboard II UK ISO
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.             ,---.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|             |Pwr|
 * `---'   `---------------' `---------------' `---------------' `-----------'             `---'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  §|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  =|  /|  *|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Retur| |Del|End|PgD| |  7|  8|  9|  -|
 * |------------------------------------------------------`    | `-----------' |---------------|
 * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  \|    |               |  4|  5|  6|  +|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shif|  `|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
 * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
 * |Ctrl |Opt |Cmd |         Space           |     |Opt |Ctrl  | |Lef|Dow|Rig| |      0|  .|   |
 * `-----------------------------------------------------------' `-----------' `---------------'
 */
#define KEYMAP_EXT_ISO( \
    K35,  K7A,K78,K63,K76, K60,K61,K62,K64, K65,K6D,K67,K6F, K69,K6B,K71,              K7F, \
    K32,K12,K13,K14,K15,K17,K16,K1A,K1C,K19,K1D,K1B,K18,K33, K72,K73,K74,  K47,K51,K4B,K43, \
    K30,K0C,K0D,K0E,K0F,K11,K10,K20,K22,K1F,K23,K21,K1E,K24, K75,K77,K79,  K59,K5B,K5C,K4E, \
    K39,K00,K01,K02,K03,K05,K04,K26,K28,K25,K29,K27,K2A,                   K56,K57,K58,K45, \
    K38,K0A,K06,K07,K08,K09,K0B,K2D,K2E,K2B,K2F,K2C,    K7B,     K3E,      K53,K54,K55,     \
    K36,K3A,K37,        K31,                        K7C,K7D, K3B,K3D,K3C,  K52,    K41,K4C  \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07 }, \
    { KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17 }, \
    { KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27 }, \
    { KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_PENT,  KC_##K35, KC_##K36, KC_##K37 }, \
    { KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_NO    }, \
    { KC_F17,   KC_##K41, KC_NO,    KC_##K43, KC_F18,   KC_##K45, KC_NO,    KC_##K47 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##K4B, KC_##K4C, KC_NO,    KC_##K4E, KC_F18   }, \
    { KC_F19,   KC_##K51, KC_##K52, KC_##K53, KC_##K54, KC_##K55, KC_##K56, KC_##K57 }, \
    { KC_##K58, KC_##K59, KC_F20,   KC_##K5B, KC_##K5C, KC_INT3,  KC_INT1,  KC_PCMM  }, \
    { KC_##K60, KC_##K61, KC_##K62, KC_##K63, KC_##K64, KC_##K65, KC_LANG2, KC_##K67 }, \
    { KC_LANG1, KC_##K69, KC_F16,   KC_##K6B, KC_NO,    KC_##K6D, KC_APP,   KC_##K6F }, \
    { KC_NO,    KC_##K71, KC_##K72, KC_##K73, KC_##K74, KC_##K75, KC_##K76, KC_##K77 }, \
    { KC_##K78, KC_##K79, KC_##K7A, KC_##K7B, KC_##K7C, KC_##K7D, KC_NO,    KC_##K7F }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_EXT_ISO(
    ESC,  F1,   F2,  F3,  F4,  F5,  F6,  F7,  F8,   F9,  F10,  F11,  F12,                 PSCR,SLCK,PAUS,                                EJCT,
    NUBS,  1,    2,   3,   4,   5,   6,   7,   8,    9,   0,    MINS, EQL,  BSPC,       INS, HOME, PGUP,     NLCK, EQL, PSLS, PAST,
    TAB,  Q,    W,   E,   R,   T,   Y,   U,   I,    O,   P,    LBRC, RBRC, ENT,       DEL, END,  PGDN,     P7,   P8,  P9,   PMNS,
    LCAP, A,    S,   D,   F,   G,   H,   J,   K,    L,   SCLN, QUOT,          BSLS,                                      P4,   P5,  P6,   PPLS,
    LSFT, GRV,  Z,    X,   C,   V,   B,   N,   M,   COMM, DOT, SLSH,                   RSFT,                UP,               P1,   P2,  P3,
    LCTL, LGUI, LALT,                SPC,                                  RALT, RCTL,                         LEFT, DOWN, RGHT,    P0,           PDOT, PENT
    ),
};
