# 🔐 Arduino Password-Protected Security System
## 📖 Overview

This project is an Arduino-based password-protected security system designed to simulate an electronic door locking mechanism.

This project implements an Arduino-based password-protected security system that simulates an electronic access control mechanism. User authentication is performed through a 4×4 matrix keypad, while visual and audio feedback are provided using LEDs and a piezo buzzer. The system demonstrates fundamental embedded systems concepts including user input processing, decision making, and hardware control using Embedded C++. The project was designed and tested using Tinkercad.

The project was developed using Embedded C++ and simulated in Tinkercad.
## 🎯 Project Objective

The objective of this project was to design and simulate a basic embedded security system capable of authenticating users and providing immediate visual and audio feedback based on the authentication result.
## ✨ Features

- Secure password authentication using a 4×4 matrix keypad
- Visual status indication using red and green LEDs 
- Audio feedback using a piezo buzzer
- Hidden password input using '*'
- Incorrect password detection
- Access granted / denied messages on the serial monitor 
- Arduino simulation using Tinkercad
## 🔧 Components Used

## Hardware

- Arduino Uno
- 4×4 Matrix Keypad
- Red LED
- Green LED
- Piezo Buzzer
- Breadboard
- Jumper Wires

## Software

- Arduino IDE
- Embedded C++
- Tinkercad
## 📁 Repository Structure
Arduino-password_protected_security_system
│
├── Code
│   └── PasswordSystem.ino
├── Images
│   ├── Circuit.png
│   ├── AccessGranted.png
│   └── AccessDenied.png
├── Simulation
│   └── tinkercad-link.txt
└── README.mdd

---

# Images

## 📷 Screenshots

### Circuit Diagram

![Circuit](Images/Circuit.png)

### Access Granted

![Granted](Images/AccessGranted.png)

### Access Denied

![Denied](Images/AccessDenied.png)

---

# How it works

## ⚙️ System Workflow

1. User enters the password using the keypad.
2. Password characters are hidden on the serial monitor using '*'.
3. Arduino compares the entered password with the stored password.
4. If correct:
   - serial monitor displays "Enter"
   - green LED lights up and the system grants access
   - Buzzer confirms successful access
5. If incorrect:
   - Serial monitor displays "Wrong Passcode"
   - Buzzer sounds and red LED lights up
   - the system denies access

---
## 🛠 Challenges

During development, one challenge was handling keypad input while keeping the user interface responsive. Another was coordinating the LEDs, buzzer, and authentication logic to provide clear feedback without conflicting behavior. Solving these issues improved my debugging skills and understanding of embedded programming.
# Skills Demonstrated


## 🧠 Skills Demonstrated

- Embedded Systems
- Embedded C++
- Arduino Programming
- Hardware Integration
- Keypad Interfacing
- Debugging
- System Testing

---
# Future Improvements

## 🚀 Future Improvements

- EEPROM password storage
- Password change functionality
- RFID authentication
- Fingerprint authentication
- Bluetooth mobile control
- IoT integration
- OLED display
- ESP32 implementation

---


## 📚 Conclusion

This project strengthened my understanding of embedded programming, digital input processing, hardware interfacing, and debugging. It also provided practical experience integrating multiple hardware components into a single Arduino application.
