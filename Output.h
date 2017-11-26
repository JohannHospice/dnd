//
// Created by karibukai on 26/11/17.
//

#ifndef DND_OUTPUT_H
#define DND_OUTPUT_H

#include <string>

class Output {
public:
    static void display(const std::string str) const;

    static void error(const std::string str) const;

    static void separation(const int size) const;
};


#endif //DND_OUTPUT_H
