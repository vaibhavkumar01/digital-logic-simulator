#pragma once

#include <cstddef>
#include <vector>

class Gate
{
  public:
    Gate(std::size_t inputCount);

    void setInput(std::size_t index, bool value);
    bool getOutput() const;

    virtual void evaluate() = 0;

  protected:
    std::vector<bool> inputs;
    bool output{false};
};