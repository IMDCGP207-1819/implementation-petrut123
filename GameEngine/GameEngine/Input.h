#pragma once
#include <SFML\Window.hpp>
#include <SFML\Window\Event.hpp>
#include <SFML\Graphics.hpp>

/// <summary>
/// Input management class
/// </summary>
class Input
{
public:
	Input();
	/// <summary>
	/// Checks a button's state.
	/// </summary>
	/// <param name="button">The enumeration value of the checked button</param>
	/// <returns>Returns true every frame the button is pressed and false every frame the button is not pressed</returns>
	static bool GetButtonState(sf::Keyboard::Key button);
	/// <summary>
	/// Checks a mouse button's state.
	/// </summary>
	/// <param name="button">The enumeration value of the checked button</param>
	/// <returns>Return true every frame the mouse button is pressed and false every frame the mouse button is not pressed</returns>
	static bool GetMouseButtonState(sf::Mouse::Button button);
	/// <summary>
	/// Checks if a button was pressed in the frame it was called.
	/// </summary>
	/// <param name="button">Pressed button</param>
	/// <param name="window"></param>
	/// <returns>True the frame the button was pressed, false otherwise</returns>
	static bool GetButtonDown(sf::Keyboard::Key button);
	/// <summary>
	/// Checks if the mouse button was released this frame or not.
	/// </summary>
	/// <param name="button">Pressed mouse button</param>
	/// <param name="window"></param>
	/// <returns>True the frame the button was released, false otherwise</returns>
	static bool GetMouseButtonUp(sf::Mouse::Button button, sf::RenderWindow* window);
	/// <summary>
	/// Checks if the button was released this frame or not.
	/// </summary>
	/// <param name="button">Pressed button</param>
	/// <param name="window"></param>
	/// <returns>True the frame the button was released, false otherwise</returns>
	static bool GetButtonUp(sf::Keyboard::Key button, sf::RenderWindow* window);
	/// <summary>
	/// Updates the key map with the given state
	/// </summary>
	/// <param name="button">The button that has its state changed</param>
	/// <param name="state">Bool that represents the state of the given button</param>
	static void UpdateKeyMap(sf::Keyboard::Key button, bool state);

private:
	/// <summary>
	/// Holds all the buttons in the SFML Key enumeration 
	/// True indicates the key has been released, false the key is still pressed
	/// </summary>
	static std::map<sf::Keyboard::Key, bool> keysByState;
};

