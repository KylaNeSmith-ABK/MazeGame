#include <iostream>

#include "Pet.h"

using namespace std;

Pet::Pet()
	: PlacableActor(0, 0)
{
}

Pet::Pet(int x, int y)
	: PlacableActor(x, y)
{
}

void Pet::Draw()
{
	cout << "^";
}
