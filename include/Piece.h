//
// Created by djihe on 24/12/2017.
//

#ifndef DND_ROOM_H
#define DND_ROOM_H

#include "Case.h"

#define SIZE_LIMIT 100

class Piece {


private:
    int _sizeX, _sizeY;
    Case _cases[SIZE_LIMIT][SIZE_LIMIT];
};


#endif //DND_ROOM_H
