#pragma once
#include <iostream>
#include <SFML/Window.hpp>

int main() {

	sf::Window window(sf::VideoMode(800, 600), "My window");
	sf::Event event;

	sf::Clock clock;

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::EventType::Closed)
				window.close();
		}

		std::cout << "Elapsed time in microseconds:" << clock.getElapsedTime().asMicroseconds() << std::endl;
		clock.restart();
		window.display();
	}

	return 0;
}



