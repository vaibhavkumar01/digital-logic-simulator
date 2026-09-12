#include "Circuit.h"

#include <cassert>
#include <utility>

// Functions for Gate management
void Circuit::addGate(std::unique_ptr<Gate> gate)
{
    assert(gate != nullptr);
    gates.push_back(std::move(gate));
}

void Circuit::removeGate(std::size_t index)
{
    assert(index < gates.size());
    gates.erase(gates.begin() + index);
}

Gate* Circuit::getGate(std::size_t index)
{
    assert(index < gates.size());
    return gates[index].get();
}

std::size_t Circuit::getGateCount() const
{
    return gates.size();
}

// Functions for Wire management
void Circuit::addWire(std::unique_ptr<Wire> wire)
{
    assert(wire != nullptr);
    wires.push_back(std::move(wire));
}

void Circuit::removeWire(std::size_t index)
{
    assert(index < wires.size());
    wires.erase(wires.begin() + index);
}

void Circuit::connect(Gate* source, Gate* destination, std::size_t destinationInput)
{
    auto wire = std::make_unique<Wire>(source, destination, destinationInput);
    addWire(std::move(wire));
}

Wire* Circuit::getWire(std::size_t index)
{
    assert(index < wires.size());
    return wires[index].get();
}

std::size_t Circuit::getWireCount() const
{
    return wires.size();
}