#include "vehicle.h"
#include "passcar.h"

using namespace std;



passcar::passcar() :passcar(1, 1, 1) {};
passcar::passcar(int NoP, int speed, int brand) :
	car(NoP, speed, brand) {};
passcar::passcar(passcar& passcar) :
	passcar(passcar.getm_NoP(), passcar.getm_speed(), passcar.getm_brand()) {};


void passcar::print()
{
	cout << "the NoP = " << getm_NoP() << ", the speed= " << getm_speed() << ", the brand = " << getm_brand() << '\n';
};

