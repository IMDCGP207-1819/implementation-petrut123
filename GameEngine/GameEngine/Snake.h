#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"
#include "SnakeFood.h"
#include <list>

class Snake
{
public:
	Snake();
	void Start();
	void Update(sf::RenderWindow* window);
	sf::Sprite* sprite;
private:
	sf::Texture texture;
	SnakeFood food = SnakeFood();
	std::list<sf::Sprite*> tail;
	int xDirection, yDirection;
	const int snakeSpeed = 10;
	void Move();
	void SetDirection(int x, int y);
	void Eat();
	void Draw(sf::RenderWindow* window);
};

