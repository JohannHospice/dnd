//
// Created by karibukai on 27/12/17.
//

#ifndef DND_MAP_H
#define DND_MAP_H


#include <Case.h>
#include <vector>
#include "Vector.h"
#include <string>
class MapPiece;

class Map {
public:
    Map() = default;

    Map(int sizeX, int sizeY);

    const bool inBound(int x, int y) const;

    const bool inBound(const Vector &vector);

    Case *getCase(int x, int y) const;

    Case ***getCases() const;

    void setCases(Case ***_cases);

    std::string toString() const;

    int getSizeX() const;

    void setSizeX(int _sizeX);

    int getSizeY() const;

    void setSizeY(int _sizeY);

    Case *getCase(const Vector &vector);

    void add(MapPiece *piece);

    void setCase(int x, int y, Case *c);

protected:
    int _sizeX, _sizeY;
    Case ***_cases;
    void init(int sizeX, int sizeY);

};


#endif //DND_MAP_H
