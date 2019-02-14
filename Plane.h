#include "AirCraft.h"
#pragma once

class Plane : public AirCraft
{
private :
	string company;
public:
	Plane(string serial, float weight, int engines, int passengers, string company = "");
	virtual ~Plane();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

