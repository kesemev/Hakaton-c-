#include "RoadVehicle.h"
#pragma once
class ElectricCar: public RoadVehicle
{
private:
	int chargeHours; 
public:
	ElectricCar(string serial, float weight, int wheelsNum, float km, int chargeHours = 0);
	virtual ~ElectricCar();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

