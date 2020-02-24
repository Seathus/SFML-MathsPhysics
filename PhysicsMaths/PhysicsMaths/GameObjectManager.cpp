#include "GameObjectManager.h"

void GameObjectManager::AddGameObjectToManager(GameObject* gameObject)
{
	_gameObjectList.push_back(gameObject);
}

void GameObjectManager::RemoveGameObjectFromManager(GameObject* gameObject)
{
	//_gameObjectList.erase(gameObject); not working
}

void GameObjectManager::DrawGameObjectsInList() 
{
	for (int i = 0; i < _gameObjectList.size(); i++)
	{
		_gameObjectList[i]->Draw();
	}
}
