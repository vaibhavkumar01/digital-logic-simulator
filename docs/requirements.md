# Digital Logic Simulator (Version 1.0)

## 1. Problem Statement
Students often understand digital logic theoretically but have limited opportunities to explore how circuits behave interactively while also learning software engineering. This project aims to build a modular Digital Logic Simulator in modern C++ that enables users to create and simulate digital circuits while serving as a portfolio-quality demonstration of software design and digital electronics concepts.

## 2. Target Users
* ECE students
* Professors
* Recruiters
* Developers reading the GitHub repository
* Myself six months later

## 3. Project Goals

#### Primary Goals
1. Simulate combinational logic circuits.
2. Provide accurate logical outputs.
3. Be modular and extensible.
4. Demonstrate modern C++ design.

#### Secondary Goals
1. GUI
2. Circuit saving/loading
3. Timing simulation
4. Custom gates

## 4. Learning Goals

1. Improve modern C++
2. Learn graph algorithms
3. Practice software architecture
4. Understand digital circuit simulation




## 5. Project Scope
#### In Scope

* Basic logic gates
* Wire connections
* Circuit simulation
* Truth table generation
* Unit tests
* Documentation

#### Out of Scope
* FPGA synthesis
* Verilog support
* Analog simulation
* PCB design
* HDL compiler


## 6. Functional Requirements

Following are the functional requirements of this project:

1. The system shall allow users to create logic gates.
2. The system shall connect outputs to inputs using wires.
3. The system shall simulate combinational circuits.
4. The system shall display the logical output (0 or 1) of every output pin after circuit evaluation.
5. The system shall prevent Output → Output connections.
6. The system shall prevent Input → Input connections.
7. The system shall prevent multiple outputs driving the same input.
8. The system shall detect combinational feedback loops before simulation.
9. The system shall generate truth tables.


## 7. Non-Functional Requirements

Following are the non-functional requirements of this project:

1. Performance: Support at least 1000 gates.
2. Maintainability: A new gate type should be implementable without modifying existing gate classes.
3. Portability: Build on Windows and Linux.
4. Reliability: Invalid user operations shall produce meaningful error messages instead of terminating the program unexpectedly.
5. Usability: Simple command-line interface initially.
6. Documentation: Every public class documented.


## 8. Constraints

### Technical Constraints
- C++17 or newer
- Standard Library only
- No external simulation libraries

### Development Constraints
- 1–2 hours/day
- Single developer
- Use CMake
- Use Git


## \## 9. Success Criteria

How do we know Version 1.0 is complete?

1. All seven basic logic gates implemented.
2. Users can create and connect circuits.
3. Simulator correctly evaluates combinational circuits.
4. The simulator shall produce outputs matching the expected truth table for all supported gates and circuits.
5. At least 20 automated unit tests pass.
6. Project builds with CMake on a clean machine.
7. README enables another developer to build and run the project.

## 10. Assumptions

* Logic values are binary (0 and 1).
* Gates have zero propagation delay.
* Circuits are deterministic.
* The simulator models digital logic only.


## 11. Risks

* GUI implementation may require additional learning.
* Graph-based evaluation may become complex.
* Scope creep.
* Limited development time.


## 12. Design Principles

* Separation of Concerns
* SOLID Principles
* Modularity
* Extensibility
* Testability
* Readability


## 13. Version 1.0 Definition

Version 1.0 will include:

* Command-line interface
* Seven basic gates
* Circuit graph
* Signal simulation
* Truth table generation
* Unit tests
* Documentation

It will not include:

* GUI
* Sequential logic
* Propagation delay
* Plugins


## 14. Revision History

**| Version  |    Date     |        Changes       |**

**|----------|-------------|----------------------|**

**| 1.0      | 18 Jul 2026 | Initial requirements |**