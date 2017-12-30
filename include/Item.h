#ifndef DND_ITEM_H
#define DND_ITEM_H

#include <string>
class Actor;

class Item {
public:
    virtual void use(Actor *actor)=0;

    std::string getName() const;

protected:
    std::string _name{};
};


#endif //DND_ITEM_H
