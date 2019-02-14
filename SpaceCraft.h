#include "AirCraft.h"
#pragma once
class SpaceCraft: public AirCraft
{
private:
	string mission;
public:
	SpaceCraft(string serial, float weight, int engines, int passengers, string mission="");
	virtual ~SpaceCraft();
	virtual void print()const;
	virtual float GetValue() const;
	virtual void operator!() { cout << typeid(*this).name(); }
};

