#include "AndGate.h"

AndGate::AndGate(std::size_t inputCount) : Gate(inputCount) {}

void AndGate::evaluate()
{
    output = true;
    for (bool input : inputs)
    {
        if (!input)
        {
            output = false;
            break;
        }
    }
}