#pragma once

#include "Gate.h"

class XnorGate : public Gate
{
  public:
    explicit XnorGate(std::size_t inputCount);

    void evaluate() override;
};