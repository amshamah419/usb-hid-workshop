#include <Keyboard.h>

void setup() {
  delay(2500);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(120);
  Keyboard.releaseAll();
  delay(400);
  Keyboard.print("notepad");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(800);
  Keyboard.println("USB HID demo (safe). This is just keystrokes.");
  Keyboard.end();
}

void loop() {}
