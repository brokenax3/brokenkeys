#pragma once
#define REV3_CONFIG_H

/* USB Device descriptor parameter */
#define DEVICE_VER 0x0003

#undef MATRIX_ROWS
#undef MATRIX_COLS
/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#define MATRIX_ROW_PINS { A10, A9, A8, B15, C13, C14, C15, A2, A3, A6 }
#define MATRIX_COL_PINS { B11, B10, B2, B1, A7, B0 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B13 }

#define DIP_SWITCH_PINS { B14, A15, A0, B9 }

#define MUSIC_MAP
#undef AUDIO_VOICES
#undef AUDIO_PIN
#define AUDIO_PIN A5
#define AUDIO_PIN_ALT A4
#define AUDIO_PIN_ALT_AS_NEGATIVE

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

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
