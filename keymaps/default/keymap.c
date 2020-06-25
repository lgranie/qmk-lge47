#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
  _BL,
  _FL,
  _FR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------------------------------.
   * |Esc| Q | W | E | R | T | Y | U | I | O | P | BS|
   * |-----------------------------------------------|
   * |Tab | A | S | D | F | G | H | J | K | L | Enter|
   * |-----------------------------------------------|
   * | Shift | Z | X | C | V | B | N | M | / | , | . |
   * |-----------------------------------------------|
   * |Ctl|GUI|Alt|     FL    | Space FR  |Lft|Dwn|Rgt|
   * `-----------------------------------------------'
   */
    [_BL] = LAYOUT(
      KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
      KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,       KC_ENT,
      KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_SLSH, KC_COMM, KC_DOT,
      KC_LCTL, KC_LGUI, KC_LALT,          MO(_FL),     LT(_FR, KC_SPC),  KC_LEFT, KC_DOWN, KC_RGHT
    ),
  /* Keymap _FL: (Function Left Layer) Left Layer
   * ,-----------------------------------------------.
   * | ` | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 |Del|
   * |-----------------------------------------------|
   * |    |F1 |F2 |F3 |   |   |   | [ | ] | = |      |
   * |-----------------------------------------------|
   * |       |F4 |F5 |F6 |Del|End|   | ; | ' | \ | - |
   * |-----------------------------------------------|
   * |   |   |   |          |        |   |   | Up|   |
   * `-----------------------------------------------'
   */
    [_FL] = LAYOUT(
      KC_GRV,    KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_6,    KC_7,    KC_8,   KC_9,  KC_0,  KC_DEL,
      _______,   KC_F1,   KC_F2,   KC_F3, _______, _______, _______, KC_LBRC, KC_RBRC, KC_EQL,      _______,
      _______,   KC_F4,   KC_F5,   KC_F6, KC_DEL, KC_END, _______, KC_SCLN, KC_QUOT, KC_BSLS, KC_MINS,
      _______, _______, _______,               _______,             _______,  _______, KC_UP, _______
    ),
  /* Keymap _FR: (Function Right Layer) Right Layer
   * ,-----------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------|
   * |    |F7 |F8 |F9 |   |   |   |   |   |   |      |
   * |-----------------------------------------------|
   * |       |F10|F11|F12|   |   |   |   |   |   |   |
   * |-----------------------------------------------|
   * |   |   |   |          |        |   |USB|RST| BT|
   * `-----------------------------------------------'
   */
    [_FR] = LAYOUT(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______,  KC_F7,   KC_F8,   KC_F9,  _______, _______, _______, _______, _______, _______, _______,
      _______,  KC_F10,  KC_F11,  KC_F12, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______,               _______,             _______,  OUT_USB, RESET, OUT_BT
    )
};

