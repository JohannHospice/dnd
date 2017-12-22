#ifndef GAMEMEMENTO_H
#define GAMEMEMENTO_H


#include "HumanActor.h"
#include "Dungeon.h"
#include "Game.h"
class GameMemento
{
    public:
        GameMemento();
        virtual ~GameMemento();

        Dungeon * Getdungeon() { return m_dungeon; }
        void Setdungeon(Dungeon * val) { m_dungeon = val; }
        HumanActor * Gethuman() { return human; }
        void Sethuman(HumanActor * val) { human = val; }

    protected:

    private:
        Dungeon * m_dungeon;
        HumanActor * human;
};

#endif // GAMEMEMENTO_H
