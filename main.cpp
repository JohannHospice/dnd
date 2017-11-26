//
// Created by karibukai on 26/11/17.
//



#include "Application.h"
#include "Player.h"
#include "Statistics.h"
#include "Map.h"
#include "Game.h"

int main(int argc, char *argv[]) {
    Application *app = Application::getInstance();

    Statistics *stats = new Statistics();
    Human *h = new Human('h', stats, "boka");

    Player *p1 = new Player();
    p1->addHuman(h);

    RoomBuilder *rBuilder = new RoomBuilder();
    CorridorBuilder *cBuilder = new CorridorBuilder();
    StageBuilder *sBuilder = new StageBuilder();

    Stage *stage = sBuilder
            ->set(0, 0, rBuilder->setSize(4, 5)->setOpen(4, 4)->build())
            ->set(5, 5, cBuilder->set(0, 0)->set(0, 1)->set(1, 1)->set(1, 2)->build())
            ->set(0, 6, rBuilder->setSize(6, 4)->setOpen(0, 1)->build())->build();

    Map *m = new Map();
    m->addStage(stage);

    Game *game = new Game(h, m);
    app->addListener(game);
    app->mainLoop();
}