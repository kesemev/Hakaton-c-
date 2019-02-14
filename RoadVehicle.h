#pragma once
#include "GroundVehicle.h"
class RoadVehicle: public GroundVehicle
{
protected:
	float km;
public:
	RoadVehicle(string serial, float weight, int wheelsNum,float km=0);
	virtual ~RoadVehicle();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

