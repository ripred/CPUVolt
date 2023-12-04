/*\ =========================================================================
|*|
|*| Library to use the internal registers in the ATMega cpu to calculate
|*| the processor's Vcc voltage or the battery charge percentage.
|*|
|*| version 1.0: 2022, ++trent m. wyatt
|*| version 1.1: 3, Dec, 2022, ++trent m. wyatt
|*| version 1.3: 3, Dec, 2023, ++trent m. wyatt
|*|
|*| =========================================================================
\*/

#ifndef CPUVOLT_H_INC
#define CPUVOLT_H_INC

long readVcc();
float readPercent(float min_volt, float max_volt);
float readPercent(float max_volt = 5000);

#endif
