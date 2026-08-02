#include "NorGate.h"

NorGate::NorGate(std::size_t inputCount) : Gate(inputCount) {}

void NorGate::evaluate()
{
    output = true;

    for (bool input : inputs)
    {
        if (input)
        {
            output = false;
            return;
        }
    }
}