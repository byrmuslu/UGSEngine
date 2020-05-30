#pragma once
// From glfw3
 /* The unknown key */
#define UGS_KEY_UNKNOWN            -1

/* Printable keys */
#define UGS_KEY_SPACE              32
#define UGS_KEY_APOSTROPHE         39  /* ' */
#define UGS_KEY_COMMA              44  /* , */
#define UGS_KEY_MINUS              45  /* - */
#define UGS_KEY_PERIOD             46  /* . */
#define UGS_KEY_SLASH              47  /* / */
#define UGS_KEY_0                  48
#define UGS_KEY_1                  49
#define UGS_KEY_2                  50
#define UGS_KEY_3                  51
#define UGS_KEY_4                  52
#define UGS_KEY_5                  53
#define UGS_KEY_6                  54
#define UGS_KEY_7                  55
#define UGS_KEY_8                  56
#define UGS_KEY_9                  57
#define UGS_KEY_SEMICOLON          59  /* ; */
#define UGS_KEY_EQUAL              61  /* = */
#define UGS_KEY_A                  65
#define UGS_KEY_B                  66
#define UGS_KEY_C                  67
#define UGS_KEY_D                  68
#define UGS_KEY_E                  69
#define UGS_KEY_F                  70
#define UGS_KEY_G                  71
#define UGS_KEY_H                  72
#define UGS_KEY_I                  73
#define UGS_KEY_J                  74
#define UGS_KEY_K                  75
#define UGS_KEY_L                  76
#define UGS_KEY_M                  77
#define UGS_KEY_N                  78
#define UGS_KEY_O                  79
#define UGS_KEY_P                  80
#define UGS_KEY_Q                  81
#define UGS_KEY_R                  82
#define UGS_KEY_S                  83
#define UGS_KEY_T                  84
#define UGS_KEY_U                  85
#define UGS_KEY_V                  86
#define UGS_KEY_W                  87
#define UGS_KEY_X                  88
#define UGS_KEY_Y                  89
#define UGS_KEY_Z                  90
#define UGS_KEY_LEFT_BRACKET       91  /* [ */
#define UGS_KEY_BACKSLASH          92  /* \ */
#define UGS_KEY_RIGHT_BRACKET      93  /* ] */
#define UGS_KEY_GRAVE_ACCENT       96  /* ` */
#define UGS_KEY_WORLD_1            161 /* non-US #1 */
#define UGS_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define UGS_KEY_ESCAPE             256
#define UGS_KEY_ENTER              257
#define UGS_KEY_TAB                258
#define UGS_KEY_BACKSPACE          259
#define UGS_KEY_INSERT             260
#define UGS_KEY_DELETE             261
#define UGS_KEY_RIGHT              262
#define UGS_KEY_LEFT               263
#define UGS_KEY_DOWN               264
#define UGS_KEY_UP                 265
#define UGS_KEY_PAGE_UP            266
#define UGS_KEY_PAGE_DOWN          267
#define UGS_KEY_HOME               268
#define UGS_KEY_END                269
#define UGS_KEY_CAPS_LOCK          280
#define UGS_KEY_SCROLL_LOCK        281
#define UGS_KEY_NUM_LOCK           282
#define UGS_KEY_PRINT_SCREEN       283
#define UGS_KEY_PAUSE              284
#define UGS_KEY_F1                 290
#define UGS_KEY_F2                 291
#define UGS_KEY_F3                 292
#define UGS_KEY_F4                 293
#define UGS_KEY_F5                 294
#define UGS_KEY_F6                 295
#define UGS_KEY_F7                 296
#define UGS_KEY_F8                 297
#define UGS_KEY_F9                 298
#define UGS_KEY_F10                299
#define UGS_KEY_F11                300
#define UGS_KEY_F12                301
#define UGS_KEY_F13                302
#define UGS_KEY_F14                303
#define UGS_KEY_F15                304
#define UGS_KEY_F16                305
#define UGS_KEY_F17                306
#define UGS_KEY_F18                307
#define UGS_KEY_F19                308
#define UGS_KEY_F20                309
#define UGS_KEY_F21                310
#define UGS_KEY_F22                311
#define UGS_KEY_F23                312
#define UGS_KEY_F24                313
#define UGS_KEY_F25                314
#define UGS_KEY_KP_0               320
#define UGS_KEY_KP_1               321
#define UGS_KEY_KP_2               322
#define UGS_KEY_KP_3               323
#define UGS_KEY_KP_4               324
#define UGS_KEY_KP_5               325
#define UGS_KEY_KP_6               326
#define UGS_KEY_KP_7               327
#define UGS_KEY_KP_8               328
#define UGS_KEY_KP_9               329
#define UGS_KEY_KP_DECIMAL         330
#define UGS_KEY_KP_DIVIDE          331
#define UGS_KEY_KP_MULTIPLY        332
#define UGS_KEY_KP_SUBTRACT        333
#define UGS_KEY_KP_ADD             334
#define UGS_KEY_KP_ENTER           335
#define UGS_KEY_KP_EQUAL           336
#define UGS_KEY_LEFT_SHIFT         340
#define UGS_KEY_LEFT_CONTROL       341
#define UGS_KEY_LEFT_ALT           342
#define UGS_KEY_LEFT_SUPER         343
#define UGS_KEY_RIGHT_SHIFT        344
#define UGS_KEY_RIGHT_CONTROL      345
#define UGS_KEY_RIGHT_ALT          346
#define UGS_KEY_RIGHT_SUPER        347
#define UGS_KEY_MENU               348

#define UGS_KEY_LAST               UGS_KEY_MENU