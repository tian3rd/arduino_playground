#include <Arduino.h>

int val = B00000000;

void setup() {
  Serial.begin(9600);
  // equivalent to:
  // PORTD = B
  // set pin 22 to 29 (PA0 - PA7) to OUTPUT mode
  DDRA = B11111111;
  // set pin 22 to 29 (PA0 - PA7) to LOW
  PORTA = B00000000;
}

void loop() {
  val = (val + 1) % 256;
  PORTA = val;
  Serial.println(PINA);
  delay(500);
}