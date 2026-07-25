#include "Gate.h"

Gate::Gate(std::size_t inputCount) : inputs(inputCount, false), output(false) {}

void Gate::setInput(std::size_t index, bool value)
{
    if (index > 0 && index <= inputs.size())
    {
        inputs[index - 1] = value;
    }
}

bool Gate::getOutput() const
{
    return output;
}