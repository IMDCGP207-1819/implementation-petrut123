#include "pch.h"
#include "Input.h"

// True indicates the key has been released, false the key is still pressed
std::map<sf::Keyboard::Key, bool> Input::keysByPressed;

Input::Input(sf::RenderWindow* window)
{
	this->windowReference = window;
	for (size_t i = 0; i < sf::Keyboard::KeyCount; i++)
	{
		Input::keysByPressed.insert(std::pair<sf::Keyboard::Key, bool>((sf::Keyboard::Key)i, true));
	}
}

bool Input::GetButtonState(sf::Keyboard::Key button)
{
	return sf::Keyboard::isKeyPressed(button);
}

bool Input::GetMouseButtonState(sf::Mouse::Button button)
{
	return sf::Mouse::isButtonPressed(button);
}

bool Input::GetButtonDown(sf::Keyboard::Key button, sf::RenderWindow* window)
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::KeyPressed)
		{
			if (Input::keysByPressed.find(button)->second && event.key.code == button)
				return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool Input::GetButtonUp(sf::Keyboard::Key button, sf::RenderWindow* window)
{
	sf::Event event;

	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::KeyReleased)
		{
			if (event.key.code == button)
				return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void Input::HandleKeys()
{
	while (this->windowReference->isOpen())
	{
		sf::Event event;

		if (this->windowReference->waitEvent(event))
		{
			if (event.type == sf::Event::KeyPressed)
			{
				Input::keysByPressed.find(event.key.code)->second = false;
			}
			else if (event.type == sf::Event::KeyReleased)
			{
				Input::keysByPressed.find(event.key.code)->second = true;
			}
		}
	}
}

bool Input::GetMouseButtonUp(sf::Mouse::Button button, sf::RenderWindow* window)
{
	sf::Event event;

	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::MouseButtonReleased)
		{
			if (event.mouseButton.button == button)
				return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}
