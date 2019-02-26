#include "pch.h"
#include <iostream>
#include <SFML\Graphics.hpp>
using namespace std;
#include "Input.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Engine");

	while (window.isOpen())
	{
		if (Input::GetMouseButtonState(sf::Mouse::Left))
		{
			cout << "A" << endl;
		}
		window.clear();
		window.display();
	}

	return 0;
}
