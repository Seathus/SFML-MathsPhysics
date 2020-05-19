#include "Line.h"


Line::Line() 
{

}

Line::~Line()
{
	for (size_t i = 0; i < _vertices.size(); i++)
	{
		delete _vertices[i];
	}
}

Line::Line(const int vertexCount)
{
	this->_vertexCount = vertexCount;
}

void Line::AddVertexToLine(sf::Vertex* vertex)
{
	_vertices.push_back(vertex);
	//_vertices.push_back(sf::Vertex(sf::Vector2f(45,100))); <-- how to create a vertex
}

void Line::Draw()
{
	if (_vertexCount > 0)
	{
		// Draw to screen
		Renderer::window.draw(_vertices, _vertices.size(), sf::Lines);
	}
}