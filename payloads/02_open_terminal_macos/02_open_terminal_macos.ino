#include <Keyboard.h>

void setup() {
  delay(2500);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  delay(200);
  Keyboard.releaseAll();
  delay(450);
  Keyboard.print("Terminal");
  delay(250);
  Keyboard.write(KEY_RETURN);
  delay(900);
  Keyboard.println("echo 'USB HID demo (safe)';");
  Keyboard.end();
}

void loop() {}
