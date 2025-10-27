---
title: Example Arduino Code
nav_order: 4
---

# Example Arduino Code: 3-Link Swimmer Demo

This example demonstrates how to oscillate a servo-driven joint for the 3-link robophysical swimmer.  
It comes from the **Robophysics Bootcamp Demo** and can be uploaded directly using the Arduino IDE.

---

## 💻 Source Code

```cpp
#include <Servo.h>

Servo servo1;      // create servo object
int pos = 0;       // variable to store servo position
int delayTime = 10;  // adjust speed of sweep

void setup() {
  servo1.attach(9);  // attach servo to digital pin 9
}

void loop() {
  // sweep from 0° to 60°
  for (pos = 0; pos <= 60; pos += 1) {
    servo1.write(pos);
    delay(delayTime);
  }
  // and back to 0°
  for (pos = 60; pos >= 0; pos -= 1) {
    servo1.write(pos);
    delay(delayTime);
  }
}
