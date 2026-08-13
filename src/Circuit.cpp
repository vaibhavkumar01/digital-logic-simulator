#include "Circuit.h"

#include <cassert>
#include <utility>

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