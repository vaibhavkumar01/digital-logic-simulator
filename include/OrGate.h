#pragma once

#include "Gate.h"

class OrGate : public Gate
{
  public:
    explicit OrGate(std::size_t inputCount);

    void evaluate() override;
};