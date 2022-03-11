#include <Servo.h>
Servo sritutech;

void setup() {
  sritutech.attach(9);
}

void loop() {
  sritutech.write(0);
  delay(400);
  sritutech.write(180);
  delay(400);
}
