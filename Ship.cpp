#include "Ship.h"



Ship::Ship(string serial, float weight, string name) : Vehichle(serial, weight), name(name)
{

}


Ship::~Ship()
{
}

void Ship::print() const
{
	Vehichle::print();
	cout << "The ship name is : " << name << endl;
}

float Ship::GetValue() const
{
	return Vehichle::GetValue() * 13;
}