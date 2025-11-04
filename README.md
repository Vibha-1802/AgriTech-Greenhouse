# 🌱 AgriTech Greenhouse Automation System

### 📘Introduction

The **AgriTech Greenhouse** project aims to develop a smart greenhouse system that utilizes advanced sensors to optimize water usage, enhance crop yield, and improve resource management in agriculture.  
The system integrates **soil moisture sensors**, **DHT11 temperature sensor**, **relay modules**, and **solar power** to create an efficient, eco-friendly irrigation and climate control solution.

**Key Components and Working Principles:**
- **Soil Moisture Sensor:** Measures soil moisture through electrical capacitance and triggers irrigation when soil is dry.  
- **DHT11 Sensor:** Monitors temperature and humidity with a capacitive humidity sensor and thermistor.  
- **Relay Modules:** Control high-power devices like the water pump and fan using low-power signals from the Arduino.  
- **Solar Power:** Provides a renewable energy source for the system, improving sustainability.

This integrated system automates irrigation based on real-time data, conserving water, improving plant health, and promoting sustainable agriculture.

---

### Problem Statement
Agriculture faces challenges like water wastage, inconsistent plant hydration, and energy inefficiency.  
Traditional greenhouse systems rely on manual irrigation, leading to overuse or underuse of resources and reduced crop productivity.  
This project addresses these issues with a smart, automated, sensor-driven approach.

---

### Objectives
- **Automated Water Pump Control:** Irrigate plants dynamically using moisture readings.  
- **Smart Temperature Regulation:** Control fan operation based on ambient temperature.  
- **Real-Time Soil Moisture Monitoring:** Prevent over- or under-watering.  
- **Solar Energy Utilization:** Use renewable power to operate the system sustainably.

---

### Motivation
- **Water Conservation:** Prevents over-irrigation and ensures efficient water use.  
- **Energy Efficiency:** Uses solar and thermal energy, reducing external power dependency.  
- **Sustainability:** Promotes eco-friendly, scalable, and cost-effective agricultural practices.

---

## 🧠 System Design

### System Architecture

<img width="580" height="377" alt="image" src="https://github.com/user-attachments/assets/127e1d76-94f7-4027-a85f-678a42bb81f8" />

The system consists of sensors connected to an Arduino board, controlling relays for the water pump and fan.  
All components are powered by solar energy and display real-time data on an LCD.

### Software Requirements
- Arduino IDE / Arduino Web Editor

### Hardware Requirements
- Arduino Uno R3  
- Soil Moisture Sensor (REES52)  
- DHT11 Temperature Sensor  
- Solar Panel  
- Relay Modules  
- Water Pump  
- DC Fan  
- LCD Display (I2C 16x2)  
- Breadboard and Connecting Wires

---

## ⚙️ Implementation

### Major Modules
- **Soil Moisture Sensor:** Detects and reports soil water levels.
- **DHT11 Sensor:** Measures temperature and humidity digitally.
- **Relay Module:** Acts as an electronic switch for pump and fan control.
- **Solar Energy Module:** Powers the system for off-grid sustainability.

**Pin Configuration Overview:**
| Component | Arduino Pin | Function |
|------------|--------------|-----------|
| Soil Moisture Sensor | A0 | Reads soil moisture |
| DHT11 Sensor | D2 | Temperature input |
| Water Pump Relay | D3 | Pump control |
| Fan Relay | D4 | Fan control |
| LCD I2C | SDA - A4, SCL - A5 | Display data |



---

## 🔬Testing

Each component and module was tested individually before integrating.

**Results:**
- Soil Moisture Sensor accurately detects soil wetness/dryness.
- DHT11 provides precise temperature readings.
- LCD displays all values clearly.
- Relays switch ON/OFF correctly based on sensor data.


---

## 📊Results

### Component-Level Results
| Component | Functionality | Result |
|------------|----------------|--------|
| Soil Moisture Sensor | Detects soil water level | Accurate |
| DHT11 Sensor | Measures temperature | Reliable |
| LCD Display | Shows real-time data | Clear output |
| Relay Control | Operates pump and fan | Works perfectly |

### System-Level Results
- System initializes correctly.  
- Displays live sensor readings on LCD.  
- Automatically activates pump/fan as per thresholds.

