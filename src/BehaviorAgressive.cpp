#include "BehaviorAgressive.h"

BehaviorAgressive::BehaviorAgressive()
{
    //ctor
}

BehaviorAgressive::~BehaviorAgressive()
{
    //dtor
}

void BehaviorAgressive::act(Stage *stage){
    bool ok = false;
    for(int i = -1; !ok || i < 1; i++){
        for(int j = -1; !ok || j < 1; j++){
            if(i != 0 && j != 0){
                //ok = stage->move(this, i, j);
            }
        }
    }
}
