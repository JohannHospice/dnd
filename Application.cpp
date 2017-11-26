//
// Created by karibukai on 25/11/17.
//

#include "Application.h"

#include <string>

Application::Application() = default;

void Application::addListener(ApplicationListener *listener) const {
    listeners.push_back(*listener);
}

void Application::setActiveListener(const int i) {
    activeListener = &listeners.at(i);
}

void Application::mainLoop() const {
    activeListener->create();
    while (activeListener->isRunning()) {
        activeListener->render();
    }
    activeListener->dispose();
}

static Application *Application::getInstance() {
    if (self == nullptr)
        self = new Application();
    return self;
}
