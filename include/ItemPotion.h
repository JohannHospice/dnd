//
// Created by karibukai on 29/12/17.
//

#ifndef DND_ITEMPOTION_H
#define DND_ITEMPOTION_H


#include <Item.h>

class ItemPotion : public Item {
public:
    explicit ItemPotion(int i);

    void use(Actor *actor) override;

private:
    int _heal;
};


#endif //DND_ITEMPOTION_H
