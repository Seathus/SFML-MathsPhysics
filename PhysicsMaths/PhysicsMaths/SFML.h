#pragma once
#include <SFML\Graphics.hpp>
#include "GameObject.h"

class SFML
{
private:
	
public:
	static sf::RenderWindow* window;
	sf::Event event;
	SFML();
	~SFML();
	void Render();
};

