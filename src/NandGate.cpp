#include "NandGate.h"

NandGate::NandGate(std::size_t inputCount) : Gate(inputCount) {}

void NandGate::evaluate()
{
    output = true;

    for (bool input : inputs)
    {
        if (!input)
        {
            output = true;
            return;
        }
    }

    output = false;
}