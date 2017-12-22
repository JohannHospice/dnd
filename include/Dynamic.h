#ifndef DYNAMIC_H
#define DYNAMIC_H

#include "Vector.h"

class Dynamic
{
    public:
        virtual ~Dynamic();
        virtual void update() = 0;

        Vector * getVector() { return m_vector; }
    protected:

    private:
        Vector *m_vector;
};

#endif // DYNAMIC_H
