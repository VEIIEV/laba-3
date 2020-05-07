#pragma once
#include "vehicle.h"
#include "car.h"
class bus :public car
{
public:
	bus();
	bus(int NoP, int speed, int brand);
	bus(bus& bus);


	virtual void print();
};