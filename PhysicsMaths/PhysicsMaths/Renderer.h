#pragma once
#include <SFML\Graphics.hpp>
#include "Tick.h"
#include "GameObjectManager.h"
#include "Line.h"


class Renderer
{

private:
	Tick _tick;
	sf::Event event;
public:
	sf::RenderWindow* window;

	void SetupWindow();
	void Render();
	void ClearScreen();
	void UpdateWindow();
};

