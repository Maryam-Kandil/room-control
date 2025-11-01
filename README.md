# 🏠 Room Control System (Arduino + Proteus Simulation)

##  Overview
The **Room Control System** is a comprehensive Arduino-based simulation built and tested using **Proteus 8 Professional**.  
It integrates multiple smart control modules — **temperature monitoring, door security, device control, and fire detection** — to demonstrate how automation can make indoor environments more efficient, safe, and interactive.

Each module operates independently inside Proteus, simulating real-world automation logic through sensors, actuators, and digital inputs.

---
## ⚙️ Project Modules

### 🌡️ 1. Room Temperature Control
- Monitors room temperature using the **LM35 sensor**.  
- Displays the temperature on an **LCD screen**.  
- Automatically activates the **air-conditioning (LED indicator)** when the temperature exceeds **25°C**.  

**Components:**  
`Arduino Uno`, `LCD`, `LED`, `Resistor`, `LM35 Temperature Sensor`

---

### 🔐 2. Password-Based Door Lock
- Controls door access via a **keypad input**.  
- When the correct password is entered, the **door unlocks** (LED indicator).  
- Displays system messages and feedback on the **LCD screen**.  

**Components:**  
`Arduino Uno`, `LCD`, `LED`, `Resistor`, `Keypad`

---

### 💡 3. Device Control System
- Enables users to **turn ON/OFF individual devices** or **control all devices simultaneously**.  
- Managed via a **keypad interface** with status displayed on the LCD.  

**Components:**  
`Arduino Uno`, `LCD`, `LED`, `Resistor`, `Keypad`

---

### 🔥 4. Flame Detection & Fire Alarm System
- Detects fire using a **Flame Sensor**.  
- Triggers an **alarm and visual warning** (LED + Virtual Terminal) when fire is detected.  
- Uses a **custom Proteus FlameSensorTEP library** for realistic simulation.  

**Components:**  
`Arduino Uno`, `Flame Sensor`, `LCD`, `LED`, `Resistor`, `Virtual Terminal`

---

## Tools & Technologies
- **Software:** Arduino IDE, Proteus 8 Professional  
- **Microcontroller:** Arduino Uno (simulated)  
- **Sensors:** LM35 (Temperature), Flame Sensor  
- **Modules:** Keypad, LCD, Virtual Terminal  
- **Simulation Library:** Custom FlameSensorTEP Library  


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
## How to Run the Simulation

1. Clone the repository  
   ```bash
   git clone (https://github.com/Maryam-Kandil/room-control.git)
   cd room-control
   ```

2. Open a module folder, for example:  
   ```bash
   cd 4-Flame-Sensor
   ```

3. Open the `.ino` file in Arduino IDE and compile it.  
   (Optional) Go to **Sketch → Export Compiled Binary** to generate a new `.hex` file.

4. In Proteus:  
   - Open the corresponding `.DSN` file (if available).  
   - Double-click the Arduino UNO component and select the generated `.standard.hex` file.  
   - Click **Run** to start the simulation and observe module behavior.


## Summary  
This project demonstrates how Arduino and Proteus can be combined to create a **complete room automation system**, including:  
- Automatic temperature regulation  
- Password-protected door access  
- Device management  
- Fire detection and alarm  

It serves as a strong foundational project for learning **embedded systems**, **IoT basics**, and **simulation design**.

---
## Future Improvements

- **Integrate all modules** into a single unified **room automation system**.  
- Add **IoT connectivity** (Wi-Fi / Bluetooth) for **remote monitoring and control**.  
- Include **buzzer or sound alarms** for **enhanced realism**.  
- Add **real-time data logging** or a **cloud-based dashboard** for performance tracking.
  
## License

This project is **proprietary** and owned by **Maryam Kandil**.  
It is shared publicly for **educational and portfolio demonstration purposes only**.  
**Reuse, modification, or redistribution** of this work is **not permitted without explicit permission**.


## Author

**Maryam Kandil**  
Curious and driven **software engineer** exploring the intersection of **AI**, **web apps**, and **IoT innovation**.  
Passionate about turning ideas into **interactive, intelligent systems** that make technology more human.
 
