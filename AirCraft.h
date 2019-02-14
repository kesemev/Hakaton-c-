#pragma once
#include "Vehichle.h"
class AirCraft :virtual public Vehichle
{
protected:
	int engines;
	int passengers;//max
public:
	AirCraft(string serial, float weight,int engines = 1, int passengers = 0);
    virtual ~AirCraft();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

