#include "AirMobile.h"
#include "Amfibi.h"
#include "ElectricCar.h"
#include "Submarine.h"
#include "Helicopter.h"
#include "SpaceCraft.h"
#include "Plane.h"
#include "FieldVehicle.h"
#pragma once
class DataBase
{
private:
	Vehichle **data;
	int size;
public:
	DataBase();
	~DataBase();
	DataBase& operator+=(Vehichle *v);
	DataBase& operator-=(const Vehichle &v);
	Vehichle& operator[](int index);
	Vehichle& operator[](string serial);
	void print() const;
	void AddRoad();
	void AddField();
	void AddElectric();
	void AddPlane();
	void AddSpace();
	void AddHeli();
	void AddSub();
	void AddAmf();
	void AddShip();
	void AddAirMob();
	bool checkSerail(string s);
};

