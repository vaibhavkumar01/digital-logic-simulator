#include "XnorGate.h"

XnorGate::XnorGate(std::size_t inputCount) : Gate(inputCount) {}

void XnorGate::evaluate()
{
    int highCount = 0;

    for (bool input : inputs)
    {
        if (input)
        {
            highCount++;
        }
    }

    output = (highCount % 2 == 0);
}