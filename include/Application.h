#ifndef APPLICATION_H
#define APPLICATION_H

#include "Game.h"

class Application
{
    public:
        Application();
        virtual ~Application();

        Game ** Getgames() { return games; }
        void Setgames(Game ** val) { games = val; }

    protected:

    private:
        Game ** games;
};

#endif // APPLICATION_H
