#include "AirMobile.h"

AirMobile::AirMobile(string serial, float weight, int wheelsNum, int engines, int passengers, float lattitude) :Vehichle(serial, weight), GroundVehicle(serial, weight, wheelsNum), AirCraft(serial, weight, engines, passengers), lattitude(lattitude)
{
}

AirMobile::~AirMobile()
{
}

void AirMobile::print() const
{
	Vehichle::print();
	cout << "Has " << wheelsNum << " wheels" << endl;
	cout << "Can reach a max lattitude of: " << lattitude << endl;
}

float AirMobile::GetValue() const
{
	return AirCraft::GetValue() + wheelsNum * 1000 + lattitude * 500;
}