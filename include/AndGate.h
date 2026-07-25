#pragma once

#include "Gate.h"

class AndGate : public Gate
{
  public:
    AndGate(std::size_t inputCount);

    void evaluate() override;
};