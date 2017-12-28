//
// Created by karibukai on 27/12/17.
//

#ifndef DND_TERMINAL_H
#define DND_TERMINAL_H

#include "TerminalInput.h"
#include "TerminalOutput.h"

class Terminal {

public:

    virtual void close() = 0;

    TerminalInput *getInput() const { return _input; }

    TerminalOutput *getOutput() const { return _output; }

    virtual void init() = 0;

protected:
    TerminalInput *_input{};
    TerminalOutput *_output{};
};

#endif //DND_TERMINAL_H
