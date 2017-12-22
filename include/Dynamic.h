#ifndef DYNAMIC_H
#define DYNAMIC_H

#include "Vector.h"

class Dynamic
{
    public:
        Dynamic();
        virtual ~Dynamic();

        Vector * getVector() { return m_vector; }
    protected:

    private:
        Vector *m_vector;
};

#endif // DYNAMIC_H
