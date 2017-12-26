#ifndef DND_PIECE_H
#define DND_PIECE_H

#include <string>
#include "Case.h"

#define SIZE_LIMIT 1000

class Piece {
public:
    std::string toString() const;

    const bool inBound(int x, int y) const;

    Case *getCase(const Vector &pVector) const;

protected:
    int _sizeX, _sizeY;
    Case *_cases[SIZE_LIMIT][SIZE_LIMIT];

    const bool inBound(const Vector &vector);
};


#endif //DND_PIECE_H
