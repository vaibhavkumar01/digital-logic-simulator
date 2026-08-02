#pragma once

#include "Gate.h"

class XorGate : public Gate
{
  public:
    explicit XorGate(std::size_t inputCount);

    void evaluate() override;
};