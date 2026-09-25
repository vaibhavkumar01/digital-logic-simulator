#pragma once

#include "Gate.h"

#include <cstddef>

/**
 * @brief Represents a connection between two gates.
 *
 * A Wire transfers the output signal of a source gate
 * to a specific input of a destination gate.
 *
 * Wire does not own either gate. Gate lifetime is managed
 * by the Circuit.
 */
class Wire
{
  public:
    /**
     * @brief Creates a connection between two gates.
     *
     * @param source Gate whose output provides the signal.
     * @param destination Gate receiving the signal.
     * @param destinationInput Input number of the destination gate.
     */
    Wire(Gate* source, Gate* destination, std::size_t destinationInput);

    /**
     * @brief Propagates the source gate's output to the destination input.
     */
    void propagate();

    Gate* getSource() const;
    Gate* getDestination() const;
    std::size_t getDestinationInput() const;

  private:
    // Non-owning pointer to the gate providing the signal.
    Gate* source;

    // Non-owning pointer to the gate receiving the signal.
    Gate* destination;

    // 1-based input index on the destination gate.
    std::size_t destinationInput;
};