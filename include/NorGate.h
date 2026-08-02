#pragma once

#include "Gate.h"

class NorGate : public Gate
{
  public:
    explicit NorGate(std::size_t inputCount);

    void evaluate() override;
};