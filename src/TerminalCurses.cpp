#include "TerminalCurses.h"
#include <TerminalInputCurses.h>
#include <TerminalOutputCurses.h>

#include "curses.h"

void TerminalCurses::init() {
    initscr();
    start_color();
    keypad(stdscr, TRUE);
    (void) nonl();
    (void) cbreak();
    (void) echo();
    timeout(-1);
}

void TerminalCurses::close() {
    endwin();
}

TerminalCurses::TerminalCurses() {
    _input = new TerminalInputCurses();
    _output = new TerminalOutputCurses();
}
