#include "AndGate.h"
#include "Gate.h"
#include <iostream>

void printTruthTable(Gate& gate)
{
    const std::size_t inputCount = gate.getInputCount();

    const std::size_t rows = 1ULL << inputCount;

    for (std::size_t row = 0; row < rows; row++)
    {
        for (std::size_t bit = 0; bit < inputCount; bit++)
        {
            bool value = (row >> (inputCount - 1 - bit)) & 1;

            gate.setInput(bit + 1, value);

            std::cout << value << " ";
        }

        gate.evaluate();

        std::cout << "| " << gate.getOutput() << '\n';
    }
}

int main()
{
    std::cout << "2-input AND\n\n";

    AndGate gate2(2);

    printTruthTable(gate2);

    std::cout << "\n3-input AND\n\n";

    AndGate gate3(3);

    printTruthTable(gate3);
}