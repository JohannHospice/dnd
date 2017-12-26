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

    const Vector *getVector() const {
        return &m_vector;
    }

    void addEvent(EventDynamic *event);

    virtual const bool accept(VisitorDynamic *pDynamic) = 0;

protected:
    std::vector<EventDynamic *> events;

private:
    Vector m_vector;
};

#endif // DYNAMIC_H
