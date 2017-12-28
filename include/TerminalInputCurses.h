#ifndef DND_TERMINALINPUTCURSES_H
#define DND_TERMINALINPUTCURSES_H

#include <TerminalInput.h>

class TerminalInputCurses : public TerminalInput {
public:
    const int getUp() const override;

    const int getDown() const override;

    const int getLeft() const override;

    const int getRight() const override;

    const int getEnter() const override;

    const int getExit() const override;

    const int input() const override;

};


#endif //DND_TERMINALINPUTCURSES_H
