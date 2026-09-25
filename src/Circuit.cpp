#include "Circuit.h"

#include <cassert>
#include <stdexcept>
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

// Checks whether the gate is owned by this circuit.
bool Circuit::containsGate(const Gate* gate) const
{
    for (const auto& currentGate : gates)
    {
        if (currentGate.get() == gate)
        {
            return true;
        }
    }

    return false;
}

// Checks whether the specified destination gate input is already connected to another wire.
bool Circuit::isInputConnected(const Gate* destination, std::size_t destinationInput) const
{
    for (const auto& wire : wires)
    {
        if (wire->getDestination() == destination &&
            wire->getDestinationInput() == destinationInput)
        {
            return true;
        }
    }

    return false;
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
    if (!containsGate(source))
    {
        throw std::invalid_argument("Source gate does not belong to this circuit.");
    }

    if (!containsGate(destination))
    {
        throw std::invalid_argument("Destination gate does not belong to this circuit.");
    }

    if (destinationInput == 0 || destinationInput > destination->getInputCount())
    {
        throw std::invalid_argument("Destination input number is out of range.");
    }

    if (isInputConnected(destination, destinationInput))
    {
        throw std::invalid_argument("Destination input is already connected.");
    }

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