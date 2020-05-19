#include "GameObject.h"
#include "SFMLRenderComponent.h"

GameObject::GameObject()
{
	SFMLRenderComponent* render = new SFMLRenderComponent(this);
	render->renderType = render->Line;
	RegisterComponent(*render);
}

GameObject::~GameObject()
{
	FlushComponents();
}

void GameObject::RegisterComponent(Component& component)
{
	components.push_back(&component);
}

void GameObject::RemoveComponent(Component& component)
{
	//todo
}

void GameObject::FlushComponents()
{
	components.clear();
}
