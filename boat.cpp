#include "boat.h"
using namespace std;
boat::boat() :boat(1, 1, 1) {};
boat::boat(int NoP, int speed, int dpmt) :
	vehicle(NoP, speed), m_dpmt(dpmt) {};
boat::boat(boat& boat) :
	boat(boat.getm_NoP(), boat.getm_speed(), boat.getm_dpmt()) {};

int boat::getm_dpmt()
{
	return m_dpmt;
};
void boat::setm_dpmt(int dpmt)
{
	m_dpmt = dpmt;
};
void boat::print()
{
	cout << "the NoP = " << getm_NoP() << ", the speed= " << getm_speed() << ", the dpmt = " << getm_dpmt() << '\n';
};