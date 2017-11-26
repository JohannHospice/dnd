//
// Created by karibukai on 26/11/17.
//

#ifndef DND_INPUT_H
#define DND_INPUT_H


class Input {
public:
    static const char getChar() const;

    static const int getInt() const;

    static const int getInt(const std::string msg) const;

    static const int getInt(const int min, const int max) const;
};


#endif //DND_INPUT_H
