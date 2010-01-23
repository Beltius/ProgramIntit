#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, zadan, i, ost, chislo=0;
Start:
	cout << "Viberete nomer zadania 1, 2, 3 ili 4 vihod: ";
	cin >> zadan;
	switch(zadan)
		{
			case 1:
				cout << "Vvedite chislo : ";
				cin >> a;
				cout << endl;
				for(i=0; a>0; i++)
				{
				a=a/10;
				}
				cout << i << endl;
				goto Start;
				break;
			case 2:
				cout << "Vvedite chislo : ";
				cin >> a;
				cout << endl;
				while (a>0)
					{
						ost=a%10;
						a=a/10;
						cout << ost;				
					}
				cout << endl;
				goto Start;
				break;
			case 3:
				cout << "Vvedite chislo : ";
				cin >> a;
				cout << endl;
				while (a>0)
					{
						ost=a%10;
						a=a/10;
						chislo=chislo+ost;				
					}
				cout << chislo << endl;
				goto Start;
				break;
			case 4:
				break;
		}
	return 0;
}

