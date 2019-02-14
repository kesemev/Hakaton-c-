#include "Helicopter.h"

Helicopter::Helicopter(string serial, float weight, int engines, int passengers, float lattitude) : Vehichle(serial, weight), AirCraft(serial, weight, engines, passengers) , lattitude(lattitude)
{
}


Helicopter::~Helicopter()
{
}

void Helicopter::print() const
{
	AirCraft::print();
	cout << "Can reach a max lattitude of: " << lattitude << endl;
}

float Helicopter::GetValue() const 
{
	return AirCraft::GetValue() + lattitude*10;
}

