#include "car.h"
using namespace std;



car::car():car(1, 1, 1) {};
car::car(int NoP, int speed, int brand):
	vehicle(NoP, speed), m_brand(brand) {};
car::car(car& car) :
	car(car.getm_NoP(), car.getm_speed(), car.m_brand) {};

int car::getm_brand()
{
	return m_brand;
};
void car::setm_brand(int brand)
{
	m_brand = brand;
};