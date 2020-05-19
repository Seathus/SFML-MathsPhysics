#pragma once
#include "RenderComponent.h"
#include "SFML.h"

class SFMLRenderComponent :	public RenderComponent
{
private:
	SFML* sfml;
public:
	SFMLRenderComponent(GameObject* object);

	void Draw() override;
	void RenderLine();

};

