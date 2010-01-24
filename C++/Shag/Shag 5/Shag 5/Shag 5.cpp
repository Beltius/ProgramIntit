#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, i, t, j, zadan;
Start:
	cout << "Vvedite nomer zadania 1, 2, 3 ili 4 vihod : ";
	cin >> zadan;
	switch(zadan)
	{
	case 1:
		for(int i=1;i<1001;i++)
		{
			for(int j=2;j<1001;j++)
			{
				if (i%j==0 && i!=j)
					{
					cout << "neprostoe      " << i << "     " << j << endl;
					break;
					}
				else if (i%j==0)
					{
					cout << "prostoe   " << i << "   "<< j << endl;
					break;
					}
			}
		}
		goto Start;
		break;
	case 2:
		cout << "Vvedite shirinu : ";
		cin >> a;
		cout << endl;
		cout << "Vvedite visotu : ";
		cin >> b;
		cout << endl;
		for (i=1; i<=a; i++)
			{
				cout << '*';
			}
		cout << endl;
			for(t=1; t<=b-2; t++)
			{
				cout << '*';
				for(j=1; j<=(a-2); j++)
						{
							cout << '/';
						}
				cout << '*';
				cout << endl;
			}
		for (i=1; i<=a; i++)
			{
				cout << '*';
			}
		cout << endl;
		goto Start;
		break;
	case 3:
	 for(int j=1;j<31;j++)
        {
            cout<<j<<"\t";

            if (j%7 == 0)
            {
                cout<<"\n";
            } 
        }
	 cout << endl;
		goto Start;
		break;
	case 4:
		break;
	}
	return 0;
}

