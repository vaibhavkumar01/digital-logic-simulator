#include "TruthTableGenerator.h"

#include <iostream>

void TruthTableGenerator::print(Gate& gate)
{
    // Implementation here
    std::size_t inputCount = gate.getInputCount();
    std::size_t rows = 1ULL << inputCount;

    for (std::size_t row = 0; row < rows; row++)
    {
        for (std::size_t bit = 0; bit < inputCount; bit++)
        {
            const bool value = (row >> (inputCount - bit - 1)) & 1;
            gate.setInput(bit + 1, value);
            std::cout << value << " ";
        }
        gate.evaluate();

        std::cout << "| " << gate.getOutput();
        std::cout << '\n';
    }
}