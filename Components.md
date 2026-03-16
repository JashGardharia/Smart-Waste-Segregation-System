# Components Required
## Smart Waste Segregation System

This document lists the hardware components required to build the Smart Waste Segregation System using ESP8266.

---

# 1. Microcontroller

- 1 × ESP8266 NodeMCU

Purpose  
Acts as the main controller of the system. It reads sensor data and controls the stepper motor to direct waste into the correct bin.

---

# 2. Waste Detection Sensors

## Metal Detection

- 1 × Inductive Metal Proximity Sensor

Purpose  
Detects metallic objects such as aluminum cans or steel waste.

---

## Wet / Dry Detection

- 1 × Soil Moisture Sensor Module

Purpose  
Measures moisture content in the waste to determine whether it is wet or dry.

Wet waste examples  
Food scraps, organic waste

Dry waste examples  
Paper, plastic, cardboard

---

# 3. Bin Switching Mechanism

- 1 × Stepper Motor (28BYJ-48 or NEMA17)
- 1 × Stepper Motor Driver (ULN2003 or A4988)

Purpose  
Rotates or switches the waste container position so the detected waste falls into the correct bin.

---

# 4. Waste Detection Trigger Sensor

Choose one:

- 1 × IR Obstacle Sensor

or

- 1 × Ultrasonic Sensor (HC-SR04)

Purpose  
Detects when waste is placed into the system and triggers the classification process.

---

# 5. Indicators

- 1 × Green LED
- 1 × Yellow LED
- 1 × Red LED
- 1 × Buzzer

Purpose  

Green → Dry waste  
Yellow → Wet waste  
Red → Metal waste  
Buzzer → System feedback

---

# 6. Power Supply

Option A

- 1 × 5V 2A Power Adapter

Option B

- 1 × 18650 Li-ion Battery
- 1 × TP4056 Charging Module
- 1 × 5V Boost Converter

Purpose  
Provides stable power to the ESP8266, sensors, and motor system.

---

# 7. Structural Components

- Waste funnel or intake slot
- Rotating bin holder
- 3 separate waste bins
- Stepper motor mounting bracket
- Frame or enclosure

Purpose  
Supports the mechanical structure of the system.

---

# 8. Basic Electronics

- Breadboard or PCB
- Jumper wires
- Resistors (220Ω, 1kΩ)
- Diodes (1N4007)
- Capacitors (100µF)

Purpose  
Used for circuit connections and electrical stability. (Basically to control Voltage Spikes)

---

# Component Summary

| Category | Components |
|--------|------------|
| Controller | ESP8266 NodeMCU |
| Sensors | Inductive Metal Sensor, Moisture Sensor |
| Trigger Sensor | IR Sensor or Ultrasonic Sensor |
| Actuators | Stepper Motor |
| Drivers | ULN2003 / A4988 |
| Output | LEDs, Buzzer |
| Power | Adapter or Battery System |
| Structure | Frame, bins, funnel |

---

# Notes

Ensure that the stepper motor driver is correctly powered and that the ESP8266 ground is shared with the motor driver and sensors for proper operation. 
