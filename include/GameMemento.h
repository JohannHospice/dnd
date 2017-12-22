#ifndef GAMEMEMENTO_H
#define GAMEMEMENTO_H


#include "ActorHuman.h"
#include "Dungeon.h"

class GameMemento
{
    public:
        GameMemento();
        virtual ~GameMemento();

        Dungeon * Getdungeon() { return m_dungeon; }
        void Setdungeon(Dungeon * val) { m_dungeon = val; }
        ActorHuman * Gethuman() { return human; }
        void Sethuman(ActorHuman * val) { human = val; }

    protected:

    private:
        Dungeon * m_dungeon;
        ActorHuman * human;
};

#endif // GAMEMEMENTO_H
