#pragma once
#include "RenderComponent.h"
#include <vector>
class GameObject
{
private:
	

public:
	std::vector<Component*> components;

	GameObject();
	~GameObject();
	void RegisterComponent(Component& component);
	void RemoveComponent(Component& component);
	void FlushComponents();
};

