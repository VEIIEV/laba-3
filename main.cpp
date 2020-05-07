#include <iostream>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "passcar.h"
#include "plane.h"
#include "boat.h"

using namespace std;




int main()
{
	//vehicle = hah;
	boat b(24,23,32);
	b.print();
    plane p(3, 3, 3);
	p.print();
    bus bUs;
	bUs.print();
    b.print();

	p.print();
	boat z = b;
	z.print();

   
    return 0;

	return 0;
}