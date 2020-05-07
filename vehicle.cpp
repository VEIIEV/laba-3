#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

vehicle::vehicle() :vehicle(0, 0) {};
vehicle::vehicle(int NoP, int speed) :
	m_NoP(NoP), m_speed(speed) {};
vehicle::vehicle(const vehicle& vehicle) :
	vehicle(vehicle.m_NoP, vehicle.m_speed){};



	int vehicle::getm_NoP()
	{
		return m_NoP;
	}
	int vehicle::getm_speed()
	{
		return m_speed;
	}
	void vehicle::setm_NoP(int Nop)
	{
		m_NoP = Nop;
	}
	void vehicle::setm_speed(int speed)
	{
		m_speed = speed;
	}

	