#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector();
        virtual ~Vector();

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }

    protected:

    private:
        int x;
        int y;
};

#endif // VECTOR_H
