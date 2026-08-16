#include "Wire.h"

Wire::Wire(Gate* source, Gate* destination, std::size_t destinationInput)
    : source(source), destination(destination), destinationInput(destinationInput)
{
}

void Wire::propagate()
{
    // Read the output of the source gate and assign it
    // to the specified input of the destination gate.
    destination->setInput(destinationInput, source->getOutput());
}