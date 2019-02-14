#include "GroundVehicle.h"
#include "AirCraft.h"
#pragma once

class AirMobile : public GroundVehicle, public AirCraft
{
private:
	float lattitude;
public:
	AirMobile(string serial, float weight, int wheelsNum, int engines, int passengers,float lattitude=0);
	virtual ~AirMobile();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

