#include "NotGate.h"

NotGate::NotGate() : Gate(1) {}

void NotGate::evaluate()
{
    output = !inputs[0];
}