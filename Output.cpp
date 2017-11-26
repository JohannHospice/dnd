//
// Created by karibukai on 26/11/17.
//

#include "Output.h"

static void Output::display(const std::string str) const {
    printf(str);
}

static void Output::error(const std::string str) const {
    ferror(str);
}

static void Output::separation(const int size) const {
    std::string separation = "\n";
    for (int i = 0; i < size; ++i)
        separation += "=";
    display(separation + "\n");
}