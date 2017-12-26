//
// Created by karibukai on 26/12/17.
//

#ifndef DND_EVENTSTAIR_H
#define DND_EVENTSTAIR_H


#include "EventDynamic.h"

class EventActorStair : public EventDynamic {

public:
    explicit EventActorStair(int i);

    const int getStair() const { return _stair; };
private:
    int _stair;
};


#endif //DND_EVENTSTAIR_H
