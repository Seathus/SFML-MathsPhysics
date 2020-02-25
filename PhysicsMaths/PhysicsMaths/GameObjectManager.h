#pragma once
#include <vector>
#include "GameObject.h"

using namespace std;

class GameObjectManager
{
private:

	static vector<GameObject*> _gameObjectList;

public:
	
	GameObjectManager();
	~GameObjectManager();
	void AddGameObjectToManager(GameObject* gameObject);
	void RemoveGameObjectFromManager(GameObject* gameObject);
	static void DrawGameObjectsInList();
	
};

