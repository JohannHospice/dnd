#ifndef DYNAMIC_H
#define DYNAMIC_H

#include <vector>
#include "Vector.h"
#include "Characterisable.h"

class VisitorDynamic;

class Stage;

class Dynamic : public Characterisable {
public:
    explicit Dynamic(Stage *stage);

    Dynamic();

    virtual ~Dynamic();

    const Vector *getVector() const;

    void setVector(const Vector &vector);

    virtual const bool accept(const VisitorDynamic &pDynamic) = 0;

    void removeFromStage();

private:
    Stage *_stage;

    Vector *_vector = new Vector();

    void setStage(Stage *stage);
};

#endif // DYNAMIC_H
