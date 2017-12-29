#include "TerminalOutputGnome.h"
#include <iostream>
#include "Stage.h"

TerminalOutputGnome::TerminalOutputGnome() = default;

void TerminalOutputGnome::clear() const {
    std::cout << "============" << std::endl;
}

void TerminalOutputGnome::print(const char *str) const {
    std::cout << str;
}

void TerminalOutputGnome::print(const Map &map) const {
    for (int y = 0; y < map.getSizeY(); ++y) {
        for (int x = 0; x < map.getSizeX(); ++x) {
            std::cout << map.getCase(x, y)->getChar() << " ";
        }
        std::cout << std::endl;
    }
}