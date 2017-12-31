#include "PlayMementoManager.h"

PlayMementoManager PlayMementoManager::_self;

void PlayMementoManager::add(PlayMemento *pMemento) {
    _saves.push_back(pMemento);
}

PlayMemento *PlayMementoManager::get(unsigned long i) {
    return _saves.at(i);
}

unsigned long PlayMementoManager::size() {
    return _saves.size();
}

