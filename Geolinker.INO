#include <GeoLinkerLite.h>


GeoLinkerLite geoLinker(Serial, Serial);

void setup() {
    Serial.begin(9600);
    delay(1000);
    
    // Configuration
    geoLinker.setResetPin(2);                    // Reset control pin
    geoLinker.setGSMPins(8, 9);                  // GSM RX, TX pins
    geoLinker.setModemAPN("your.apn.here");      // Your carrier's APN
    geoLinker.setAPIKey("your_api_key");         // Your GeoLinker API key
    geoLinker.setDeviceID("arduino_tracker");    // Unique device ID / Device name
    
    geoLinker.setMaxRetries(3);                  // Max retry attempts to send a data point via GPRS
    geoLinker.setDebugLevel(1);                  // Debug level
    geoLinker.setTimeOffset(5, 30);              // Timezone: Eg. India +5:30 hours

   
    geoLinker.begin();


    delay(1000);
    geoLinker.run();  // Runs only once; system resets or halts afterward
}

void loop() {
   
    delay(1000);
}
