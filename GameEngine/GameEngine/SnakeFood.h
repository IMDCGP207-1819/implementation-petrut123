#pragma once
#include "SFML/Graphics.hpp"

struct SnakeFood
{
public:
	SnakeFood();
	sf::Sprite* sprite;
private:
	sf::Texture texture;
};

