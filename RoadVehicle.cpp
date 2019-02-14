#include "RoadVehicle.h"

RoadVehicle::RoadVehicle(string serial, float weight, int wheelsNum, float km) :Vehichle(serial, weight), GroundVehicle(serial, weight, wheelsNum), km(km)
{
}

RoadVehicle::~RoadVehicle()
{
}

float RoadVehicle::GetValue() const
{
	return GroundVehicle::GetValue() + km * 1000;
}

void RoadVehicle::print() const
{
	GroundVehicle::print();
	cout << "A road vehicle km: " << km << endl;
}