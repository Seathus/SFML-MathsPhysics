#pragma once
#include <SFML\Graphics.hpp>
#include "Tick.h"
#include "GameObjectManager.h"


class Renderer
{

private:
	Tick _tick;
	static sf::Event event;
public:
	static sf::RenderWindow window;

	static void SetupWindow();
	static void Render();
	static void ClearScreen();
	static void UpdateWindow();
};

