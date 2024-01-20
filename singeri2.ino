#include "Keyboard.h"

const int footSwitchLeft = 2;
const int footSwitchRight = 5;
int vasen, oikea;
         
void setup() {
  pinMode(footSwitchRight, INPUT);
  pinMode(footSwitchLeft, INPUT);
  Keyboard.begin();
}

void loop() {
 vasen = digitalRead(footSwitchLeft);
 oikea = digitalRead(footSwitchRight);

 if (oikea == HIGH && vasen == LOW) {
  Keyboard.press(KEY_RIGHT_ALT);

 }
 if (oikea == LOW && vasen == HIGH) {
  Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(0x31);
 }

 if (oikea == HIGH && vasen == HIGH) {
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(0x31);
 }
 else {
  Keyboard.releaseAll();
    
  

 }
}
