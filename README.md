# ADAS Simulation Project (C/C++)

## Overview

This project simulates a **real‑world Advanced Driver Assistance System (ADAS)** using C/C++. It combines multiple vehicle safety features into a modular architecture to demonstrate how modern vehicles monitor driver behavior and vehicle state to improve safety.

The goal of this project is **educational and demonstrative**, focusing on software structure, logic flow, and embedded‑style design rather than hardware‑specific integration.

---

## Key Features

* **Overspeed Detection** – Monitors vehicle speed and triggers warnings when thresholds are exceeded
* **Seatbelt Monitoring** – Detects seatbelt status and issues alerts when unsafe
* **Collision Warning Logic** – Simulates proximity‑based collision alerts
* **Modular Design** – Clear separation between sensors, logic, and warning systems
* **Manual & Automatic Test Modes** – Allows controlled testing of system behavior

---

## System Architecture

```
[Sensors] → [Vehicle Logic] → [Warning System]
```

* **Sensors**: Simulated inputs (speed, seatbelt status, distance)
* **Vehicle Logic**: Core decision‑making and safety rules
* **Warning System**: User alerts based on detected risks

This structure mirrors real ADAS pipelines used in embedded automotive systems.

---

## Project Structure

```
ADA_das-project/
├── inc/                # Header files
├── src/                # Source files
│   ├── main.c
│   ├── sensor.c
│   ├── vehicle_logic.c
│   ├── seatbelt.c
│   └── warning.c
├── CMakeLists.txt
├── PROJECT_STRUCTURE.txt
└── README.md
```

---

## Build & Run

**Requirements**

* GCC / MinGW (Windows) or GCC (Linux)
* CMake

**Steps**

```bash
mkdir build
cd build
cmake ..
make
./ADAS
```

---

## Design Considerations

* Written in **C/C++** to reflect embedded and automotive environments
* Logic designed to be easily portable to microcontroller‑based ECUs
* Emphasis on readability, modularity, and safety‑oriented flow

---

## Future Improvements

* Add unit tests for safety logic
* Introduce sensor noise simulation
* Extend collision logic with time‑to‑collision (TTC)
* Align logic with **ISO 26262 functional safety concepts**

---

## Disclaimer

This project is a **software simulation** and does not interface with real vehicle hardware. It is intended for learning, demonstration, and portfolio purposes.

---

## Author

Saroj
