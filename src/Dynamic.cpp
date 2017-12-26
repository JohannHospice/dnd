#include "Dynamic.h"

Dynamic::~Dynamic() {
    //dtor
}

void Dynamic::addEvent(EventDynamic *event) {
    events.push_back(event);
}
