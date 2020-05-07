#pragma once
#include "vehicle.h"

class boat :public vehicle
{
private:
	int m_dpmt;
public:
	boat();
	boat(int NoP, int speed, int dpmt);
	boat(boat& boat);
	//boat(const boat& boat) :
	//	m_dpmt(boat.m_dpmt) {};

	int getm_dpmt();
	void setm_dpmt(int dpmt);
	virtual void print();
};