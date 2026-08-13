#include "AndGate.h"
#include "Circuit.h"
#include "NandGate.h"
#include "NorGate.h"
#include "NotGate.h"
#include "OrGate.h"
#include "TruthTableGenerator.h"
#include "XnorGate.h"
#include "XorGate.h"

#include <iostream>
#include <memory>

int main()
{
    std::cout << "Welcome to Digital Logic Simulator.\n\n";

    std::cout << "========== AND Gate ==========\n\n";
    AndGate andGate2(2);
    TruthTableGenerator::print(andGate2);

    std::cout << "\n========== 3-Input AND Gate ==========\n\n";
    AndGate andGate3(3);
    TruthTableGenerator::print(andGate3);

    std::cout << "\n========== OR Gate ==========\n\n";
    OrGate orGate(2);
    TruthTableGenerator::print(orGate);

    std::cout << "\n========== NOT Gate ==========\n\n";
    NotGate notGate;
    TruthTableGenerator::print(notGate);

    std::cout << "\n========== NAND Gate ==========\n\n";
    NandGate nandGate(2);
    TruthTableGenerator::print(nandGate);

    std::cout << "\n========== NOR Gate ==========\n\n";
    NorGate norGate(2);
    TruthTableGenerator::print(norGate);

    std::cout << "\n========== XOR Gate ==========\n\n";
    XorGate xorGate(2);
    TruthTableGenerator::print(xorGate);

    std::cout << "\n========== XNOR Gate ==========\n\n";
    XnorGate xnorGate(2);
    TruthTableGenerator::print(xnorGate);

    std::cout << "\n========== Circuit Test ==========\n\n";

    Circuit circuit;

    circuit.addGate(std::make_unique<AndGate>(2));
    circuit.addGate(std::make_unique<OrGate>(2));

    std::cout << "Gate count: " << circuit.getGateCount() << '\n';

    circuit.getGate(0)->setInput(1, true);
    circuit.getGate(0)->setInput(2, true);
    circuit.getGate(0)->evaluate();

    std::cout << "AND output: " << circuit.getGate(0)->getOutput() << '\n';

    circuit.getGate(1)->setInput(1, false);
    circuit.getGate(1)->setInput(2, true);
    circuit.getGate(1)->evaluate();

    std::cout << "OR output: " << circuit.getGate(1)->getOutput() << '\n';

    circuit.removeGate(0);

    std::cout << "Gate count after removal: " << circuit.getGateCount() << '\n';

    return 0;
}