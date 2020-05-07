#pragma once
#include "vehicle.h"

class plane :public vehicle
{
private:
	int m_Ftime;
public:
	plane();
	plane(int NoP, int speed, int Ftime);
	plane(plane& plane);
	
	int getm_Ftime();
	void setm_Ftime(int Ftime);
	virtual void print();
};