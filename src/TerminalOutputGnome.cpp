#include "TerminalOutputGnome.h"
#include <iostream>
#include "Stage.h"
#include "VisitorCaseIsWall.h"

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

bool contain(const std::vector<const Case &> &v, const Case &o) {
    for (Case a: v)
        if (&a == &o)
            return true;
    return false;
}

const int DIR_LENGTH = 8;
const int DIR_X[DIR_LENGTH] = {0, 0, 1, -1, 1, -1, 1, -1};
const int DIR_Y[DIR_LENGTH] = {1, -1, 0, 0, 1, -1, -1, 1};

template<class T>
std::vector<const Case &> propagate(std::vector<const Case &> visited, const Map &map, int i, int j) {
    if (map.inBound(i, j)) {
        Case *c = map.getCase(i, j);
        if (c->accept(VisitorCaseIsWall()) || !contain(visited, *c)) {
            visited.push_back(*c);
            for (int k = 0; k < DIR_LENGTH; ++k)
                propagate(visited, map, DIR_X[k], DIR_Y[k]);
        }
    }
    return visited;
}

