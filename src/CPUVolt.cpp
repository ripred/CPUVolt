/*\ =========================================================================
|*|
|*| CPUVolt.cpp
|*|
|*| Function to use the internal registers in the ATMega cpu to calculate
|*| the processors AVcc:
|*|
|*| =========================================================================
\*/

#include <avr/io.h>
#include <Arduino.h>

#include "CPUVolt.h"

signed long readVcc() {
    // Read 1.1V reference against AVcc
    // Set the reference to Vcc and the measurement to the internal 1.1V reference

#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
    ADMUX = _BV(REFS0) | _BV(MUX4) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
#elif defined (__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) || defined(__AVR_ATtiny84__)
    ADMUX = _BV(MUX5) | _BV(MUX0);
#elif defined (__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)
    ADMUX = _BV(MUX3) | _BV(MUX2);
#else
    ADMUX = _BV(REFS0) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
#endif
  
    delay(2);                         // Wait for Vref to settle
    ADCSRA |= _BV(ADSC);              // Start conversion
    while (bit_is_set(ADCSRA, ADSC)); // measuring
  
    uint8_t low  = ADCL;              // must read ADCL first - it then locks ADCH
    uint8_t high = ADCH;              // unlocks both
  
    long result = (high << 8) | low;  // convert to 32 bit signed value
  
    result = 1125300L / result;       // Calculate Vcc (in mV); 1125300 = 1.1 * 1023 * 1000
    return result;                    // Vcc in millivolts
}
