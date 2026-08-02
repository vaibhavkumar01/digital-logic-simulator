#include "Gate.h"
#include <cassert>

Gate::Gate(std::size_t inputCount) : inputs(inputCount, false), output(false) {}

std::size_t Gate::getInputCount() const
{
    return inputs.size();
}

void Gate::setInput(std::size_t index, bool value)
{
    assert(index > 0 && index <= inputs.size());

    inputs[index - 1] = value;
}

bool Gate::getOutput() const
{
    return output;
}