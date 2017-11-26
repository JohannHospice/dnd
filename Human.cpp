//
// Created by karibukai on 25/11/17.
//

#include <iostream>
#include "Human.h"
#include "Application.h"
#include "Key.h"
#include "Input.h"
#include "Output.h"


Human::Human(const char c, Statistics *stats, const std::string name) : Actor(c, stats), name(name) {
}

const std::string Human::getName() const {
    return name;
}

void Human::setName(const std::string name) {
    this->name = name;
}

void Human::act(Stage *pStage) {
    bool chosen = false;
    while (!chosen) {
        const char input = Input::getChar();
        switch (input) {
            case Key::INVENTORY:
                chosen = handleInventory();
                break;
            default:
                chosen = handleInputMove(pStage, input);
        }
    }
}

const bool Human::handleInventory() {
    Output::display(inventory->toString());
    int i = Input::getInt(-1, inventory->size());
    if (i == -1)
        return false;
    inventory->getItem(i).use(this);
    return true;
}
