// Shag 2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int _tmain()
{
	int var;
	int a;
	double b, c;
	char s, d, z;
	system("cls");
	cout << "Vvedite chiot / nechiot 1" << endl;
	cout << "Duimi / santimetri 2" << endl;
	cout << "Perviy million 3" << endl;
	cout << "Vihod 0" << endl;
	cin >> var;
	system("cls");
	switch(var)
	{
		case 1: 
			cin>>a;
			cout<<endl;
				if (a%2==0)
				{
					cout << "chetnoe";
					cout<<endl;
				}
				else
				{
					cout << "nechotnoe";
					cout<<endl;
				}
			a=a/10+a%10;
			cout << a << endl;
			system("cls");
		case 2:
			cout << "santimetr v duim to vvedite s" << endl;
			cout << "duim v santimetr to vvedite d" << endl;
			cin>>z;
			system("cls");
			if ( z == 's')
			{
				cout << "Vvedite santimetry: ";
				cin >> b;
				cout << b*2.54 << endl;
			}
			if ( z == 'd')
			{
				cout << "Vvedite duimi: ";
				cin >> c;
				cout << c/2.54 << endl;
			}
		case 3:
			cout << "Skolko budet 2+2?"<<endl;
			cout << "Varianti otvetov:"<< endl;
			cout << "variant 1 :   10" << endl;
			cout << "variant 2 :   6" << endl;
			cout << "variant 3 :   4" << endl;
			cout << "variant 4 :   8" << endl;
			cin >> a;
			if (a==3)
			{
			cout << "Vi vigrali 1000000 $" << endl;
			}
			else
			{
			cout << "Vi ne vigrali 1000000 $" << endl;
			}
		case 0:
			break;
	}
	return 0;
}

