#include "AirCraft.h"
#pragma once
class Helicopter :public AirCraft
{
private:
	float lattitude; //max
public:
	Helicopter(string serial, float weight, int engines, int passengers, float lattitude=0);
	virtual ~Helicopter();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

