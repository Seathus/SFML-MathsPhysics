#include <SFML\Graphics.hpp>
#include "Line.h"
#include "Renderer.h"

int main() 
{
	Renderer renderer;

	renderer.SetupWindow();
	renderer.Render();

	return 0;
}