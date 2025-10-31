# 🏠 Room Control System

An **Arduino-based room automation project** that integrates multiple modules to control and monitor a smart room.  
The system includes temperature control, door security, device management, and a fire alarm — all simulated using **Proteus**.

---

## 🔹 1. Room Temperature Control  
- Measures the room temperature using an **LM35 sensor**.  
- Displays the temperature on an **LCD screen**.  
- Automatically turns on the **air-conditioning (LED indicator)** when temperature exceeds **25°C**.  

**Components:**  
`Arduino Uno`, `LCD`, `LED`, `Resistor`, `LM35 Temperature Sensor`

---

## 🔹 2. Door Lock System  
- Controlled through a **keypad password system**.  
- When the user enters the correct password, the **door unlocks** (LED indicator).  

**Components:**  
`Arduino Uno`, `LCD`, `LED`, `Resistor`, `Keypad`

---

## 🔹 3. Device Control  
- Allows control of individual devices or all devices at once (ON/OFF).  
- Managed using a **keypad interface**.  

**Components:**  
`Arduino Uno`, `LCD`, `LED`, `Resistor`, `Keypad`

---

## 🔹 4. Fire Alarm System  
- Detects flame using a **flame sensor**.  
- Activates a **warning signal** (LED + Virtual Terminal alert) when fire is detected.  

**Components:**  
`Arduino Uno`, `LED`, `Resistor`, `Flame Sensor`, `Virtual Terminal`

---

## Tools & Simulation  
- **Arduino IDE** — for writing and compiling the code.  
- **Proteus** — for circuit design and simulation.

---

## Project Structure

room-control/
│
├── 1-Control-Devices/
│   ├── t3.ino
│   ├── t3.ino.standard.hex
│
├── 2-Door-Lock/
│   ├── t2.ino
│   ├── t2.ino.standard.hex
│
├── 3-Temperature-Sensor/
│   ├── Temp-sensor.ino
│   ├── Temp-sensor.ino.standard.hex
│
├── 4-Flame-Sensor/
│   ├── Proteus-Simulation/
│   │   ├── Flame-Sensor-Simulation.DSN
│   │   ├── Flame-Sensor-Simulation.PWI
│   │
│   ├── FlameSensorTEP.HEX
│   ├── FlameSensorTEP.IDX
│   ├── FlameSensorTEP.LIB
│   ├── t5.ino
│   ├── t5.ino.standard.hex
│
├── .gitignore
│
└── README.md


---

## Summary  
This project demonstrates how Arduino and Proteus can be combined to create a **complete room automation system**, including:  
- Automatic temperature regulation  
- Password-protected door access  
- Device management  
- Fire detection and alarm  

It serves as a strong foundational project for learning **embedded systems**, **IoT basics**, and **simulation design**.

---

## Author  
**Maryam Kandil**  
