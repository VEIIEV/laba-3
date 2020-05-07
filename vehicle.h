#pragma once
#include <iostream>
#include <string>
using namespace std;

class vehicle
{
protected:
	int m_NoP;
	int m_speed;
public:
	vehicle();
	vehicle(int NoP, int speed);
	vehicle(const vehicle& vehicle);

	int getm_NoP();
	int getm_speed();
	void setm_NoP(int Nop);
	void setm_speed(int speed);
	virtual void print() = 0;
};

