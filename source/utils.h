#pragma once

#include "types.h"

#define HID_PAD       ((~*(vu16 *)0x10146000) & 0xFFF)
#define BUTTON_START  (1 << 3)
#define BUTTON_SELECT (1 << 2)
#define BUTTON_A      1
#define BUTTON_B      (1 << 1)
#define BUTTON_RIGHT  (1 << 4)
#define BUTTON_LEFT   (1 << 5)
#define BUTTON_UP     (1 << 6)
#define BUTTON_DOWN   (1 << 7)

#define COLOR_TITLE 0xFF9900
#define COLOR_WHITE 0xFFFFFF
#define COLOR_RED   0x0000FF

extern int pos_y;

u16 waitInput(void);
void shutdown(u32 mode, char *message);