#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, \
	K10, K11  \
) { \
	{ K00,   K01,   K02 }, \
	{ K10,   K11,   KC_NO }  \
}

#endif