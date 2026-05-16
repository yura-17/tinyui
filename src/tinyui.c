
#include "tinyui/tinyui.h"

uint_8 tinyuiInit(env* rootEnv) {
  if (rootEnv) return 1;
  
  return 0;
}

uint_8 tinyuiDestroy(env* rootEnv) {
  if (!rootEnv) return 1;
  
  return 0;
}
