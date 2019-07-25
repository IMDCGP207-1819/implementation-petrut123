#include "pch.h"
#include "Snake.h"

Snake::Snake()
{
	// Load snake's head texture
	this->texture.loadFromFile("../Assets/SnakeHead.png");
	// Create a sprite
	this->sprite = new sf::Sprite(this->texture);
	this->Start();
}

void Snake::Start()
{
	this->SetDirection(0, 0);
	this->sprite->setPosition(0, 0);
}

void Snake::Update(sf::RenderWindow* window)
{
	if (Input::GetButtonDown(sf::Keyboard::A) && this->xDirection != 1)
	{
		this->SetDirection(-1, 0);
	}
	if (Input::GetButtonDown(sf::Keyboard::D) && this->xDirection != -1)
	{
		this->SetDirection(1, 0);
	}
	if (Input::GetButtonDown(sf::Keyboard::S) && this->yDirection != -1)
	{
		this->SetDirection(0, 1);
	}
	if (Input::GetButtonDown(sf::Keyboard::W) && this->yDirection != 1)
	{
		this->SetDirection(0, -1);
	}

	// If the head collides with the food the snake eats the food
	if (this->sprite->getPosition() == food.sprite->getPosition())
	{
		this->Eat();
	}

	this->Move();

	this->HandleSnakeOutsideMap();

	// If the snake died reset the game
	if (this->CheckDeath())
		this->ResetSnake();

	this->Draw(window);
}

void Snake::SetDirection(int x, int y)
{
	this->xDirection = x;
	this->yDirection = y;
}

void Snake::Eat()
{
	sf::Sprite* sprite = new sf::Sprite(this->texture);
	sprite->setPosition(this->sprite->getPosition());
	this->tail.push_back(sprite);
	food.SetLocation();
}

void Snake::Draw(sf::RenderWindow* window)
{
	window->draw(*sprite);
	window->draw(*this->food.sprite);
		for (auto const& i : this->tail)
			window->draw(*i);
}

bool Snake::CheckDeath()
{
	for (std::list<sf::Sprite*>::reverse_iterator i = this->tail.rbegin(); i != this->tail.rend(); ++i)
	{
		// If the head collides with the tail
		if ((*i)->getPosition() == this->sprite->getPosition())
			return true;
	}
	return false;
}

void Snake::ResetSnake()
{
	this->tail.clear();
	this->Start();
}

void Snake::HandleSnakeOutsideMap()
{
	if (this->sprite->getPosition().x < 0)
	{
		this->sprite->setPosition(800, this->sprite->getPosition().y);
	}
	else if (this->sprite->getPosition().x > 800)
	{
		this->sprite->setPosition(0, this->sprite->getPosition().y);
	}
	else if (this->sprite->getPosition().y < 0)
	{
		this->sprite->setPosition(this->sprite->getPosition().x, 800);
	}
	else if (this->sprite->getPosition().y > 800)
	{
		this->sprite->setPosition(this->sprite->getPosition().x, 0);
	}
}

void Snake::Move()
{
	for (std::list<sf::Sprite*>::reverse_iterator i = this->tail.rbegin(); i != this->tail.rend(); ++i)
	{
		if ((*i) == this->tail.front())
			(*i)->setPosition(this->sprite->getPosition());
		else
			(*i)->setPosition((*std::next(i, 1))->getPosition());
	}
	this->sprite->move(this->xDirection* this->snakeSpeed, this->yDirection* this->snakeSpeed);
}
