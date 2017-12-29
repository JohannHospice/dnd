#ifndef DYNAMIC_H
#define DYNAMIC_H

#include <vector>
#include "Vector.h"
#include "Characterisable.h"
#include "EventDynamic.h"

class VisitorDynamic;

class Dynamic : public Characterisable {
public:
    virtual ~Dynamic();

    const Vector *getVector() const;

    void setVector(const Vector &vector);

    void addEvent(EventDynamic *event);


    virtual const bool accept(const VisitorDynamic &pDynamic) = 0;

protected:

    std::vector<EventDynamic *> _events;
private:

    Vector *_vector = new Vector();
};

#endif // DYNAMIC_H
