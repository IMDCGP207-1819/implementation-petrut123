#include "pch.h"
#include <iostream>
#include <SFML\Graphics.hpp>
#include "Snake.h"


int main()
{
	// Initialize with a random seed
	srand((unsigned int)time(NULL));
	// Create window
	sf::RenderWindow window(sf::VideoMode(800, 800), "Engine");
	// Limit framerate to 20 fps to limit the game's speed
	window.setFramerateLimit(20);
	// The event system won't send multiple sf::Event:KeyPressed events if the same key is being held down
	window.setKeyRepeatEnabled(false);
	// Create an instance of the input management system
	Input input = Input();
	// Create a snake
	Snake* snake = new Snake();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed)
			{
				input.UpdateKeyMap(event.key.code, false);
			}
			else if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		// Clear the background
		window.clear(sf::Color(255, 111, 97, 100));

		// Update the snake every frame
		snake->Update(&window);

		// Display the frame
		window.display();
	}

	return 0;
}
