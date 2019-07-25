#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"
#include "SnakeFood.h"
#include <list>

class Snake
{
public:
	Snake();
	/// <summary>
	/// The first function that gets called after the snake is created
	/// </summary>
	void Start();
	/// <summary>
	/// The update loop called once a frame
	/// </summary>
	/// <param name="window">A pointer to the render window</param>
	void Update(sf::RenderWindow* window);
	/// <summary>
	/// The sprite that represents the head of the snake
	/// </summary>
	sf::Sprite* sprite;
private:
	/// <summary>
	/// The texture used to create the head and the tail sprites
	/// </summary>
	sf::Texture texture;
	/// <summary>
	/// A Snake food object
	/// </summary>
	SnakeFood food = SnakeFood();
	/// <summary>
	/// A list of sprites representing the snakes tail
	/// </summary>
	std::list<sf::Sprite*> tail;
	/// <summary>
	/// The x,y movement direction of the snake
	/// </summary>
	int xDirection, yDirection;
	/// <summary>
	/// The speed at which the snake is moving
	/// </summary>
	const int snakeSpeed = 10;
	/// <summary>
	/// Move the snake in the x,y direction
	/// </summary>
	void Move();
	/// <summary>
	/// Set the snakes x, y movement direction with the given parameters
	/// </summary>
	/// <param name="x">Given x direction</param>
	/// <param name="y">Given y direction</param>
	void SetDirection(int x, int y);
	/// <summary>
	/// This function gets called when the snake eats food
	/// Adds one more to the tails length and changes the foods position
	/// </summary>
	void Eat();
	/// <summary>
	/// Draw the snake
	/// </summary>
	/// <param name="window">The window is being drawn to</param>
	void Draw(sf::RenderWindow* window);
	/// <summary>
	/// Check if the snake died
	/// </summary>
	/// <returns>True if the snake touched its tail false otherwise</returns>
	bool CheckDeath();
	/// <summary>
	/// Reset the snake
	/// </summary>
	void ResetSnake();
	/// <summary>
	/// This method handles the situation where the snake gets outside of the playing area
	/// </summary>
	void HandleSnakeOutsideMap();
};

