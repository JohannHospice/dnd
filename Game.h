//
// Created by karibukai on 22/11/17.
//

#ifndef DND_APPLICATION_H
#define DND_APPLICATION_H


#include <vector>
#include "ApplicationListener.h"
#include "Map.h"
#include "Hud.h"
#include "Human.h"

class Game : public ApplicationListener {
    Human *human;
    Map *map;
    Hud *hud;

public:
    Game(Human *, Map *);

    void create() override;

    void render() override;

    void dispose() override;

    const bool isRunning() const override;
};


#endif //DND_APPLICATION_H
