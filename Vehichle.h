#pragma once
#include <string>
#include <iostream>

using namespace std;
class Vehichle
{
protected:
	string serial;
	float weight;
public:
	Vehichle(string serial = "", float weight = 0);
	virtual ~Vehichle() = 0;
	virtual void print() const;
	virtual float GetValue() const;
	string GetSerial()const 
	{
		return serial;
	}
	virtual void operator!() { cout << typeid(*this).name(); }
};



