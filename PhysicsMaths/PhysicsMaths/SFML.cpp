#include "SFML.h"

sf::RenderWindow* SFML::window = new sf::RenderWindow(sf::VideoMode(800, 600), "Maths'n'Physics");

SFML::SFML()
{
	//window 
}

SFML::~SFML()
{
	delete window;
}

void SFML::Render()
{
	GameObject door;
	while (window->isOpen())
	{
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window->close();
			}

			window->clear();

			door.components[0]->Tick();

			/*sf::Vertex line[] =
			{
				sf::Vertex(sf::Vector2f(10, 10)),
				sf::Vertex(sf::Vector2f(150, 150))
			};

			window->draw(line, 2, sf::Lines);*/

			window->display();
		}
	}
}
