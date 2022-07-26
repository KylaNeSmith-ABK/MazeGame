#pragma once
#include "PlacableActor.h"

class Pet : public PlacableActor
{
public:
	Pet();
	Pet(int x, int y);

	virtual ActorType GetType() override { return ActorType::Pet; }
	virtual void Draw() override;
};