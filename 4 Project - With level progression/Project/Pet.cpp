#include <iostream>
#include <windows.h>

#include "Pet.h"

using namespace std;

Pet::Pet()
	: PlacableActor(0, 0, ActorColor::Cyan)
{
}

Pet::Pet(int x, int y)
	: PlacableActor(x, y, ActorColor::Cyan)
{
}

void Pet::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << "^";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}
