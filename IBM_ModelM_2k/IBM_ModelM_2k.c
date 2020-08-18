/* Copyright 2020 Ben Chapman
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

#include "IBM_ModelM_2k.h"

// void keyboard_pre_init_kb(void) {
//   /* Setting status LEDs pins to output and +5V (off) */
//     setPinOutput(F0);
//     setPinOutput(F1);
//     setPinOutput(F1);
//     writePinHigh(F0);
//     writePinHigh(F1);
//     writePinHigh(F2);
// }

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.

  // Set our LED pins as output
  setPinOutput(F0);
  setPinOutput(F1);
  setPinOutput(F2);
//   writePinHigh(F0);
//   writePinLow(F1);
}

void matrix_init_kb(void) {
  /* put your keyboard start-up code here
   * runs once when the firmware starts up */

  matrix_init_user();
}

void matrix_scan_kb(void) {
  /* put your looping keyboard code here
   * runs every cycle (a lot) */

  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  /* put your per-action keyboard code here
   * runs for every action, just before processing by the firmware */

  return process_record_user(keycode, record);
}


bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        // writePin sets the pin high for 1 and low for 0.
        // In this example the pins are inverted, setting
        // it low/0 turns it on, and high/1 turns the LED off.
        // This behavior depends on whether the LED is between the pin
        // and VCC or the pin and GND.
        writePin(F0, led_state.num_lock);
        writePin(F1, led_state.caps_lock);
        writePin(F2, led_state.scroll_lock);
        // writePin(B3, !led_state.compose);
        // writePin(B4, !led_state.kana);
    }
    return res;
}
