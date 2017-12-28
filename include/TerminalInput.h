//
// Created by karibukai on 27/12/17.
//

#ifndef DND_TERMINALINPUT_H
#define DND_TERMINALINPUT_H


class TerminalInput {
public:
    virtual const int getUp() const = 0;

    virtual const int getDown() const = 0;

    virtual const int getLeft() const = 0;

    virtual const int getRight() const = 0;

    virtual const int getEnter() const = 0;

    virtual const int getExit() const = 0;

    virtual const int input() const = 0;
};


#endif //DND_TERMINALINPUT_H
