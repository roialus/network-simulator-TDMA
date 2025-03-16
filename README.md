# 🚀 Network Simulator using TDMA & TCP/UDP  
### A Large-Scale Simulation for Sensor Networks  

![GitHub repo](https://img.shields.io/github/stars/your-username/network-simulator?style=social)
![GitHub contributors](https://img.shields.io/github/contributors/your-username/network-simulator)
![GitHub last commit](https://img.shields.io/github/last-commit/your-username/network-simulator)
![GitHub issues](https://img.shields.io/github/issues/your-username/network-simulator)

---

## 📖 Overview  
This project is a **scalable network simulator** that models communication between thousands of **wireless sensors** using **TDMA (Time Division Multiple Access)** and **TCP/UDP protocols**. The goal is to ensure **efficient, collision-free data transmission** while handling **packet loss, out-of-order arrivals, and acknowledgments (ACKs)**.

### **Key Features**
✅ **TDMA Slot Assignment** – Sensors receive unique slots from the sink to avoid collisions.  
✅ **Reliable Data Transmission** – Uses TCP/UDP for communication.  
✅ **Handling Out-of-Order Packets** – Buffers and sorts data before processing.  
✅ **Optional ACK Mechanism** – Ensures message delivery and retransmissions if needed.  
✅ **Scalability** – Supports thousands of sensors communicating with a single sink.  

---

## 📂 Project Structure
📦 network-simulator
┣ 📂 src/ # Source code (C++ implementation)
┃ ┣ 📜 main.cpp # Main simulation loop
┃ ┣ 📜 Sensor.cpp # Sensor node logic
┃ ┣ 📜 Sink.cpp # Central sink for data aggregation
┃ ┗ 📜 Event.cpp # Event-driven architecture
┣ 📂 include/ # Header files
┣ 📂 docs/ # Documentation and design details
┣ 📂 tests/ # Unit tests and validation
┣ 📜 README.md # This file
┣ 📜 .gitignore # Ignore unnecessary files
┗ 📜 CMakeLists.txt # Build system for C++

---

## 🛠️ Installation & Usage  

### **🔹 Prerequisites**
- **C++ Compiler** (GCC/Clang/MSVC)  
- **CMake** (for building the project)  

### **🔹 Build & Run**  
```bash
git clone https://github.com/your-username/network-simulator.git
cd network-simulator
mkdir build && cd build
cmake ..
make
./network_simulator

🔬 Simulation Details
🔹 How It Works
Initialization:

The sink assigns time slots to each sensor.
Each sensor generates random sequential packet numbers and starts measurements.
Sensor Transmission:

Waits for its time slot and then transmits data.
Sends packet ID, measurement, and timestamp.
Sink Processing:

Buffers incoming packets.
Sorts them by sequence number and timestamp.
Optionally sends ACKs for lost packets.
🔹 Example Simulation Output
yaml
Copy
Edit
[Time 0.1s] Sensor 1 -> Sink | Packet ID: 1001, Measurement: 23.5°C  
[Time 0.2s] Sensor 2 -> Sink | Packet ID: 1002, Measurement: 22.8°C  
[Time 0.3s] Sensor 3 -> Sink | Packet ID: 1003, Measurement: 24.1°C  
[Time 0.4s] Sink Sorting and Storing Data...  
🎯 Future Enhancements
🚀 Dynamic Slot Assignment – Adjust slots based on network conditions.
📡 Multi-Hop Communication – Support sensor-to-sensor relays.
📊 Performance Analytics – Add visualization for packet delays and loss.

