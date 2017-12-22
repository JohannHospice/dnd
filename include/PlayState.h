#ifndef PLAYSTATE_H
#define PLAYSTATE_H

#include "HumanActor.h"
#include "Dungeon.h"
#include "GameState.h"

class GameMemento;

class PlayState: public GameState
{
    public:
        PlayState();
        virtual ~PlayState();

        Dungeon * Getdungeon() { return dungeon; }
        void Setdungeon(Dungeon * val) { dungeon = val; }
        HumanActor * Gethuman() { return human; }
        void Sethuman(HumanActor * val) { human = val; }
        
        GameMemento *save() const;
        restore(const GameMemento memento);
    protected:

    private:
        Dungeon * dungeon;
        HumanActor * human;
};

#endif // PLAYSTATE_H
