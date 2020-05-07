#pragma once
#include "vehicle.h"
#include "car.h"
 class car :public vehicle
{
private:
	int m_brand;
public:
	car();
	car(int NoP, int speed, int brand);
	car(car& car);

	//car(const car& car) :
	//	m_brand(car.m_brand) {};


	int getm_brand();
	void setm_brand(int brand);
};