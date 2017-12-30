#include "TerminalInputCurses.h"
#include <curses.h>

const int TerminalInputCurses::input() const {
    return getch();
}

const int TerminalInputCurses::getUp() const {
    return KEY_UP;
}

const int TerminalInputCurses::getDown() const {
    return KEY_DOWN;
}

const int TerminalInputCurses::getLeft() const {
    return KEY_LEFT;
}

const int TerminalInputCurses::getRight() const {
    return KEY_RIGHT;
}

const int TerminalInputCurses::getEnter() const {
    return KEY_ENTER;
}

const int TerminalInputCurses::getExit() const {
    return KEY_EXIT;
}
