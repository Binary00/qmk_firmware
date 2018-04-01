#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFFFD
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Stacy
#define PRODUCT         Stacy
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1 }
#define MATRIX_COL_PINS { F4, F5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#endif