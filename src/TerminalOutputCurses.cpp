#include "TerminalOutputCurses.h"
#include <ncurses.h>

TerminalOutputCurses::TerminalOutputCurses() = default;

void TerminalOutputCurses::clear() const {
    refresh();
    move(0, 0);
}

void TerminalOutputCurses::print(const char *str) const {
    printw(str);
}

void TerminalOutputCurses::print(const Map &map) const {
    printw("map print not implement");
}
