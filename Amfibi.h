#include "GroundVehicle.h"
#include "Ship.h"
#pragma once

class Amfibi : public Ship, public GroundVehicle
{

public:
	Amfibi(string serial, float weight, string name, int wheelsNum);
	virtual ~Amfibi();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

