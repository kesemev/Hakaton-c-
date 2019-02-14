#include "Plane.h"


Plane::Plane(string serial, float weight, int engines, int passengers, string company): Vehichle(serial, weight), AirCraft(serial, weight, engines, passengers) , company(company)
{
}

Plane::~Plane()
{
}

void Plane::print() const
{
	AirCraft::print();
	cout << "Owned by: " << (company != "" ? company : "Private") << endl;
}

float Plane:: GetValue() const 
{
	return AirCraft::GetValue() ;
}
