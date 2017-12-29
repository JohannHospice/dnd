//
// Created by karibukai on 27/12/17.
//

#ifndef DND_MAP_H
#define DND_MAP_H


#include <Case.h>
#include <vector>
#include "Vector.h"
#include "CaseWall.h"
#include <string>

class MapPiece;

class Dynamic;

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

    void setCase(int x, int y, Case *c);

    const bool move(Dynamic *dynamic, const Vector &destination);

    const bool set(Dynamic *pDynamic, const Vector &destination);

    const bool removeContent(const Vector &source);

    void add(const MapPiece &piece);

    void fill();

protected:

    int _sizeX, _sizeY;

    Case ***_cases;

    Case ***init(int sizeX, int sizeY);
};


#endif //DND_MAP_H
