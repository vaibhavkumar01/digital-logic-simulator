#include "AndGate.h"
#include "Gate.h"
#include <iostream>

int main()
{
    std::cout << "Welcome to Digital Logic Simulator" << std::endl;
    bool ans;
    AndGate and_gate_2_pin(2);

    and_gate_2_pin.setInput(1, 0);
    and_gate_2_pin.setInput(2, 0);
    and_gate_2_pin.evaluate();
    ans = and_gate_2_pin.getOutput();
    std::cout << ans;

    and_gate_2_pin.setInput(1, 0);
    and_gate_2_pin.setInput(2, 1);
    and_gate_2_pin.evaluate();
    ans = and_gate_2_pin.getOutput();
    std::cout << ans;

    and_gate_2_pin.setInput(1, 1);
    and_gate_2_pin.setInput(2, 0);
    and_gate_2_pin.evaluate();
    ans = and_gate_2_pin.getOutput();
    std::cout << ans;

    and_gate_2_pin.setInput(1, 1);
    and_gate_2_pin.setInput(2, 1);
    and_gate_2_pin.evaluate();
    ans = and_gate_2_pin.getOutput();
    std::cout << ans;

    AndGate and_gate_3_pin(3);

    and_gate_3_pin.setInput(1, 0);
    and_gate_3_pin.setInput(2, 0);
    and_gate_3_pin.setInput(3, 0);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 0);
    and_gate_3_pin.setInput(2, 0);
    and_gate_3_pin.setInput(3, 1);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 0);
    and_gate_3_pin.setInput(2, 1);
    and_gate_3_pin.setInput(3, 0);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 0);
    and_gate_3_pin.setInput(2, 1);
    and_gate_3_pin.setInput(3, 1);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 1);
    and_gate_3_pin.setInput(2, 0);
    and_gate_3_pin.setInput(3, 0);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 1);
    and_gate_3_pin.setInput(2, 0);
    and_gate_3_pin.setInput(3, 1);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 1);
    and_gate_3_pin.setInput(2, 1);
    and_gate_3_pin.setInput(3, 0);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    and_gate_3_pin.setInput(1, 1);
    and_gate_3_pin.setInput(2, 1);
    and_gate_3_pin.setInput(3, 1);
    and_gate_3_pin.evaluate();
    ans = and_gate_3_pin.getOutput();
    std::cout << ans;

    return 0;
}