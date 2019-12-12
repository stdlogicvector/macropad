#ifndef V1_H
#define V1_H

#include "../macropad.h"

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, \
	K10, K11, K12, \
	K20, K21, K22, \
	K30, K31, K32, \
	K40, K41, K42  \
	) \
	{ \
		{ K00, K01, K02 }, \
		{ K10, K11, K12 }, \
		{ K20, K21, K22 }, \
		{ K30, K31, K32 }, \
		{ K40, K41, K42 }  \
	}

#endif

