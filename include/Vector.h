#ifndef VECTOR_H
#define VECTOR_H


class Vector {
public:
    Vector();

    virtual ~Vector();

    Vector(const int x, const int y) {
        _x = x;
        _y = y;
    }

    const int getX() const;

    void setX(int x);

    void addX(int x);

    void addY(int y);

    const int getY() const;

    void setY(int y);

    Vector *add(const Vector &b) const;

    Vector operator+(Vector const &a) const;

    Vector *copy() const {
        return new Vector(_x, _y);
    }

private:
    int _x, _y;
};

#endif // VECTOR_H
