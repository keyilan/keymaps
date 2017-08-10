#include "preonic.h"
#include "action_layer.h"

enum preonic_layers {
	_MAC,
	_ADJ,
	_LNX
};

enum preonic_keycodes {
	MAC = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_MAC] = {
		{KC_ESC,	KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_BSPC},
		{KC_TAB,	KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_BSLS},
		{KC_GRV,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT},
		{KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_HOME,	KC_COMM,	KC_DOT,		KC_SLSH },
		{TO(_LNX),	KC_LCTL,	KC_LALT,	KC_LGUI,	MO(_ADJ),	KC_SPC,		KC_SPC,		KC_MINS,	KC_EQL,		KC_LBRC,	KC_RBRC,	KC_ENT}
	},
	[_LNX] = {
		{KC_ESC,	KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_BSPC},
		{KC_TAB,	KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_BSLS},
		{KC_GRV,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT},
		{KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_PSCR,	KC_COMM,	KC_DOT,		KC_SLSH},
		{TO(_MAC),	KC_DEL,		KC_LALT,	KC_LCTL,	MO(_ADJ),	KC_SPC,		KC_SPC,		KC_MINS,	KC_EQL,		KC_LBRC,	KC_RBRC,	KC_ENT}
	},
	[_ADJ] = {
		{KC_F12,	KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11},
		{_______,	_______,	KC_VOLU,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______},
		{_______,	_______,	KC_VOLD,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______},
		{_______,	_______,	_______,	KC_PSCR,	_______,	_______,	_______,	_______,	KC_UP,		_______,	_______,	_______},
		{_______,	_______,	_______,	_______,	KC_TRNS,	_______,	_______,	KC_LEFT,	KC_DOWN,	KC_RGHT,	_______,	_______}
	}
};
