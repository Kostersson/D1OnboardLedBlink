#include "BlinkLed.h"
#include "Arduino.h"

void blinkLed(int delayInMs) {
    digitalWrite(BUILTIN_LED, LOW);
    delay(delayInMs);
    digitalWrite(BUILTIN_LED, HIGH);
}