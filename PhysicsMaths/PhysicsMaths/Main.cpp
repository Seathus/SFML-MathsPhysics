#include <SFML\Graphics.hpp>
#include "Line.h"
#include "Renderer.h"

int main() 
{
	Renderer::SetupWindow();

	Renderer::Render();

	return 0;
}