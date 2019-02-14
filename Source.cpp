#include "Vehichle.h"
#include "DataBase.h"
//208063511 Omer Avisror
//208055483 Kesem Even-Hen
void main()
{
	DataBase data;
	cout << "Data of vehichle:" << endl;
	int choice;
	bool loop = true;
	while (loop) 
	{
		cout << "Menu: \n1-Add Road Vehicle\n2-Add Electric Car\n3-Add Field Vehicle\n4-Add Plane\n5-Add Spacecraft\n6-Add Helicopter\n7-Add Ship\n8-Add Submarine\n9-Add Amfibi\n10-Add Air Mobile\n11-Print all\n12-Print specific vehicle\n13-Remove vehicle\nend" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			data.AddRoad();
			break;
		}
		case 2:
		{
			data.AddElectric();
			break;
		}
		case 3:
		{
			data.AddField();
			break;
		}
		case 4:
		{
			data.AddPlane();
			break;
		}
		case 5:
		{
			data.AddSpace();
			break;
		}
		case 6:
		{
			data.AddHeli();
			break;
		}
		case 7:
		{
			data.AddShip();
			break;
		}
		case 8:
		{
			data.AddSub();
			break;
		}
		case 9:
		{
			data.AddAmf();
			break;
		}
		case 10:
		{
			data.AddAirMob();
			break;
		}
		case 11:
		{
			data.print();
			break;
		}
		case 12:
		{
			cout << "1-Index or 2-serial" << endl;
			char c;
			cin >> c;
			if (c == '1')
			{
				cout << "Enter index of vehicle:";
				int i;
				cin >> i;
				try
				{
					data[i].print();
				}
				catch (...)
				{
					cout << "An error has occured with the index" << endl;
				}
			}
			else
			{
				cout << "Enter serial of vehicle:";
				string s;
				cin >> s;
				data[s].print();
			}
			break;
		}
		case 13:
		{
			cout << "1-Index or 2-serial" << endl;
			char c;
			cin >> c;
			if (c == '1')
			{
				cout << "Enter index of vehicle:";
				int i;
				cin >> i;
				try 
				{
					data -= data[i];
				}
				catch (...)
				{
					cout << "An error has occured with the index" << endl;
				}
			}
			else
			{
				cout << "Enter serial of vehicle:";
				string s;
				cin >> s;
				data -= data[s];
			}
			break;
		}
		default:loop = false;
			break;
		}
		system("pause");
		system("CLS");
	}
}