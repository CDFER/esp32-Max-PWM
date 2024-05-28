#include "Arduino.h"

void setup() {
    Serial.begin(115200);            //115200 baud rate (If necessary, change in the serial monitor)
    while (!Serial);                 //Wait for someone to open the serial monitor

    const int maxResolution = 16;
    int maxFrequencies[maxResolution];  // array to store max frequencies for each resolution

    for (int resolution = 1; resolution <= maxResolution; resolution++) {
        int maxFrequency = 0;
        for (int frequency = 100;; frequency += 100) {
            if (ledcSetup(1, frequency, resolution) == 0) {
                maxFrequencies[resolution - 1] = maxFrequency;
                break;
            } else {
                maxFrequency = frequency;
            }
        }
    }

    Serial.printf("Board Model: %s\n", ARDUINO_BOARD);
    Serial.printf("Chip Model: %s\n", ESP.getChipModel());
    Serial.printf("Chip Revision: %d\n", ESP.getChipRevision());
    Serial.printf("Number of Cores: %d\n", ESP.getChipCores());
    Serial.printf("CPU Frequency: %d MHz\n", ESP.getCpuFreqMHz());
    Serial.printf("SDK Version: %s\n", ESP.getSdkVersion());
    
    Serial.print("\nMax frequencies:");
    for (int i = 0; i < maxResolution; i++) {
        if (maxFrequencies[i] < 1000) {
            Serial.printf("\n%ibits = %ihz", i+1, maxFrequencies[i]);
        } else if (maxFrequencies[i] < 1000000) {
            Serial.printf("\n%ibits = %.2fkhz", i + 1, (float)maxFrequencies[i] / 1000);
        } else {
            Serial.printf("\n%ibits = %.2fmhz", i+1, (float)maxFrequencies[i] / 1000000);
        }
    }
}

void loop() {
}