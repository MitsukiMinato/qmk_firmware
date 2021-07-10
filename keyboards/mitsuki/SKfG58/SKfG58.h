/* Copyright 2021 mitsuki
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05,  \
	L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15,  \
	L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25,  \
	L30, L31, L32, L33, L34, L35,           R30, R31, R32, R33, R34, R35, \
	               L42, L43, L44, L45, R40, R41, R42, R43  \
	) \
	{ \
		{ L00, L01, L02, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ L10, L11, L12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ L20, L21, L22, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ L30, L31, L32, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ KC_NO, KC_NO, L42, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
        { KC_NO, KC_NO, KC_NO, L03, L13, L23, L33, L43 }, \
		{ KC_NO, KC_NO, KC_NO, L04, L14, L24, L34, L44  }, \
		{ KC_NO, KC_NO, KC_NO, L05, L15, L25, L35, L45  }, \
		{ R05, R04, R03, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ R15, R14, R13, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ R25, R24, R23, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ R35, R34, R33, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ KC_NO, KC_NO, R43, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
        { KC_NO, KC_NO, KC_NO, R02, R12, R22, R32, R42 }, \
		{ KC_NO, KC_NO, KC_NO, R01, R11, R21, R31, R41 }, \
		{ KC_NO, KC_NO, KC_NO, R00, R10, R20, R30, R40 } \
	}
	#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05,      R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15,      R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25,      R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34, L35,      R30, R31, R32, R33, R34, R35,  \
                   L42, L43, L44, L45,                R40, R41, R42, R43 \
	) \
	{ \
		{ L00, L01, L02, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ L10, L11, L12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ L20, L21, L22, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ L30, L31, L32, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ KC_NO, KC_NO, L42, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
        { KC_NO, KC_NO, KC_NO, L03, L13, L23, L33, L43 }, \
		{ KC_NO, KC_NO, KC_NO, L04, L14, L24, L34, L44  }, \
		{ KC_NO, KC_NO, KC_NO, L05, L15, L25, L35, L45  }, \
		{ R05, R04, R03, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ R15, R14, R13, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ R25, R24, R23, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ R35, R34, R33, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
		{ KC_NO, KC_NO, R43, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
        { KC_NO, KC_NO, KC_NO, R02, R12, R22, R32, R42 }, \
		{ KC_NO, KC_NO, KC_NO, R01, R11, R21, R31, R41 }, \
		{ KC_NO, KC_NO, KC_NO, R00, R10, R20, R30, R40 } \
	}
#endif
