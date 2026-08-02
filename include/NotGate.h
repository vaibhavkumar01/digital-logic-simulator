#pragma once

#include "Gate.h"

class NotGate : public Gate
{
  public:
    NotGate();

    void evaluate() override;
};