#include "Renderer.h"

void Renderer::SetupWindow() 
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Title");
}

void Renderer::ClearScreen()
{
	// Clear screen
	window.clear();
}

void Renderer::UpdateWindow()
{
	// Update the window
	window.display();
}

void Renderer::Render() 
{
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			ClearScreen();

			GameObjectManager::DrawGameObjectsInList();

			UpdateWindow();
		}
	}
	
}

