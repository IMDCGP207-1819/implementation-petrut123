#pragma once
#include "SFML/Graphics.hpp"
#include "Random.h"

/// <summary>
/// Struct that represents the food eaten by the snake
/// </summary>
struct SnakeFood
{
public:
	SnakeFood();
	/// <summary>
	/// Sets the foods location to a random location on the screen
	/// </summary>
	void SetLocation();
	/// <summary>
	/// The sprite to be drawn
	/// </summary>
	sf::Sprite* sprite;
private:
	/// <summary>
	/// The texture used to create the sprite
	/// </summary>
	sf::Texture texture;
};

