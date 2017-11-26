//
// Created by karibukai on 26/11/17.
//

#include "Hud.h"

Hud::Hud(Human *human) {
    this->human = human;
}

const std::string Hud::toString() const {
    std::string render = "Name: " + human->getName();
    return render;
}
