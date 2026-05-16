
/*
types.h for all tinyui-defined data structs & macros
utils.h for memory management, general tools
render.h for ncurses, render functions & utils
input.h for ncurses, input handling & input utils
vec.h for vec2 coordinate manip

tinyui.h for tinyui struct, init and destroy functs
env.h for environment creation & destruction, as well as manip.
plane.h for plane creation also and destruction.
dialogue.h for dialogues.

*/

#ifndef TINYUI_H
#define TINYUI_H

#include "types.h"
#include "utils.h"
#include "render.h"
#include "input.h"

#include "env.h"
#include "plane.h"
#include "dialogue.h"

uint_8 tinyuiInit(env* rootEnv);
uint_8 tinyuiDestroy(env* rootEnv);

#endif
