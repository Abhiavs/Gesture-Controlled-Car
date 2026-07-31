# 🚗 Gesture Controlled Car

A wireless Gesture Controlled Car built using Arduino that allows the user to control the movement of the vehicle through simple hand gestures. to detect hand orientation and transmits commands wirelessly to the car, enabling intuitive real-time control without the need for a traditional remote controller.

---

## 📌 Features

- ✋ Hand gesture-based control
- 📡 Wireless communication between transmitter and receiver
- ⬆️ Forward movement
- ⬇️ Backward movement
- ⬅️ Left turn
- ➡️ Right turn
- ⏹️ Stop functionality
- ⚡ Real-time response
- 🔋 Battery-powered portable system

---

## 🛠️ Components Used

- Arduino Uno
- Wireless Communication Module (HC-05 / NRF24L01 / RF Module)
- L298N Motor Driver
- DC Geared Motors
- Robot Chassis
- Wheels
- Battery Pack
- Jumper Wires

---

## ⚙️ Working Principle

The gesture controller consists of an Arduino connected to an accelerometer sensor. When the user tilts their hand, the sensor measures the change in orientation along different axes.

The Arduino processes these values and converts them into movement commands such as Forward, Backward, Left, Right, or Stop. These commands are transmitted wirelessly to another Arduino mounted on the robot.

The receiving Arduino interprets the command and controls the motors using the L298N motor driver, allowing the robot to move according to the user's hand gestures.

---

## 🚀 Applications

- Robotics
- Industrial Automation
- Military Robots
- Wheelchair Control Systems
- Educational Robotics
- Gesture-Based Human Machine Interface
- Research Projects

---

## 💻 Technologies Used

- Arduino IDE
- Embedded C/C++
- Wireless Communication
- Motor Control
- Embedded Systems

---

## 📂 Project Structure

```text
Gesture-Controlled-Car/
│
├── transmitter/
│   └── Transmitter.ino          # Arduino code for gesture transmitter
│
├── receiver/
│   └── Receiver.ino             # Arduino code for car receiver
│
├── images/
│   ├── circuit_diagram.png      # Circuit connections
│   └── robot.jpg                # Project image
│
├── README.md                    # Project documentation
└── LICENSE                      # MIT License
```

```

```
## 📂 Project Images

https://github.com/Abhiavs/Gesture-Controlled-Car/blob/main/Receiver%20and%20Transmitter.jpg?raw=true

https://github.com/Abhiavs/Gesture-Controlled-Car/blob/main/Transmitter%20Circuit%20.png?raw=true

https://github.com/Abhiavs/Gesture-Controlled-Car/blob/main/Receiver%20Circuit%20.png?raw=true

---

## 🔮 Future Improvements

- ESP32-based Wi-Fi control
- Mobile Application Integration
- Machine Learning Gesture Recognition
- Obstacle Detection
- Camera Streaming
- Voice + Gesture Hybrid Control
- Longer Communication Range

---

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

- Embedded Systems
- Arduino Programming
- Sensor Interfacing
- Wireless Communication
- Motor Driver Control
- Circuit Design
- Debugging Hardware and Software
- Problem Solving

---

## 👨‍💻 Author

**Abhilaash VS**

Electronics and Communication Engineering (ECE)

GitHub: https://github.com/Abhiavs


---

## ⭐ If you like this project, don't forget to star the repository.
