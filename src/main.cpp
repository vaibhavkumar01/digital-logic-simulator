#include "AndGate.h"
#include "Circuit.h"
#include "NandGate.h"
#include "NorGate.h"
#include "NotGate.h"
#include "OrGate.h"
#include "TruthTableGenerator.h"
#include "Wire.h"
#include "XnorGate.h"
#include "XorGate.h"

#include <iostream>
#include <memory>

int main()
{
    std::cout << "Welcome to Digital Logic Simulator.\n\n";

    // Basic Gate Truth Tables

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

    // Circuit Test

    std::cout << "\n========== Circuit Test ==========\n\n";

    Circuit circuit;

    // Circuit takes ownership of these gates.
    circuit.addGate(std::make_unique<AndGate>(2));
    circuit.addGate(std::make_unique<OrGate>(2));

    std::cout << "Gate count: " << circuit.getGateCount() << '\n';

    // Test the AND gate stored at index 0.
    circuit.getGate(0)->setInput(1, true);
    circuit.getGate(0)->setInput(2, true);
    circuit.getGate(0)->evaluate();

    std::cout << "AND output: " << circuit.getGate(0)->getOutput() << '\n';

    // Test the OR gate stored at index 1.
    circuit.getGate(1)->setInput(1, false);
    circuit.getGate(1)->setInput(2, true);
    circuit.getGate(1)->evaluate();

    std::cout << "OR output: " << circuit.getGate(1)->getOutput() << '\n';

    // Remove the AND gate from the circuit.
    circuit.removeGate(0);

    std::cout << "Gate count after removal: " << circuit.getGateCount() << '\n';

    // Wire Test
    std::cout << "\n========== Wire Test ==========\n\n";

    Circuit wireCircuit;

    // Create the gates using unique_ptr.
    auto wireAndGate = std::make_unique<AndGate>(2);
    auto wireOrGate = std::make_unique<OrGate>(2);

    Gate* andPtr = wireAndGate.get();
    Gate* orPtr = wireOrGate.get();

    wireCircuit.addGate(std::move(wireAndGate));
    wireCircuit.addGate(std::move(wireOrGate));

    // Create a wire and transfer ownership to the circuit.
    wireCircuit.connect(andPtr, orPtr, 1);

    std::cout << "Gate count: " << wireCircuit.getGateCount() << '\n';
    std::cout << "Wire count: " << wireCircuit.getWireCount() << '\n';

    // Test 1: AND output = 1.
    andPtr->setInput(1, true);
    andPtr->setInput(2, true);
    andPtr->evaluate();

    wireCircuit.getWire(0)->propagate();

    std::cout << "\nTest 1:\n";
    std::cout << "AND output: " << andPtr->getOutput() << '\n';
    std::cout << "OR input 1: " << orPtr->getInput(1) << '\n';

    // Test 2: AND output = 0.
    andPtr->setInput(1, true);
    andPtr->setInput(2, false);
    andPtr->evaluate();

    wireCircuit.getWire(0)->propagate();

    std::cout << "\nTest 2:\n";
    std::cout << "AND output: " << andPtr->getOutput() << '\n';
    std::cout << "OR input 1: " << orPtr->getInput(1) << '\n';

    return 0;
}