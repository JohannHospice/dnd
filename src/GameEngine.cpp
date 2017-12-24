#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "GameEngine.h"
#include "GameState.h"

GameEngine::GameEngine()
{
    //ctor
}

GameEngine::~GameEngine()
{
    //dtor
}


void GameEngine::create()
{
	m_running = true;
}

void GameEngine::dispose()
{
	// cleanup the all states
	while ( !states.empty() ) {
		states.back()->dispose();
		states.pop_back();
	}
}

void GameEngine::changeState(GameState* state)
{
	// cleanup the current state
	if ( !states.empty() ) {
		states.back()->dispose();
		states.pop_back();
	}

	// store and init the new state
	states.push_back(state);
	states.back()->create();
}

void GameEngine::pushState(GameState* state)
{
	// pause current state
	if ( !states.empty() ) {
		states.back()->pause();
	}

	// store and init the new state
	states.push_back(state);
	states.back()->create();
}

void GameEngine::popState()
{
	// cleanup the current state
	if ( !states.empty() ) {
		states.back()->dispose();
		states.pop_back();
	}

	// resume previous state
	if ( !states.empty() ) {
		states.back()->resume();
	}
}
void GameEngine::handleEvent()
{
	// let the state handle events
	int event;
	do {
        event = getch();
	} while(event == 224 || event == 0);
	states.back()->handleEvent(this, event);
}

void GameEngine::update()
{
	// let the state update the game
	states.back()->update(this);
}

void GameEngine::render()
{
    // clear screen
    system("cls");
	// let the state draw the screen
	states.back()->render(this);
}
