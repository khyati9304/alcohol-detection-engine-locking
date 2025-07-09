# 🚗🔒 Alcohol Detection Engine Locking System

This is a safety-based embedded system that detects alcohol using an MQ3 sensor and disables the vehicle engine if alcohol is detected in the driver's breath.

## 📌 Features

- 🚨 Detects alcohol using MQ3 gas sensor
- 🔊 Triggers a buzzer alarm on detection
- ⚠️ Displays status on 16x2 LCD
- 🔒 Automatically disables engine using relay module
- 🛡 Prevents drunk driving

## 🛠 Components Used

- Arduino UNO
- MQ3 Alcohol Sensor
- Relay Module
- Buzzer
- 16x2 LCD Display
- LED
- Jumper Wires
- Breadboard

## 🔌 Circuit Overview

When the MQ3 sensor detects alcohol, it sends a digital signal to the Arduino which:
- Activates the buzzer
- Cuts power to the relay (engine off)
- Shows "Alcohol Detected" on the LCD

If no alcohol is detected, the relay stays ON (engine runs normally) and LCD shows "Working Fine".

## 💻 Arduino Code

The full Arduino sketch is included in this repository:  
`alcohol_detection.ino`

## 🧠 How to Run

1. Connect all components as per the schematic
2. Upload the `.ino` file to your Arduino Uno via Arduino IDE or VS Code
3. Open Serial Monitor at 115200 baud (optional)
4. Blow air with alcohol content near the sensor to test the system

## 📘 Learnings

- Interfacing MQ3 alcohol sensor with Arduino
- Using relay for engine control simulation
- Displaying data on LCD using LiquidCrystal library
- Real-time safety system prototyping

---

### 🙋‍♂️ Author

**Khyati Mishra**  
Pre-Final Year B.Tech Student

---


