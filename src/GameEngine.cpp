#include <stdio.h>

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
	printf("GameEngine Init\n");
	m_running = true;
}

void GameEngine::dispose()
{
	// cleanup the all states
	while ( !states.empty() ) {
		states.back()->dispose();
		states.pop_back();
	}

	printf("GameEngine dispose\n");
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
	states.back()->handleEvent(this, event);
}

void GameEngine::update()
{
	// let the state update the game
	states.back()->update(this);
}

void GameEngine::render()
{
	// let the state draw the screen
	states.back()->render(this);
}
