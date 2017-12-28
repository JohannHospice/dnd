cmake_minimum_required(VERSION 3.6.3)
set(CMAKE_CXX_STANDARD 11)

project(DnD)

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})
include_directories(include)

add_executable(DnD
        include/Actor.h
        include/ActorHuman.h
        include/ActorStateDirection.h
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
        include/MapPiece.h
        include/PlayMemento.h
        include/Stage.h
        include/StageBuilder.h
        include/GameStateMenu.h
        include/GameStatePlay.h
        include/Statistic.h
        include/Vector.h
        include/MapPieceRoom.h
        include/CaseWall.h
        include/Characterisable.h
        include/Action.h
        include/VisitorCase.h
        include/VisitorCaseMove.h
        include/VisitorDynamic.h
        include/VisitorDynamicOnCaseStair.h
        include/EventActorStair.h
        include/EventDynamic.h
        include/VisitorDynamicInteract.h
        include/VisitorDynamicAttack.h
        include/VisitorDynamicItem.h
        include/EventDynamicDisapear.h
        include/VisitorCaseRemove.h
        include/TerminalOutputCurses.h
        include/TerminalOutput.h
        include/TerminalGnome.h
        include/TerminalInputCurses.h
        include/Terminal.h
        include/TerminalInputGnome.h
        include/TerminalCurses.h
        include/CaseFloor.h
        include/GameStatePause.h
        src/Actor.cpp
        src/ActorHuman.cpp
        src/ActorStateDirection.cpp
        src/ActorMonster.cpp
        src/Behavior.cpp
        src/BehaviorAgressive.cpp
        src/Case.cpp
        src/CaseCarry.cpp
        src/CaseStair.cpp
        src/Dynamic.cpp
        src/GameEngine.cpp
        src/GameRunner.cpp
        src/GameState.cpp
        src/Inventory.cpp
        src/Item.cpp
        src/MapPiece.cpp
        src/PlayMemento.cpp
        src/Stage.cpp
        src/StageBuilder.cpp
        src/GameStateMenu.cpp
        src/GameStatePlay.cpp
        src/Statistic.cpp
        src/Vector.cpp
        src/MapPieceRoom.cpp
        src/CaseWall.cpp
        src/Characterisable.cpp
        src/CaseFloor.cpp
        src/VisitorCaseMove.cpp
        src/VisitorDynamicOnCaseStair.cpp
        src/EventActorStair.cpp
        src/EventDynamic.cpp
        src/VisitorDynamicInteract.cpp
        src/VisitorDynamicAttack.cpp
        src/VisitorDynamicItem.cpp
        src/EventDynamicDisapear.cpp
        src/VisitorCaseRemove.cpp
        src/main.cpp
        src/TerminalOutputCurses.cpp
        src/TerminalOutput.cpp
        src/TerminalGnome.cpp
        src/TerminalInputCurses.cpp
        src/TerminalOutputGnome.cpp
        src/TerminalInputGnome.cpp
        src/TerminalCurses.cpp
        src/GameStatePause.cpp src/Spawner.cpp include/Spawner.h src/FactoryStatistic.cpp include/FactoryStatistic.h src/MapBuilder.cpp include/MapBuilder.h src/Map.cpp include/Map.h)

target_link_libraries(DnD ${CURSES_LIBRARIES})
