🔆 LED Brightness Control using Potentiometer (Arduino)

📌 Project Overview

This project demonstrates how to control LED brightness using a potentiometer with Arduino. It uses Analog-to-Digital Conversion (ADC) to read input and Pulse Width Modulation (PWM) to control LED brightness.

---

🧠 Concepts Used

- Analog Input (ADC)
- PWM (Pulse Width Modulation)
- Embedded C basics
- Hardware and software integration

---

🔧 Components Required

- Arduino Board (Uno)
- 10k Potentiometer
- LED
- 330Ω Resistor
- Breadboard
- Jumper wires

---

🔌 Circuit Connections

Potentiometer:

- Left Pin → 5V
- Middle Pin → A0
- Right Pin → GND

LED:

- Arduino Pin 9 → 330Ω Resistor → LED (+)
- LED (–) → GND

---

💻 Code
led_brightness_using_pot.ino

---

⚙️ Working Principle

The potentiometer changes the voltage at analog pin A0.
Arduino reads this voltage using ADC (0–1023).
The value is converted into PWM range (0–255) and used to control LED brightness.

---

🎯 Output

- Rotating the potentiometer changes LED brightness smoothly
- Left position → LED OFF
- Right position → LED fully ON

---

📸 Project Image

![Project Image](project.jpg)

---

🚀 Future Improvements

- Add LDR for automatic brightness control
- Implement using STM32
- Add button-based brightness control

---

🙌 Author

Reena Kumari
Aspiring Embedded Systems Engineer
