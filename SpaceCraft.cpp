#include "SpaceCraft.h"

SpaceCraft::SpaceCraft(string serial, float weight, int engines, int passengers,string mission):Vehichle(serial, weight), AirCraft(serial, weight, engines, passengers), mission(mission)
{
}


SpaceCraft::~SpaceCraft()
{
}


void SpaceCraft::print() const
{
	AirCraft::print();
	cout << "Is's mission is: " << (mission != "" ? mission : "Nothing") << endl;
}

float SpaceCraft::GetValue() const
{
	return AirCraft::GetValue() * 10;
}