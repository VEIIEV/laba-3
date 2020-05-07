#include "plane.h"
using namespace std;

plane::plane() :plane(1, 1, 1) {};
plane::plane(int NoP, int speed, int Ftime) :
	vehicle(NoP, speed), m_Ftime(Ftime) {};
plane::plane(plane& plane) :
	plane(plane.getm_NoP(), plane.getm_speed(), plane.getm_Ftime()) {};

int plane::getm_Ftime()
{
	return m_Ftime;
};
void plane::setm_Ftime(int Ftime)
{
	m_Ftime = Ftime;
};
void plane::print()
{
	cout << "the NoP = "<< getm_NoP() <<", the speed= "<< getm_speed()<<", the Ftime = "<< getm_Ftime() << '\n';
};

