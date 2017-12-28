#ifndef DND_TERMINALOUTPUTGNOME_H
#define DND_TERMINALOUTPUTGNOME_H

#include "TerminalOutput.h"
#include "Map.h"

class TerminalOutputGnome : public TerminalOutput {
public:
    TerminalOutputGnome();

    void clear() const override;

    void print(const char *) const override;

    void print(const Map &map) const override;
};


#endif //DND_TERMINALOUTPUTGNOME_H
