#include "pch.h"
#include "SnakeFood.h"

SnakeFood::SnakeFood()
{
	this->texture.loadFromFile("../Assets/Food.png");
	this->sprite = new sf::Sprite(this->texture);
}
