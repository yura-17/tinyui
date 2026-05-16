
#ifndef TYPES_H
#define TYPES_H

//default setting
#define ENV_MAX_PLANE 8
#define PLANE_MAX_DIALOGUE 16
#define PLANE_DEFAULT_SIZE_X 32
#define PLANE_DEFAULT_SIZE_Y 20
#define DIALOGUE_MAX_BUFFER 32

//unsigned types.
typedef unsigned char   uint_8;
typedef unsigned short uint_16;
typedef unsigned int   uint_32;
typedef unsigned long  uint_64;

//element type declaration
typedef struct env_t      env;
typedef struct plane_t    plane;
typedef struct dialogue_t dialogue;

//coordinate type declarations
typedef struct vec2_t vec2;

//type identifiers.
typedef enum {
  t_env,
  t_plane,
  t_dialogue
} elementType;

//type definitions;

typedef struct vec2_t {
  uint_8 x;
  uint_8 y;
  
} vec2;

typedef struct env_t {
  elementType type;
  vec2 maxSize;
  
  plane* cPlane[ENV_MAX_PLANE];
  uint_8 cPlaneIndex;
  
} env;

typedef struct plane_t {
  elementType type;
  vec2 size;
  vec2 pos;
  
  env* pEnv;
  dialogue* cDialogue[PLANE_MAX_DIALOGUE];
  uint_8 cDialogueIndex;
  
} plane;

typedef struct dialogue_t {
  elementType type;
  vec2 pos;
  uint_8 buffer[DIALOGUE_MAX_BUFFER];
  
  plane* pPlane;
  
} dialogue;

#endif
