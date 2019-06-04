#pragma once
#include <SFML/Graphics.hpp>

class Game {
public:
	Game();
	~Game();
	void run();
private:
	void update();
	sf::RenderWindow mWindow;
	static const int FRAMES_PER_SECOND = 60;
};