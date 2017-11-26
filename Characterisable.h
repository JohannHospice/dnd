//
// Created by karibukai on 22/11/17.
//

#ifndef DND_DISPLAYABLE_H
#define DND_DISPLAYABLE_H


class Characterisable {
protected:
    char character;
public:
    explicit Characterisable(const char);

    const char getCharacter() const;

    void setCharacter(const char);
};


#endif //DND_DISPLAYABLE_H
