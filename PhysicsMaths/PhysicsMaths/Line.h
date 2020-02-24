#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <array>
#include <vector>
#include "Renderer.h"
#include "GameObject.h"

using namespace std;

class Line : GameObject
{
private:
	
	int _vertexCount;
	vector<sf::Vertex*> _vertices;

public:

	Line();
	Line(const int vertexCount);
	void AddVertexToLine(sf::Vertex* vertex);
	void Draw();
	~Line();
};