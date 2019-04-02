#pragma once
class Input
{
public:
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
	/// Checks if a button was pressed in the frame it was called. TODO: get pointer to window without parsing the parameter
	/// </summary>
	/// <param name="button">Pressed button</param>
	/// <param name="window"></param>
	/// <returns>True the frame the button was pressed, false otherwise</returns>
	static bool GetButtonDown(sf::Keyboard::Key button, sf::RenderWindow &window);
	/// <summary>
	/// Checks if a mouse button was pressed in the frame it was called. TODO: get pointer to window without parsing the parameter
	/// </summary>
	/// <param name="button">Pressed mouse button</param>
	/// <param name="window"></param>
	/// <returns></returns>
	static bool GetMouseButtonDown(sf::Mouse::Button button, sf::RenderWindow &window);

	/// <summary>
	/// Checks if the mouse button was released this frame or not.
	/// </summary>
	/// <param name="button">Pressed mouse button</param>
	/// <param name="window"></param>
	/// <returns>True the frame the button was released, false otherwise</returns>
	static bool GetMouseButtonUp(sf::Mouse::Button button, sf::RenderWindow &window);

	/// <summary>
	/// Checks if the button was released this frame or not.
	/// </summary>
	/// <param name="button">Pressed button</param>
	/// <param name="window"></param>
	/// <returns>True the frame the button was released, false otherwise</returns>
	static bool GetButtonUp(sf::Keyboard::Key button, sf::RenderWindow &window);
};

