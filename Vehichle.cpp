#include "Vehichle.h"



Vehichle::Vehichle(string serial, float weight) :serial(serial), weight(weight)
{
}


Vehichle::~Vehichle()
{
}
float Vehichle::GetValue() const
{
	return weight * 1000;
}

void Vehichle::print() const
{
	cout << "Serial: " << serial << " Weight: " << weight << " Worht:" << GetValue() << endl;
}