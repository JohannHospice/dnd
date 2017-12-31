//
// Created by karibukai on 31/12/17.
//

#ifndef DND_PLAYMEMENTOMANAGER_H
#define DND_PLAYMEMENTOMANAGER_H


#include <PlayMemento.h>

class PlayMementoManager {
public:
    void add(PlayMemento *pMemento);

    PlayMemento *get(unsigned long i);

    unsigned long size();

    static PlayMementoManager *instance() { return &_self; }

private:
    std::vector<PlayMemento *> _saves;
    static PlayMementoManager _self;
};


#endif //DND_PLAYMEMENTOMANAGER_H
