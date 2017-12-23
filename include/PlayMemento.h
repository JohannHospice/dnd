#ifndef PLAYMEMENTO_H
#define PLAYMEMENTO


#include "ActorHuman.h"
#include "Dungeon.h"

class PlayMemento
{
    public:
        PlayMemento();
        virtual ~PlayMemento();

        Dungeon * Getdungeon() { return m_dungeon; }
        void Setdungeon(Dungeon * val) { m_dungeon = val; }
        ActorHuman * Gethuman() { return human; }
        void Sethuman(ActorHuman * val) { human = val; }

    protected:

    private:
        Dungeon * m_dungeon;
        ActorHuman * human;
};

#endif // PLAYMEMENTO
