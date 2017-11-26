//
// Created by karibukai on 22/11/17.
//

#include "Characterisable.h"

Characterisable::Characterisable(const char c) : (character, c) {

}

const char Characterisable::getCharacter() const {
    return character;
}

void Characterisable::setCharacter(const char c) {
    character = c;
}
