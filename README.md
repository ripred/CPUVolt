# CPU Voltage

## Measure the voltage of the processor.

Measure the voltage applied to Vcc on the Microchip (Atmel) ATMega processors using nothing more than the internal registers.
NO external parts necessary. 

[see this Microchip application note to learn more about the internal features used and supported to implement this feature](https://ww1.microchip.com/downloads/en/Appnotes/00002447A.pdf)

Example use:

#
```
    #include <CPUVolt.h>
    
    // We don't need a setup and a loop function so we just use a single main:
    int main() {
        Serial.begin(115200);
    
        // Measure the processor's Vcc voltage:
        double volts = readVcc();
    
        // Format it as a string to 2 decimal places:
        char fstr[8];
        dtostrf(volts, 5, 2, fstr);
    
        // Display it:
        Serial.print("voltage: ");
        Serial.println(fstr);
    
        return 0;
    }
```

Output:

#
```
    voltage: 4.73
```

