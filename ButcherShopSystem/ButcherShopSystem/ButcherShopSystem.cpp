// ButcherShopSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int options;

int main()
{
	//Menu options
	cout << "\t""\t" << "Menu" << endl;
	cout << "1. Sale" << endl;
	cout << "2. Inventory" << endl;
	cout << "3. Misc" << endl;
	cout << "4. Exit" << endl;
	cin >> options;

	//opens the sales window
	if (options == 1)
	{
		system("cls");
		cout << "\t" <<"New Sale" << endl;
	}
	// opens the inventory window. 
	if (options == 2)
	{
		system("cls");
		cout << "\t" << "Inventory" << endl;
	}
	// opens up to accounting and purchasing. 
	if (options == 3) 
	{
		system("cls");
		cout << "\t" << "Misc" << endl;
		cout << "1. Accounting" << endl;
		cout << "2. Purchasing" << endl;
		cout << "3. Exit" << endl;
		cin >> options;

		//Opens accounting
		if (options == 1)
		{
			system("cls");
			cout << "\t" << "Accounting" << endl;

		}
		//opens purchasing.
		if (options == 2) 
		{
			system("cls");
			cout << "\t" << "Purchasing" << endl;
		}
		//exits the program. 
		if (options == 3)
		{
			exit(0);
		}
	}
	//exits the program. 
	if (options == 4)
	{
		exit(0);
	}
		
		
	system("pause");
}

