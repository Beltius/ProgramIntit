#include "stdafx.h"
#include <iostream> //���������� ���������� ����� ������
using namespace std; //���������� ������������ ���� std ��� ����������� ���������
/////////////////////////////////////////// ��������� �������
double sredar(double a, double b); //��������������������
double cvadrat(double a);// ������� �����
double valutab(double a);// �������
double valutae(double a);// ����
double valutar(double a);// �����
//////////////////////////////////////���� ���������
int main()
{
Start://����� ��� ������������ �������� ��� ����������� ��������� �������� ��� �����������
    double a,b,c,e,r;
	int z;//���������� ��� ������������� � �������������
	cout<<"Hello!"<<endl;
	cout<<"Vvedite dlia srednearif 1"<<endl<<"Vvedite dlia cvadrata 2"<<endl<<"Vvedite dlia valut 3"<<endl<<"Vvedite dlia umnog/summi 4"<<endl;
	cout<<"Vvedite dlia vivoda stoki 5"<<endl<<"Vvedite dlia vihoda 6"<<endl;
	cin>>z;
	cout<<endl;
	switch(z)
	{
	///////////////////////////////////////// ���������� ���������������������
	case 1:
	   		cout<<"a=";
			cin>>a;
 		    cout<<"b=";
			cin>>b;
 		    c= sredar(a,b);
		    cout<<"c="<<c<<endl;
			goto Start;//////������� � ������
	break;
	//////////////////////////////////////////////// ���������� ��������
	case 2:
	   		 cout<<"a=";
		     cin>>a;
			 c = cvadrat(a);
			 cout << "c=" << c <<endl;
			 goto Start;//////������� � ������
	break;
	/////////////////////////////////////////////////// ������� �����
	case 3:
	   		 cout<<"a=";
		     cin>>a;
			 b = valutab(a);
			 cout << "dolars=" << b <<endl; //������
			 e = valutae(a);
			 cout << "evro=" << e <<endl; //����
			 r = valutar(a);
			 cout << "rubli=" << r <<endl; //�����
			 goto Start;//////������� � ������
	break;
	/////////////////////////////////////////////////// ����� � ������������
	case 4:
	   		 cout<<"a=";
		     cin>>a;
			cout<<"b=";
		     cin>>b;
			 cout<<"c=";
		     cin>>c;
			 e=a+b+c;
			 r=a*b*c;
			 cout<<"summa = "<<e<<endl;
			 cout<<"proizved = "<<r<<endl<<endl;
			 goto Start;//////������� � ������
	break;
	/////////////////////////////////////////////////// ����� ��������������� ������
	case 5:
	   		 cout<<"\"To be or not to be\""<<endl;
			 cout<<"\t"<<"\\Shakespeare\\"<<endl;
			 goto Start;//////������� � ������
	break;
	/////////////////����� �� ��������� 
	case 6:
		break;
    //////////////////////////����� �� ��������� 
	default: break;
	}
	return 0;
}
///////////////////////////////////////// ��������������������
double sredar(double a, double b)
{
	double d;
    d=(a+b)/2;
    return(d);
}
//////////////////////////////////////////// �������
double cvadrat(double a)
{
double d;
d=a*a;
return(d);
}
//////////////////////////// ������� ������ � ������
double valutab(double a)
{
double b;
b=a/8;
return(b);
}
////////////////////////// ������� ������ � ����
double valutae(double a)
{
double e;
e=a/12;
return(e);
}
//////////////////////// ������� ������ � �����
double valutar(double a)
{
double r;
r=a/0.27;
return(r);
}