//
// Created by karibukai on 22/11/17.
//

#ifndef DND_VECTOR_H
#define DND_VECTOR_H


class Vector {
    Vector(const int x, const int y);

    int x, y;
public:
    Vector *setX(const int);

    Vector *setY(const int);

    Vector *setXY(const int, const int);

    const int getX() const;

    const int getY() const;

    Vector(Vector *pVector);

    Vector * addY(int i);

    Vector * addX(const int i);
};


#endif //DND_VECTOR_H
