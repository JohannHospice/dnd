//
// Created by karibukai on 27/12/17.
//

#ifndef DND_TERMINALOUTPUT_H
#define DND_TERMINALOUTPUT_H

class Map;
class TerminalOutput {
public:
    virtual void clear() const = 0;

    virtual void print(const char *) const = 0;

    virtual void print(const Map &map) const =0;

};


#endif //DND_TERMINALOUTPUT_H
