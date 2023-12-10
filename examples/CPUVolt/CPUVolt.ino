/*
 * CPUVolt.ino
 * 
 * Example Arduino sketch showing the use of the CPUVolt library.
 * Updated to show the use of the new readPercent(...) methods.
 * 
 */
#include <CPUVolt.h>

void setup() {
    Serial.begin(115200);

    /*
     * Read the current voltage level and convert it
     * to an easier to read floating point value
     */
    float mv = readVcc() / 1000.0;

    // Show the voltage with 2 decimal places
    Serial.print("Voltage: ");
    Serial.println(mv, 2);

    /*
     * Get the voltage level as a percentage of total charge.
     * You can optionally specify the voltage level to be considered
     * as 100%. The default voltage is 5V if not supplied.
     */
    float pct = readPercent(/*5000*/);
    Serial.print("Percent: ");
    Serial.println(pct, 2);

    /*
     * You can also specify both the lower and upper voltage
     * ranges to be considered what is 0% and what is 100%.
     * This is really useful for battery powered projects!
     */
    pct = readPercent(2900, 4700);
    Serial.print("Percent: ");
    Serial.println(pct, 2);

    /*
     * The following code shows how you might use the percent of charge
     * to turn on a "needs recharging" LED at the percent you want:
     */
    float const low_pct = 70.0;                // season to taste :)
    bool const needs_charging = pct <= low_pct;// set a "needs charging" flag
    int const led_pin = LED_BUILTIN;           // Or use any other GPIO pin (besides A6 or A7)
    pinMode(led_pin, OUTPUT);                  // set the pin as an output
    digitalWrite(led_pin, needs_charging);     // set the LED  pin HIGH or LOW as needed
}

void loop() { }
