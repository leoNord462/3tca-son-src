#ifndef pins_teensy_h_
#define pins_teensy_h_

// Define pins for tab swapping
#define NEXT_TAB_PIN 40
#define PREV_TAB_PIN 41

// Pin for frequency modulation
#define SET_FREQ_PIN 24

// Pin for gain modulation
#define GAIN_PIN 25

// Pin for register button
#define REGISTER_PIN 27

// Reset button
#define RESET_PIN 26

// Pins for LCD display
#define LCD_RS 12
#define LCD_EN 11
#define LCD_D4 5
#define LCD_D5 4
#define LCD_D6 3
#define LCD_D7 2

/* Pins for sound buttons are defined inside `TabMgmt.cpp`:soundPins */

// Min and Max delays for sound repeat
#define MAX_DELAY 2000
#define MIN_DELAY 0

#endif