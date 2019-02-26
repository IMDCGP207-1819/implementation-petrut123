#pragma once
class Input
{
public:
	//Returns true if the button is pressed
	static bool GetButtonState(sf::Keyboard::Key button);
	//Returns true if the button is pressed
	static bool GetMouseButtonState(sf::Mouse::Button button);
	//Returns the state only the frame it was called. TODO: get pointer to window without parsing the parameter
	static bool GetButtonDown(sf::Keyboard::Key button, sf::RenderWindow &window);
	//Returns the state only the frame it was called
	static bool GetMouseButtonDown(sf::Mouse::Button button, sf::RenderWindow &window);
};

