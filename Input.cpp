//
// Created by karibukai on 26/11/17.
//

#include <iostream>
#include "Input.h"
#include "Output.h"

static const char Input::getChar() const {
    Output::display("char: ");
    char in;
    std::cin >> in;
    return in;
}

static const int Input::getInt() const {
    return getInt("int: ");
}

static const int Input::getInt(const std::string msg) const {
    Output::display(msg);
    int in;
    std::cin >> in;
    return in;
}

static const int Input::getInt(const int min, const int max) const {
    std::string str = "int(" + std::to_string(min) + "-" + std::to_string(max) + "): ";
    int in = getInt(str);
    while (in < min || in > max) {
        Output::error("err: unbound value " + std::to_string(min) + "-" + std::to_string(max) + "\n");
        in = getInt(str);
    }
    return in;
}
