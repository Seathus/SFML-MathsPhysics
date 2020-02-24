#include <SFML\Graphics.hpp>

int main() 
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Title");

	sf::Event event;

	sf::CircleShape circle(65, 360);

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			// Clear screen
			window.clear();

			// Draw to screen
			window.draw(circle);

			// Update the window
			window.display();
		}
	}

	return 0;
}