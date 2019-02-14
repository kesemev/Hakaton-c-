#include "Ship.h"
#pragma once
class Submarine: public Ship
{
private:
	float depth;
public:
	Submarine(string serial, float weight, float depth=0);
	virtual ~Submarine();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

