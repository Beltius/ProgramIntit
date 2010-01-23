#include "stdafx.h"
#include <iostream>
//#include <dos.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int m, n, i, v, colsimvol, napravlenie, fact;
Start:
	cout << "Hello" << endl << "Dlia vibora zadania vvedite 1, 2, 3, ili 4 vihod : ";
	cin >> v;
		switch(v)
		{
		case 1:
			cout << "Vvedite colichestvo simvolov : ";
			cin >> colsimvol;
			cout << endl;
			cout << "Vvedite napravlenie ( (1) gorizont, (2) verticalno ) : ";
			cin >> napravlenie;
			cout << endl;
			if ( napravlenie == 1)
			{
				for (i=0; i<=colsimvol; i++)
				{
					cout<< "*";				
				}
			}
			if ( napravlenie == 2)
			{
				for (i=0; i<=colsimvol; i++)
				{
					cout<< '\t' <<"*"<< endl;				
				}
			}
			goto Start;
			break;
		case 2:
			v = 0; 
			cout << "Vvedite diapazon celih chisel: ";
			int mas[10];
			for (i=0; i<9; i++)
			{
				cin >> m; 
				mas[i+1]=m;
			}
			for (i=0; i<9; i++)
				{
					if (mas[i]%2!=0)
						{
							v=v+mas[i];
						}
				}
			cout << endl;
			cout << v << endl;
			goto Start;
			break;
		case 3:
			fact = 1;
			cout << "Vvedite chislo n: ";
			cin >> n;
			cout << endl;
			if (n<0)
				{
					cout << "Choslo dolgo bit bolshe 0" << endl;
				}
			else if (n==0)
				{
					cout << "Factorial chisla raven : 1" << endl;
				}
			else {
				for (i=1; i<=n; i++)
					{
						fact=fact*i;
					}
				cout << "Factorial chisla raven :" << fact << endl;
			}
			goto Start;
			break;
		case 4:
			break;
		}
//_sleep(5000);
return 0; 
}

