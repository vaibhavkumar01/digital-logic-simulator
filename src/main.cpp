#include "AndGate.h"
#include "NandGate.h"
#include "NorGate.h"
#include "NotGate.h"
#include "OrGate.h"
#include "TruthTableGenerator.h"
#include "XnorGate.h"
#include "XorGate.h"

#include <iostream>

int main()
{
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

    return 0;
}