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
    char voltstr[8];

    // calculate Vcc in millivolts:
    signed long millivolts = readVcc();

    dtostrf(millivolts/1000.0, 5, 2, voltstr);
    Serial.print("voltage: ");
    Serial.println(voltstr);

    delay(1000);
}
