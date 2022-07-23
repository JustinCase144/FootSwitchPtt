
#include "Keyboard.h"

const int footSwitch = 5;
const int xmitLed = 6;
         
void setup() {

  pinMode(footSwitch, INPUT);
  pinMode(xmitLed, OUTPUT);
 
  Keyboard.begin();
}

void loop() {
    while (digitalRead(footSwitch) == HIGH) {
      Keyboard.press(KEY_RIGHT_ALT);
      digitalWrite(xmitLed, HIGH);
      
       }
    
    Keyboard.releaseAll();
    digitalWrite(xmitLed, LOW);
    }
