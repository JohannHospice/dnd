//
// Created by karibukai on 27/12/17.
//

#ifndef DND_TERMINALINPUTGNOME_H
#define DND_TERMINALINPUTGNOME_H


#include "TerminalInput.h"

class TerminalInputGnome : public TerminalInput {
public:
    TerminalInputGnome();

    const int input() const override;

    const int getUp() const override;

    const int getDown() const override;

    const int getLeft() const override;

    const int getRight() const override;

    const int getEnter() const override;

    const int getExit() const override;

private:
    const bool isPossible(int input) const;
};


#endif //DND_TERMINALINPUTGNOME_H
