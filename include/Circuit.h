#pragma once

#include "Gate.h"

#include <cstddef>
#include <memory>
#include <vector>

class Circuit
{
  public:
    void addGate(std::unique_ptr<Gate> gate);

    void removeGate(std::size_t index);

    Gate* getGate(std::size_t index);

    std::size_t getGateCount() const;

  private:
    std::vector<std::unique_ptr<Gate>> gates;
};