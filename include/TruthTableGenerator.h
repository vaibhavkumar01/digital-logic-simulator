#pragma once

#include "Gate.h"

class TruthTableGenerator
{
  public:
    static void print(Gate& gate); // static because this class has no state.
};