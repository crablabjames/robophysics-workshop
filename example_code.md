---
title: Example Arduino Code
nav_order: 4
---

# Example Arduino Code: 3-Link Swimmer Demo

This example demonstrates how to oscillate a servo-driven joint for the **3-link robophysical swimmer**.  
Upload this sketch to your Arduino board using the Arduino IDE to generate the basic oscillatory motion used in the bootcamp demos.

---
## 💻 Example Code

```
cpp
#include <Servo.h>

Servo servo1;        // create servo object
int pos = 0;         // servo position in degrees
int delayTime = 10;  // ms delay between steps (lower = faster motion)

void setup() {
  servo1.attach(9);  // attach servo to digital pin 9
}

void loop() {
  // sweep from 0° to 60°
  for (pos = 0; pos <= 60; pos += 1) {
    servo1.write(pos);
    delay(delayTime);
  }

  // sweep back from 60° to 0°
  for (pos = 60; pos >= 0; pos -= 1) {
    servo1.write(pos);
    delay(delayTime);
  }
}
```


---

## 📥 Download

[Click here to download the full `.ino` file](files/robophysics_bootcampDemo.ino)

**To use:**
1. Open **Arduino IDE**
2. Select your board (e.g., *Arduino Nano* or *Uno*) and COM port  
3. Open this file and click **Upload**
4. The servo should smoothly oscillate between 0° and 60°

---

## ⚙️ Notes

- Change the pin number in `servo1.attach(9);` if you use another output.  
- Adjust `delayTime` to change oscillation speed.  
- This code provides the simplest periodic joint motion used in the 3-link swimmer.

---

*Prepared for the Robophysics Bootcamp (Crab Lab, Georgia Tech).*
