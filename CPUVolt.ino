/*\
|*| CPUVolt.ino
|*|
|*| Example use of the CPUVolt library
|*|
\*/

#include <CPUVolt.h>

void setup() {
    Serial.begin(115200);
}

void loop() {
    char fstr[8];

    // Read the processors Vcc:
    double volts = readVcc();

    // Format string of 6 total digits (incl '.') with 2 decimal places
    dtostrf(volts, 6, 2, fstr);

    Serial.print("voltage: ");
    Serial.println(fstr);

    delay(1000);
}
