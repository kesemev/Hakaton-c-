#include "ElectricCar.h"

ElectricCar::ElectricCar(string serial, float weight, int wheelsNum, float km, int chargeHours):Vehichle(serial, weight), RoadVehicle(serial, weight, wheelsNum, km), chargeHours(chargeHours)
{
}

ElectricCar::~ElectricCar()
{
}

void ElectricCar::print() const
{
	RoadVehicle::print();
	cout << "Takes " << chargeHours << " hours to charge" << endl;
}

float ElectricCar::GetValue() const
{
	return RoadVehicle::GetValue() + chargeHours * 300;
}