cmake_minimum_required(VERSION 3.8)
project(DnD)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Actor.cpp Actor.h Stage.cpp Stage.h Case.cpp Case.h Vector.cpp Vector.h Stairs.cpp Stairs.h Monster.cpp Monster.h Player.cpp Player.h Characterisable.cpp Characterisable.h Game.cpp Game.h Statistics.cpp Statistics.h Map.cpp Map.h Stage.cpp Stage.h Item.cpp Item.h Inventory.cpp Inventory.h ApplicationListener.cpp ApplicationListener.h Application.cpp Application.h Human.cpp Human.h Stringable.cpp Stringable.h Positionable.cpp Positionable.h Hud.cpp Hud.h main.cpp Key.cpp Key.h Input.cpp Input.h Output.cpp Output.h Menu.cpp Menu.h)
add_executable(DnD ${SOURCE_FILES})