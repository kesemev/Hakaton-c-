#include "Submarine.h"



Submarine::Submarine(string serial, float weight, float depth ) : Vehichle(serial, weight), Ship(serial, weight) , depth(depth)
{
}


Submarine::~Submarine()
{
}

void Submarine::print() const
{
	Ship::print();
	cout << "The max depth is : " << depth << endl;
}

float Submarine::GetValue() const
{
	return Ship::GetValue() + depth * 1000;
}