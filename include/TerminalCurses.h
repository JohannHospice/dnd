//
// Created by karibukai on 27/12/17.
//

#ifndef DND_TERMINALCURSES_H
#define DND_TERMINALCURSES_H


#include <Terminal.h>

class TerminalCurses : public Terminal {
public:
    TerminalCurses();

    void init() override;

    void close() override;
};


#endif //DND_TERMINALCURSES_H
