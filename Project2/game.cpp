#pragma once
#include "../Project2/Header Files/game.h"
#include <iostream>

static const int mWindowHeight = 600;
static const int mWindowWidth = 800;

Game::Game() :
	mWindow(sf::VideoMode(mWindowWidth, mWindowHeight), "Platformer") {}

Game::~Game() {}

void Game::run() {
	mWindow.setFramerateLimit(FRAMES_PER_SECOND);

	while (mWindow.isOpen()) {

		sf::Event event;
		while (mWindow.waitEvent(event)) {

			if (event.type == sf::Event::Closed)
				mWindow.close();



			// Update 

			// Clear canvas

			// Render

			// Game logic (collision)

			// Input detection


		}
	}
}
void Game::update() {

}