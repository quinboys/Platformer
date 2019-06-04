#pragma once
#include "game.h"

	static const int mWindowHeight = 1300;
	static const int mWindowWidth = 1500;

	Game::Game() :
		mWindow(sf::VideoMode(mWindowWidth, mWindowHeight), "Platformer");
	}

	Game::~Game() {}

