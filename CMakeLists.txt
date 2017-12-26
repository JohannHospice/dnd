cmake_minimum_required(VERSION 3.6.3)

set(CMAKE_CXX_STANDARD 11)

project(DnD)

include_directories(include)

add_executable(DnD
        include/Actor.h
        include/ActorHuman.h
        include/StateActorDirection.h
        include/ActorMonster.h
        include/Behavior.h
        include/BehaviorAgressive.h
        include/Case.h
        include/CaseCarry.h
        include/CaseStair.h
        include/Dynamic.h
        include/GameEngine.h
        include/GameRunner.h
        include/GameState.h
        include/Inventory.h
        include/Item.h
        include/Piece.h
        include/PlayMemento.h
        include/keys.h
        include/Stage.h
        include/StageBuilder.h
        include/StateMenu.h
        include/StatePlay.h
        include/Statistic.h
        include/Vector.h
        include/Room.h
        src/Actor.cpp
        src/ActorHuman.cpp
        src/StateActorDirection.cpp
        src/ActorMonster.cpp
        src/Behavior.cpp
        src/BehaviorAgressive.cpp
        src/Case.cpp
        src/CaseCarry.cpp
        src/CaseStair.cpp
        src/Dungeon.cpp
        src/Dynamic.cpp
        src/GameEngine.cpp
        src/GameRunner.cpp
        src/GameState.cpp
        src/Inventory.cpp
        src/Item.cpp
        src/Piece.cpp
        src/PlayMemento.cpp
        src/Stage.cpp
        src/StageBuilder.cpp
        src/StateMenu.cpp
        src/StatePlay.cpp
        src/Statistic.cpp
        src/Vector.cpp
        src/Room.cpp src/CaseWall.cpp include/CaseWall.h include/Characterisable.cpp include/Characterisable.h include/Action.h include/CaseFloor.h include/VisitorCase.h src/CaseFloor.cpp include/VisitorCaseMove.h src/VisitorCaseMove.cpp include/VisitorDynamic.h src/VisitorDynamicOnCaseStair.cpp include/VisitorDynamicOnCaseStair.h src/EventActorStair.cpp include/EventActorStair.h src/EventDynamic.cpp include/EventDynamic.h src/VisitorDynamicInteract.cpp include/VisitorDynamicInteract.h src/VisitorDynamicAttack.cpp include/VisitorDynamicAttack.h src/VisitorDynamicItem.cpp include/VisitorDynamicItem.h src/EventDynamicDisapear.cpp include/EventDynamicDisapear.h src/VisitorCaseRemove.cpp include/VisitorCaseRemove.h)