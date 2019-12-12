#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Keymap Layers

#define _BASE 0

// Defines for task-manager etc.
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,--------------------.
 * |  F1  |  F2  |  F3  |
 * |------+------|------|
 * |  F4  |  F5  |  F6  |
 * |------+------|------|
 * |  F7  |  F8  |  F9  |
 * |------+------|------|
 * | F10  | LOCK |  F12 |
 * |------+------|------|
 * |  EL  |      |  ER  |
 * `--------------------'
 */
[_BASE] = LAYOUT( \
    KC_1,      		KC_2,		KC_3,		\
	KC_4,      		KC_5,		KC_6,		\
	KC_7,      		KC_8,		KC_9,		\
	BL_TOGG,   		KC_LOCK,	BL_STEP,	\
											\
	KC_MS_BTN1,		KC_NO,		KC_MS_BTN2	\
)
};

// Combos

enum combos {
	CMB_RESET
};

const uint16_t PROGMEM reset_combo[] = {KC_1, KC_2, KC_3, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	[CMB_RESET] = COMBO_ACTION(reset_combo)
};

// User Functions

void matrix_init_user(void) {

}

void process_combo_event(uint8_t combo_index, bool pressed) {
  switch(combo_index) {
    case CMB_RESET:
      if (pressed) {
        //tap_code16(RESET);
		reset_keyboard();
      }
      break;
  }
}

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* Left encoder */
    if (clockwise) {
      tap_code(KC_MS_UP);
    } else {
      tap_code(KC_MS_DOWN);
    }
  } else if (index == 1) { /* Right encoder */  
    if (clockwise) {
      tap_code(KC_MS_LEFT);
    } else {
      tap_code(KC_MS_RIGHT);
    }
  }
}