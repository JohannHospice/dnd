#ifndef DND_TERMINALOUTPUTCURSES_H
#define DND_TERMINALOUTPUTCURSES_H

#include "TerminalOutput.h"

class TerminalOutputCurses : public TerminalOutput {
public:
    TerminalOutputCurses();

    void clear() const override;

    void print(const Map &map) const override;

    void print(const char *) const override;
};

#endif //DND_TERMINALOUTPUTCURSES_H
