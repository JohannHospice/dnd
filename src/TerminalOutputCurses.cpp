#include "TerminalOutputCurses.h"
#include "Map.h"
#include <ncurses.h>
#include "Stage.h"

TerminalOutputCurses::TerminalOutputCurses() = default;

void TerminalOutputCurses::clear() const {
    refresh();
    move(0, 0);
}

void TerminalOutputCurses::print(const char *str) const {
    printw(str);
}

void TerminalOutputCurses::print(const Map &map) const {
    for (int y = 0; y < map.getSizeY(); ++y) {
        for (int x = 0; x < map.getSizeX(); ++x) {
            printw(new char[2]{map.getCase(x, y)->getChar(), ' '});
        }
        printw("\n");
    }
}
