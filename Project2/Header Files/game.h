#pragma once
#include <SFML/Graphics.hpp>

class Game {
public:
	Game();
	~Game();
	void run();
private:
	void update();
};