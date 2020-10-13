#include <Arduino.h>
#define ARDUINOJSON_USE_LONG_LONG 1
#include <ArduinoJson.h>

#ifndef LED_BUILTIN
    #define LED_BUILTIN 2
#endif

int delay_time = 50; // USB0: 1000; USB1: 500; USB2: 250; USB3: 50;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
extern "C" void app_main() {
    setup();
    while(1) {
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(delay_time);                       // wait for a second
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
        delay(delay_time);                       // wait for a second
    }
}  