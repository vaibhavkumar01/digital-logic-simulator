#pragma once

#include <cstddef>
#include <vector>

/**
 * @brief Abstract base class representing a digital logic gate.
 *
 * Provides common input/output functionality for all logic gates.
 */
class Gate
{
  public:
    /**
     * @brief Constructs a gate with the specified number of inputs.
     *
     * @param inputCount Number of inputs.
     */
    Gate(std::size_t inputCount);

    /**
     * @brief Sets the value of a specific input.
     *
     * Input indexing is 1-based.
     *
     * @param index Input number.
     * @param value Logical value to assign.
     */
    void setInput(std::size_t index, bool value);

    /**
     * @brief Returns the value of a specific input.
     *
     * Input indexing is 1-based.
     *
     * @param index Input number.
     * @return Current input value.
     */
    bool getInput(std::size_t index) const;

    /**
     * @brief Returns the number of inputs of the gate.
     *
     * @return Number of inputs.
     */
    std::size_t getInputCount() const;

    /**
     * @brief Returns the current output value.
     *
     * @return Logical output value.
     */
    bool getOutput() const;

    /**
     * @brief Evaluates the gate.
     *
     * Derived gate classes implement their own logic.
     */
    virtual void evaluate() = 0;

  protected:
    // Stores the logical values of the gate inputs.
    std::vector<bool> inputs;

    // Stores the current output value.
    bool output{false};
};