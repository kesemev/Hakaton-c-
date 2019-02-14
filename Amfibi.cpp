#include "Amfibi.h"

Amfibi::Amfibi(string serial, float weight, string name, int wheelsNum) :Vehichle(serial, weight), GroundVehicle(serial, weight, wheelsNum), Ship(serial, weight, name)
{
}

Amfibi::~Amfibi()
{
}

void Amfibi::print() const
{
	cout << "An amfibic vehcile" << endl;
	GroundVehicle::print();
}

float Amfibi::GetValue() const
{
	return GroundVehicle::GetValue() * 13;
}