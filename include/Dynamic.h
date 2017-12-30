#ifndef DYNAMIC_H
#define DYNAMIC_H

#include <vector>
#include "Vector.h"
#include "Characterisable.h"

class VisitorDynamic;

class Stage;

class Dynamic : public Characterisable {
public:
    Dynamic();

    virtual ~Dynamic();

    const Vector *getVector() const;

    void setVector(const Vector &vector);

    virtual const bool accept(const VisitorDynamic &pDynamic) = 0;

private:
    Vector *_vector = new Vector();
};

#endif // DYNAMIC_H
