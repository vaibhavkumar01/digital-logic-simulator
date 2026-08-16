#include "Gate.h"

#include <cassert>

Gate::Gate(std::size_t inputCount) : inputs(inputCount, false), output(false) {}

void Gate::setInput(std::size_t index, bool value)
{
    // Input indexing is 1-based.
    assert(index > 0 && index <= inputs.size());

    inputs[index - 1] = value;
}

bool Gate::getInput(std::size_t index) const
{
    // Input indexing is 1-based.
    assert(index > 0 && index <= inputs.size());

    return inputs[index - 1];
}

std::size_t Gate::getInputCount() const
{
    return inputs.size();
}

bool Gate::getOutput() const
{
    return output;
}