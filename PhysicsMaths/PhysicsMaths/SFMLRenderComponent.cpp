#include "SFMLRenderComponent.h"


SFMLRenderComponent::SFMLRenderComponent(GameObject* object) : RenderComponent(object)
{
	this->targetObject = object;
}

void SFMLRenderComponent::Draw()
{
	switch (renderType)
	{
	case Sprite: std::cout << "Rendering SFML Sprite" << std::endl; break;
	case Line: RenderLine(); break;
	case Circle: std::cout << "Rendering SFML Circle" << std::endl; break;
	case Polygon: std::cout << "Rendering SFML Polygon" << std::endl; break;
	}
}


//todo: find a way to specify the line vectors. would be nice to set it up in the gameobject class somehow
void SFMLRenderComponent::RenderLine()
{
	sf::Vertex line[] =
	{
		sf::Vertex(sf::Vector2f(10, 10)),
		sf::Vertex(sf::Vector2f(150, 150))
	};

	sfml->window->draw(line, 2, sf::Lines);
}


