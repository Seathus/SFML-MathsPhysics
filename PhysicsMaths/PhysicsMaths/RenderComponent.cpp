#include "RenderComponent.h"

RenderComponent::RenderComponent(GameObject* object)
{
	this->targetObject = object;
}

void RenderComponent::Tick()
{
	Draw();
}

void RenderComponent::Draw()
{
	switch (renderType)
	{
	case Sprite: std::cout << "Rendering Sprite" << std::endl; break;
	case Line: std::cout << "Rendering Line" << std::endl; break;
	case Circle: std::cout << "Rendering Circle" << std::endl; break;
	case Polygon: std::cout << "Rendering Polygon" << std::endl; break;
	}
}
