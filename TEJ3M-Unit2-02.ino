// Created By: Mars
// Edited On: Sept 2023
//
// Function: Increasing Blink Intervals

int blinkTime = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  blinkTime += 1000; // Increases blink interval by 1000 millisecond(s)
}
