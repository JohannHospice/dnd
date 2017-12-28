
#include "TerminalGnome.h"
#include <TerminalOutputGnome.h>
#include <TerminalInputGnome.h>

void TerminalGnome::init() {
}


void TerminalGnome::close() {
}

TerminalGnome::TerminalGnome() {
    _input = new TerminalInputGnome();
    _output = new TerminalOutputGnome();
}
