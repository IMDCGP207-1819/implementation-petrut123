#include "pch.h"
#include "Snake.h"
#include <iostream>

Snake::Snake()
{
	this->texture.loadFromFile("../Assets/SnakeHead.png");
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
	if (Input::GetButtonState(sf::Keyboard::A))
	{
		this->SetDirection(-1, 0);
	}
	if (Input::GetButtonState(sf::Keyboard::D))
	{
		this->SetDirection(1, 0);
	}
	if (Input::GetButtonState(sf::Keyboard::S))
	{
		this->SetDirection(0, 1);
	}
	if (Input::GetButtonState(sf::Keyboard::W))
	{
		this->SetDirection(0, -1);
	}

	this->Move();

	if (this->sprite->getPosition() == food.sprite->getPosition())
	{
		Eat();
	}

	Draw(window);
}

void Snake::SetDirection(int x, int y)
{
	this->xDirection = x;
	this->yDirection = y;
}

void Snake::Eat()
{
	std::cout << "Food eated!" << std::endl;
	//this->body.push_back(new sf::Sprite(this->texture));
	food.SetLocation();
}

void Snake::Draw(sf::RenderWindow* window)
{
	window->draw(*sprite);
	window->draw(*this->food.sprite);
	//if (this->body.size() > 0)
		//for (size_t i = 0; i < this->body.size(); i++)
			//window->draw(this->body[i].sprite);
}

void Snake::Move()
{
	this->sprite->move(this->xDirection * snakeSpeed, this->yDirection * snakeSpeed);
}
