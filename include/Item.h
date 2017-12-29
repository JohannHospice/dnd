//
// Created by djihe on 29/12/2017.
//

#ifndef DND_ITEM_H
#define DND_ITEM_H

class Actor;

class Item {
public:
    virtual void use(Actor *actor)=0;

};


#endif //DND_ITEM_H
