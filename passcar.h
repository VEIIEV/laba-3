#pragma once
#include "vehicle.h"
#include "car.h"
class passcar :public car
{
public:
	passcar();
	passcar(int NoP, int speed, int brand);
	passcar(passcar& passcar);

	virtual void print();
};