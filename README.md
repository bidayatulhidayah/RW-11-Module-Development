
# **Robotic Workshop Module Development**
**IIUM Roboteam | Robotic Workshop 11.0**

## **Table of Contents**
- [Overview](#overview)
- [Modules](#modules)
  - [Part 1: Microcontrollers & Arduino IDE Basics](#part-1-microcontrollers--arduino-ide-basics)
  - [Part 2: Wall Following Robot](#part-2-wall-following-robot)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Getting Started](#getting-started)
- [Contributors](#contributors)
- [License](#license)

## **Overview**
This repository contains modules developed for **Robotic Workshop 11.0**, designed to introduce participants to microcontrollers, Arduino programming, and autonomous robot development. The main focus is on building and programming a **Wall Following Robot**, an advanced version of a line-following robot.

## **Modules**

### **Part 1: Microcontrollers & Arduino IDE Basics**
This module covers fundamental concepts and hands-on practice with microcontrollers, particularly using the **Arduino IDE**. Key topics include:
- Introduction to microcontrollers and embedded systems  
- Basics of Arduino programming (C/C++)  
- Using sensors and actuators  
- Serial communication and debugging techniques  

### **Part 2: Wall Following Robot**
This module focuses on developing an **autonomous robot** that navigates by following a wall. The robot uses **ultrasonic sensors** to detect obstacles and maintain a consistent distance from the wall. Topics covered include:
- Understanding ultrasonic sensors (HC-SR04)  
- Motor driver control for DC motors  
- Implementing distance-based navigation logic  
- Bluetooth control via an **ESP32 module**

<img src="https://github.com/bidayatulhidayah/RW-11-Module-Development/blob/686738fe159e9bb3051a27b071fa0304d51f1b50/Documents/robot.png" alt="Flow Chart" width="600" />


## **Hardware Requirements**
- **Microcontroller**: ESP32 or Arduino  
- **Motors & Drivers**: TT DC motors, L298N Motor Driver  
- **Sensors**: Ultrasonic Sensor (HC-SR04)  
- **Power Supply**: Li-ion battery (3.7V, 6800mAh)  
- **Chassis**: Custom 3D-printed or acrylic frame  
- **Other Components**: Screws, brackets, jumper wires  

## **Software Requirements**
- **Arduino IDE** (for coding and uploading firmware)  
- **Bluetooth Serial Terminal** (for wireless control)    

## **Getting Started**
1. Clone this repository:  
   ```bash
   git clone https://github.com/your-repo-name.git
   cd your-repo-name
   ```  
2. Install **Arduino IDE** and required libraries.  
3. Upload the provided sketches to your ESP32/Arduino board.  
4. Assemble the hardware according to the schematics in the module.  
5. Test and debug your robot!  

## **Contributors**
- **IIUM Roboteam** – Robotic Workshop 11.0 Development Team  

## **License**
This project is licensed under the MIT License.
