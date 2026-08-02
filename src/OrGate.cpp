#include "OrGate.h"

OrGate::OrGate(std::size_t inputCount) : Gate(inputCount) {}

void OrGate::evaluate()
{
    output = false;

    for (bool input : inputs)
    {
        if (input)
        {
            output = true;
            break;
        }
    }
}