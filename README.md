# 🏠 Home Automation via Bluetooth using Arduino

## 📌 Project Overview

The Home Automation via Bluetooth project is an Arduino-based embedded systems application that enables wireless control of household appliances using Bluetooth communication. In this project, LEDs are used to represent home appliances such as lights or fans.

The Arduino receives Bluetooth commands from a mobile device (or Serial Monitor in Tinkercad simulation) and switches the corresponding appliances ON or OFF based on the received commands.

This project demonstrates wireless communication, digital output control, and basic home automation concepts using Arduino.

---

# 🎯 Objectives

- Control home appliances wirelessly.
- Learn Bluetooth communication with Arduino.
- Simulate home automation using LEDs.
- Understand digital output control.
- Gain practical experience in embedded systems.

---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Breadboard | 1 |
| Red LED | 1 |
| Green LED | 1 |
| Yellow LED | 1 |
| 220Ω Resistors | 3 |
| Jumper Wires | As Required |
| HC-05 Bluetooth Module *(used in hardware implementation)* | 1 |
| USB Cable (Simulation) | 1 |

> **Note:** In the Tinkercad simulation, Bluetooth commands are provided through the **Serial Monitor**, while in a real hardware setup an **HC-05 Bluetooth module** can be used.

---

# ⚙ Working Principle

The Arduino continuously waits for incoming Bluetooth commands.

When a command is received from the Bluetooth-connected mobile application (or Serial Monitor during simulation), the Arduino interprets the command and controls the corresponding LED.

Each LED represents a household appliance.

Example operations include:

- Turn ON Appliance 1
- Turn OFF Appliance 1
- Turn ON Appliance 2
- Turn OFF Appliance 2
- Turn ON Appliance 3
- Turn OFF Appliance 3

The LEDs instantly reflect the command received, demonstrating wireless appliance control.

---

# ✨ Features

- Wireless appliance control
- Bluetooth communication
- Controls multiple appliances
- LED-based appliance simulation
- Arduino Uno implementation
- Beginner-friendly project
- Tinkercad simulation compatible

---


# ▶ How to Run

1. Open the circuit in Tinkercad.
2. Connect all components according to the circuit diagram.
3. Upload the Arduino program.
4. Start the simulation.
5. Open the Serial Monitor.
6. Send the predefined control commands.
7. Observe the LEDs turning ON and OFF according to the commands.

---

# 📊 System Workflow

Bluetooth Command
⬇
Arduino Receives Command
⬇
Process Input
⬇
Identify Appliance
⬇
Switch LED ON/OFF
⬇
Display Updated Appliance Status

---

# 🌍 Applications

- Smart Home Automation
- Wireless Lighting Control
- Home Appliance Control
- IoT Learning Projects
- Embedded Systems Education
- Arduino Practice Projects

---

# 🚀 Future Improvements

- Integrate an HC-05 Bluetooth module for real hardware communication.
- Control appliances using an Android mobile application.
- Add relay modules to control actual AC appliances.
- Include voice control through Google Assistant.
- Monitor appliance status using IoT platforms.
- Add password-protected Bluetooth access for improved security.

---

# 👩‍💻 Author

**Name:** Kalpana Devi A

**Intern ID:** CITS2602

---

# 📄 License

This project is developed for educational and internship purposes.
