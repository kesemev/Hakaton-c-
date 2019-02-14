#include "DataBase.h"

DataBase::DataBase()
{
	data = NULL;
	size = 0;
}

DataBase::~DataBase()
{
}

DataBase& DataBase::operator+=(Vehichle *v)
{
	Vehichle **newData = new Vehichle*[++size];
	for (int i = 0; i < size - 1; i++)
	{
		newData[i] = data[i];
	}
	newData[size - 1] = v;
	delete[] data;
	data = newData;
	return *this;
}

DataBase& DataBase::operator-=(const Vehichle &v)
{
	if (size == 0)
		return *this;
	try
	{
		Vehichle **newData = new Vehichle*[--size];
		int t = 0;
		int last;
		for (int i = 0; i < size + 1; i++)
		{
			if (data[i]->GetSerial() != v.GetSerial())
				newData[t++] = data[i];
			else last = i;
		}
		delete data[last];
		delete[] data;
		data = newData;
		if (size == 0)
			data = NULL;
	}
	catch (...)
	{
		cout << "An error has occured." << endl;
		return *this;
	}
	return *this;
}

Vehichle& DataBase::operator[](int index)
{

	if (index >= 0 && data != NULL)
		return (*data)[index];
	else throw 1;
}

Vehichle& DataBase::operator[](string serial)
{


	try
	{
		if (data == NULL)
			throw "There are no vehciles";
		else
			for (int i = 0; i < size; i++)
			{
				if (serial == data[i]->GetSerial())
					return (*data)[i];
			}
		throw "There is no vehcile with this serial";
	}
	catch (string s)
	{
		cout << s << endl;
	}
}

void DataBase::print() const
{
	if (data == NULL) {
		cout << "There are no vehicles" << endl;
		return;
	}
	for (int i = 0; i < size; i++)
	{
		data[i]->print();
		cout << endl;
	}
}

void DataBase::AddRoad()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already."<<endl;
		return;
	}

	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of wheels:";
	int whe;
	cin >> whe;

	cout << "Enter number of km:";
	float km;
	cin >> km;

	RoadVehicle *newG = new RoadVehicle(ser, we, whe, km);
	this->operator+=(newG);

}

void DataBase::AddField()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of wheels:";
	int whe;
	cin >> whe;

	cout << "Enter condition [1-good 2 -bad]:";

	char choice;
	do
	{
		cin >> choice;
	} while (!(choice != '1' || choice != '2'));
	FieldVehicle *newG = new FieldVehicle(ser, we, whe, (choice == '1' ? "Good" : "Bad"));
	this->operator+=(newG);
}

void DataBase::AddElectric()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of wheels:";
	int whe;
	cin >> whe;

	cout << "Enter number of km:";
	float km;
	cin >> km;

	cout << "Enter hours of charge:";
	int ch;
	cin >> ch;

	ElectricCar *newG = new ElectricCar(ser, we, whe, km, ch);
	this->operator+=(newG);

}

void DataBase::AddPlane()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of engines:";
	int eng;
	cin >> eng;

	cout << "Enter number of passengers:";
	int pass;
	cin >> pass;

	getchar();
	cout << "Enter owners's name:";
	string name;
	getline(cin, name);


	Plane *newG = new Plane(ser, we, eng, pass, name);
	this->operator+=(newG);

}

void DataBase::AddSpace()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of engines:";
	int eng;
	cin >> eng;

	cout << "Enter number of passengers:";
	int pass;
	cin >> pass;

	getchar();
	cout << "Enter it's mission:";
	string name;
	getline(cin, name);

	SpaceCraft *newG = new SpaceCraft(ser, we, eng, pass, name);
	this->operator+=(newG);

}

void DataBase::AddHeli()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of engines:";
	int eng;
	cin >> eng;

	cout << "Enter number of passengers:";
	int pass;
	cin >> pass;

	cout << "Enter max lattitude:";
	float lat;
	cin >> lat;


	Helicopter *newG = new Helicopter(ser, we, eng, pass, lat);
	this->operator+=(newG);
}

void DataBase::AddShip()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	getchar();
	cout << "Enter it's name";
	string name;
	getline(cin, name);


	Ship *newG = new Ship(ser, we, name);
	this->operator+=(newG);
}

void DataBase::AddSub()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter max depth:";
	float de;
	cin >> de;


	Submarine *newG = new Submarine(ser, we, de);
	this->operator+=(newG);
}

void DataBase::AddAmf()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;
	if (checkSerail(ser))
	{
		cout << "Serial exists already." << endl;
		return;
	}
	cout << "Enter weight:";
	float we;
	cin >> we;

	getchar();
	cout << "Enter it's name";
	string name;
	getline(cin, name);


	cout << "Enter number of wheels:";
	int whe;
	cin >> whe;

	Amfibi *newG = new Amfibi(ser, we, name, whe);
	this->operator+=(newG);
}

void DataBase::AddAirMob()
{
	cout << "Enter serial number:";
	string ser;
	cin >> ser;

	cout << "Enter weight:";
	float we;
	cin >> we;

	cout << "Enter number of wheels:";
	int whe;
	cin >> whe;

	cout << "Enter number of engines:";
	int eng;
	cin >> eng;

	cout << "Enter number of passengers:";
	int pass;
	cin >> pass;

	cout << "Enter max lattitude:";
	float lat;
	cin >> lat;

	AirMobile *newG = new AirMobile(ser, we, whe, eng, pass, lat);
	this->operator+=(newG);
}

bool DataBase::checkSerail(string s)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i]->GetSerial() == s)
			return true;
	}
	return false;
}