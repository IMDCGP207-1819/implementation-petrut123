#pragma once
#include "SFML/Graphics.hpp"
#include "Random.h"

struct SnakeFood
{
public:
	SnakeFood();
	void SetLocation();
	sf::Sprite* sprite;
private:
	sf::Texture texture;
};

