#ifndef DND_SPAWNER_H
#define DND_SPAWNER_H

class Spawner {
public:
    explicit Spawner(ActorMonster pMonster);

    ActorMonster *spawn();

private:
    ActorMonster _monster;
};


#endif //DND_SPAWNER_H
