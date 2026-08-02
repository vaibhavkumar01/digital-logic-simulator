#pragma once

#include "Gate.h"

class NandGate : public Gate
{
  public:
    explicit NandGate(std::size_t inputCount);

    void evaluate() override;
};