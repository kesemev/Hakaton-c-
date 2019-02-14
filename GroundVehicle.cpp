#include "GroundVehicle.h"

GroundVehicle::GroundVehicle(string serial, float weight, int wheelsNum) :Vehichle(serial, weight), wheelsNum(wheelsNum)
{

}

GroundVehicle::~GroundVehicle()
{
}

float GroundVehicle::GetValue() const
{
	return Vehichle::GetValue() + wheelsNum * 1000;
}

void GroundVehicle::print()const
{
	Vehichle::print();
	cout << "Has " << wheelsNum << " wheels" << endl;
}