#include "FieldVehicle.h"

FieldVehicle::FieldVehicle(string serial, float weight, int wheelsNum, string condition) :Vehichle(serial, weight), GroundVehicle(serial, weight, wheelsNum), conidtion(condition)
{
}

FieldVehicle::~FieldVehicle()
{
}

float FieldVehicle::GetValue() const
{
	return GroundVehicle::GetValue() * (conidtion == "Good" ? 10 : 2);
}

void FieldVehicle::print() const
{
	GroundVehicle::print();
	cout << "A field vehicle in a: " << conidtion <<" Condition" <<endl;
}