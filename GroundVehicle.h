#pragma once
#include "Vehichle.h"
class GroundVehicle : virtual public Vehichle
{
protected:
	int wheelsNum;
public:
	GroundVehicle(string serial, float weight, int wheelsNum=0);
	virtual	~GroundVehicle();
	virtual void print ()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }

};

