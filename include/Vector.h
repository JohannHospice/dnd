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

    const int getY() const;

    void setY(int y);

    Vector operator+(Vector const &a) const;

    Vector operator-(Vector const &a) const;

    Vector operator*(Vector const &a) const;

    Vector operator/(Vector const &a) const;

protected:

private:
    int _x;
    int _y;
};

#endif // VECTOR_H
