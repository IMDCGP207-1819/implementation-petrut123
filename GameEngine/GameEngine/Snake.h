#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"

class Snake
{
public:
	Snake();
	void Start();
	void Update(sf::RenderWindow* window);
	sf::Sprite* sprite;
private:
	sf::Texture texture;
	int xDirection, yDirection;
	const int snakeSpeed = 10;
	void Move();
	void SetDirection(int x, int y);
};

