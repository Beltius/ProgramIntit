#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int m, t, z, i, v, colsimvol, napravlenie;
	int mas[10]={0,0,0,0,0,0,0,0,0,0};
	cout << "Hello" << endl << "Dlia vibora zadania vvedite 1, 2, ili 3 : ";
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
			break;
		case 2:
			v = 0; 
			cout << "Vvedite diapazon celih chisel: ";
			for (i=0; i<=9; i++)
			{
				cin >> m; 
				mas[i-1]=m;
			}
			for (i=0; i<=9; i++)
				{
					if (mas[i]%2==0)
						{
							v=v+mas[i];
						}
				}
			cout << endl;
			cout << v << endl;
		}

	return 0; 
}

