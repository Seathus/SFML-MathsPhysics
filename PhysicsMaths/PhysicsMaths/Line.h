#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameObject.h"

using namespace std;

class Line : public GameObject
{
private:
	
	int _vertexCount;
	vector<sf::Vertex*> _vertices;

public:

	Line();
	~Line();
	Line(const int vertexCount);
	void AddVertexToLine(sf::Vertex* vertex);
	void Draw() override;
	
};