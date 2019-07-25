#include "pch.h"
#include "Input.h"

// True indicates the key has been released, false the key is still pressed
std::map<sf::Keyboard::Key, bool> Input::keysByState;

Input::Input()
{
	for (size_t i = 0; i < sf::Keyboard::KeyCount; i++)
	{
		Input::keysByState.insert(std::pair<sf::Keyboard::Key, bool>((sf::Keyboard::Key)i, true));
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

bool Input::GetButtonDown(sf::Keyboard::Key button)
{
	if (Input::keysByState.find(button)->second == false)
	{
		UpdateKeyMap(button, true);
		return true;
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

void Input::UpdateKeyMap(sf::Keyboard::Key button, bool state)
{
	Input::keysByState.find(button)->second = state;
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
