#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  Keyboard.println("Hello from ATmega32U4 BadUSB demo (safe).");
  Keyboard.end();
}

void loop() {}
