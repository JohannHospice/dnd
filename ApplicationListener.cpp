//
// Created by karibukai on 25/11/17.
//

#include "ApplicationListener.h"

const bool ApplicationListener::getRunning() const {
    return running;
}

void ApplicationListener::setRunning(const bool running) {
    this->running = running;
}
