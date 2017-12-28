#ifndef DND_TERMINALGNOME_H
#define DND_TERMINALGNOME_H

#include "Terminal.h"

class TerminalGnome : public Terminal {
public:
    TerminalGnome();

    void init() override;

    void close() override;
};


#endif //DND_TERMINALGNOME_H
