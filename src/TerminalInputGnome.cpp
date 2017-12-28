#include "TerminalInputGnome.h"
#include <iostream>


TerminalInputGnome::TerminalInputGnome() = default;

const int TerminalInputGnome::input() const {
    int i;
    do i = std::cin.get(); while (!isPossible(i));
    return i;
}

const int TerminalInputGnome::getUp() const {
    return 'z';
}

const int TerminalInputGnome::getDown() const {
    return 's';
}

const int TerminalInputGnome::getLeft() const {
    return 'q';
}

const int TerminalInputGnome::getRight() const {
    return 'd';
}

const int TerminalInputGnome::getEnter() const {
    return 'a';
}

const int TerminalInputGnome::getExit() const {
    return 'e';
}

const bool TerminalInputGnome::isPossible(int input) const {
    return input != 10;
}
