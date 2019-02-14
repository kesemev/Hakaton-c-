#include "Vehichle.h"
#pragma once
class Ship : virtual public Vehichle
{
protected:
	string name;
public:
	Ship(string serial, float weight, string name="");
	virtual ~Ship();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

