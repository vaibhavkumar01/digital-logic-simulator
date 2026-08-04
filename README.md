# Digital Logic Simulator

A modular Digital Logic Simulator written in modern C++ that simulates digital logic gates and serves as a portfolio-quality software engineering project.

> **Status:** 🚧 Under Development

---

## Overview

Digital Logic Simulator is a project built to deepen my understanding of:

- Modern C++
- Object-Oriented Programming
- Digital Electronics
- Software Architecture
- Graph Algorithms
- Simulation Systems

The project is being developed incrementally, following professional software engineering practices including requirements engineering, modular design, version control, and clean architecture.

---

## Current Features

### Implemented

- Seven basic logic gates
  - AND
  - OR
  - NOT
  - NAND
  - NOR
  - XOR
  - XNOR

- Generic N-input gate support

- Abstract `Gate` base class

- Automatic truth table generation

- Modern CMake build system

- Cross-platform project structure (Windows/Linux)

---

## Planned Features

### Circuit Construction

- Add gates to a circuit
- Connect gates using wires
- Validate connections

### Simulation Engine

- Signal propagation
- Combinational circuit evaluation
- Cycle detection

### Advanced Features

- Sequential circuits
- Clock simulation
- Flip-Flops
- Registers
- Timing simulation
- Circuit serialization
- GUI
- Drag-and-drop circuit editor

---

## Project Structure

```
DigitalLogicSimulator/
│
├── include/
│   ├── Gate.h
│   ├── AndGate.h
│   ├── OrGate.h
│   ├── NotGate.h
│   ├── NandGate.h
│   ├── NorGate.h
│   ├── XorGate.h
│   ├── XnorGate.h
│   └── TruthTableGenerator.h
│
├── src/
│   ├── Gate.cpp
│   ├── AndGate.cpp
│   ├── OrGate.cpp
│   ├── NotGate.cpp
│   ├── NandGate.cpp
│   ├── NorGate.cpp
│   ├── XorGate.cpp
│   ├── XnorGate.cpp
│   ├── TruthTableGenerator.cpp
│   └── main.cpp
│
├── docs/
│
├── CMakeLists.txt
├── README.md
└── LICENSE
```

---

## Technologies Used

- C++17
- CMake
- Git
- VS Code
- MSYS2 / MinGW-w64

---

## Build Instructions

### Clone the Repository

```bash
git clone https://github.com/vaibhavkumar01/DigitalLogicSimulator.git

cd DigitalLogicSimulator
```

### Configure

```bash
cmake -S . -B build -G "MinGW Makefiles"
```

### Build

```bash
cmake --build build
```

### Run

```bash
./build/DigitalLogicSimulator.exe
```

---

## Example Output

### AND Gate

```
0 0 | 0
0 1 | 0
1 0 | 0
1 1 | 1
```

### OR Gate

```
0 0 | 0
0 1 | 1
1 0 | 1
1 1 | 1
```

### XOR Gate

```
0 0 | 0
0 1 | 1
1 0 | 1
1 1 | 0
```

---

## Design Principles

This project follows several software engineering principles:

- Separation of Concerns
- SOLID Principles
- Modularity
- Extensibility
- Readability
- Testability

---

## Learning Objectives

This project is designed to improve my understanding of:

- Object-Oriented Design
- Modern C++
- Polymorphism
- Memory Management
- Digital Logic Simulation
- Graph-based Algorithms
- Software Architecture

---

## Roadmap

- [x] Project setup
- [x] Requirements engineering
- [x] CMake build system
- [x] Abstract Gate interface
- [x] Seven basic logic gates
- [x] Truth table generator
- [ ] Circuit class
- [ ] Wire class
- [ ] Simulation engine
- [ ] Cycle detection
- [ ] Composite circuits
- [ ] Sequential logic
- [ ] Unit testing
- [ ] GUI
- [ ] Circuit serialization

---

## Future Improvements

- Graphical user interface
- Drag-and-drop circuit editor
- Timing analysis
- Save and load circuits
- Waveform viewer
- Custom gate support
- Performance optimizations

---

## License

This project is licensed under the MIT License.