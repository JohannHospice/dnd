//
// Created by karibukai on 25/11/17.
//

#ifndef DND_STRINGABLE_H
#define DND_STRINGABLE_H

#include <string>

class Stringable {
public:
    virtual const std::string toString() const = 0;
};


#endif //DND_STRINGABLE_H
