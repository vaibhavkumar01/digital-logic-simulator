#pragma once

#include "Gate.h"
#include "Wire.h"

#include <cstddef>
#include <memory>
#include <vector>

class Circuit
{
  public:
    // For including Gate in the circuit
    void addGate(std::unique_ptr<Gate> gate);
    void removeGate(std::size_t index);
    Gate* getGate(std::size_t index);
    std::size_t getGateCount() const;

    // For managing wires in the circuit
    void addWire(std::unique_ptr<Wire> wire);
    void removeWire(std::size_t index);
    Wire* getWire(std::size_t index);
    std::size_t getWireCount() const;

    // For creating and storing a wire in the Circuit
    void connect(Gate* source, Gate* destination, std::size_t destinationInput);

  private:
    std::vector<std::unique_ptr<Gate>> gates;
    std::vector<std::unique_ptr<Wire>> wires;
};