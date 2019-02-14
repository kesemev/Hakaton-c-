#pragma once
#include "GroundVehicle.h"
class FieldVehicle:public GroundVehicle
{
private:
	string conidtion;
public:
	FieldVehicle(string serial, float weight, int wheelsNum, string condition = "");
	virtual ~FieldVehicle();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

