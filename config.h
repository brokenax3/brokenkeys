#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define FORCE_NKRO 1

// RGB Layers for Indicator
#define RGB_DI_PIN A1
#define RGBLED_NUM 9
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_VAL_STEP 51
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_DEFAULT_VAL 150
// RGB Matrix support
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGBLIGHT_LAYERS

#endif
