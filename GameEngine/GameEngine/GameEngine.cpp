#include "pch.h"
#include <iostream>
#include <SFML\Graphics.hpp>
#include "Snake.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Engine");
	window.setFramerateLimit(5);

	Snake* snake = new Snake();

	while (window.isOpen())
	{
		window.clear(sf::Color(255, 111, 97, 100));

		snake->Update(&window);

		window.display();
	}

	return 0;
}
