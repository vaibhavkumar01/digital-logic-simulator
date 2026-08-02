#include "XorGate.h"

XorGate::XorGate(std::size_t inputCount) : Gate(inputCount) {}

void XorGate::evaluate()
{
    int highCount = 0;

    for (bool input : inputs)
    {
        if (input)
        {
            highCount++;
        }
    }

    output = (highCount % 2 == 1);
}