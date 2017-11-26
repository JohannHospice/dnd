//
// Created by karibukai on 25/11/17.
//

#ifndef DND_APPLICATION_H
#define DND_APPLICATION_H


#include <vector>
#include <bits/basic_string.h>
#include "ApplicationListener.h"
#include <string>

class Application {
    static Application *self = nullptr;
    static std::vector<ApplicationListener> listeners;
    ApplicationListener *activeListener;
public:

    Application();

    void addListener(ApplicationListener *) const;

    void mainLoop() const;

    static Application *getInstance();

    void setActiveListener(const int i);
};


#endif //DND_APPLICATION_H
