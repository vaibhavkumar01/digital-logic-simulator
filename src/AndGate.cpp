#include "AndGate.h"

AndGate::AndGate(std::size_t inputCount) : Gate(inputCount) {}

void AndGate::evaluate()
{
    output = 1;
    for (bool input : inputs)
    {
        if (!input)
        {
            output = 0;
            break;
        }
    }
}