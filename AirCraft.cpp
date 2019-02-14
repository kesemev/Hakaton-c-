#include "AirCraft.h"


AirCraft::AirCraft(string serial, float weight, int engines, int passengers) :Vehichle(serial, weight), engines(engines), passengers(passengers)
{
}

AirCraft::~AirCraft()
{
}

float AirCraft::GetValue() const
{
	return Vehichle::GetValue() + 10000 * engines + passengers * 100;
}

void AirCraft::print() const
{
	Vehichle::print();
	cout << "Has " << engines << " engines, max passengers: " << passengers << endl;
}