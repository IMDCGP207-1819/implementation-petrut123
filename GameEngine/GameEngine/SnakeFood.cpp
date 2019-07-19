#include "pch.h"
#include "SnakeFood.h"

SnakeFood::SnakeFood()
{
	this->texture.loadFromFile("../Assets/Food.png");
	this->sprite = new sf::Sprite(this->texture);
	this->SetLocation();
}

void SnakeFood::SetLocation()
{
	this->sprite->setPosition(Random::RandomNumberInRange(0, 80) * 10, Random::RandomNumberInRange(0, 80) * 10);
}
