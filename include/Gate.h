#pragma once

#include <cstddef>
#include <vector>

class Gate
{
  public:
    explicit Gate(std::size_t inputCount);
    virtual ~Gate() = default;

    void setInput(std::size_t index, bool value);
    bool getOutput() const;

    std::size_t getInputCount() const;

    virtual void evaluate() = 0;

  protected:
    std::vector<bool> inputs;
    bool output{false};
};