#pragma once
#include "Component.h"
#include <iostream>

class GameObject;

class RenderComponent : public Component
{
protected:
	GameObject* targetObject;
	

public:
	enum RenderType { Sprite, Line, Circle, Polygon };
	RenderType renderType;


	RenderComponent(GameObject* object);

	void Tick() override;
	virtual void Draw();
};

