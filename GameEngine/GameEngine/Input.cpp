#include "pch.h"
#include <SFML\Window.hpp>
#include <SFML\Window\Event.hpp>
#include <SFML\Graphics.hpp>
#include "Input.h"

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
		if (event.type == sf::Event::KeyPressed && event.key.code == button)
		{
			//Input::keyReleased = false;
			return true;
		}
		else
		{
			//Input::keyReleased = true;
			return false;
		}
	}
	return false;
}

bool Input::GetMouseButtonDown(sf::Mouse::Button button, sf::RenderWindow* window)
{
	sf::Event event;
	static bool mouseReleased = true;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == button && mouseReleased == true)
		{
			mouseReleased = false;
			return true;
		}
		else
		{
			mouseReleased = true;
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
		if (event.type == sf::Event::KeyReleased && event.key.code == button)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool Input::GetMouseButtonUp(sf::Mouse::Button button, sf::RenderWindow* window)
{
	sf::Event event;

	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == button)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}
