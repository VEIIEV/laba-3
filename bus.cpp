#include "vehicle.h"
#include "bus.h"
using namespace std;

bus::bus() :bus(1, 1, 1) {};
bus::bus(int NoP, int speed, int brand) :
	car(NoP, speed, brand) {};
bus::bus(bus& bus) :
	bus(bus.getm_NoP(), bus.getm_speed(), bus.getm_brand()) {};


void bus::print()
{
	cout << "the NoP = " << getm_NoP() << ", the speed= " << getm_speed() << ", the brand = " << getm_brand() << '\n';
};
