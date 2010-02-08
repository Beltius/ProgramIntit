#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
const long double degtograd = 3.1415926535897932384626433832795/180; 
///////////////////////////////////////////////////////////////////////
class linur
{
private:
	long double a;
	long double b;
	long double c;
	char z;
public:
	long double get_x(void);
	char out(void);
}lin;

long double linur::get_x(void)
{
	long double answer;
	answer = (c-b)/a;
	if(answer*a+b==c)
	{
		cout << "x=" << answer << endl;
	}
	else
	{
		cout << "Ошибка!!!" << endl;
		cout << "x=" << answer << endl;
		cout << "Ошибка!!!" << endl;
	}
	return 0;
}
char linur::out(void)
{
	do
	{
		cout << "a=";
		cin >> a;
		cout << endl;
		cout << "b=";
		cin >> b;
		cout << endl;
		cout << "c=";
		cin >> c;
		cout << endl;
		lin.get_x();
		cout << "\nЧто-бы выйти нажмите q и d что-бы повторить.\n";
		cin >> z;
	}while(z!='q');
	return 0;
}
/////////////////////////////////////////////////////////////////////
class degree
{
private:
	char z;
	long double data_value;
public:
	long double get_sine(void);
	long double get_cosine(void);
	long double get_tangent(void);
	long double get_secant(void);
	long double get_cosecant(void);
	long double get_cotangent(void);
	char out(void);
}deg;

long double degree::get_sine(void)
{
	long double answer;
	answer = sin(data_value * degtograd);
	cout << "sin=" << answer;
	cout << endl;
	return 0;
}

long double degree::get_cosine(void)
{
	long double answer;
	answer = cos(data_value * degtograd);
	cout << "cos=" << answer;
	cout << endl;
	return 0;
}

long double degree::get_tangent(void)
{
	long double answer;
	answer = tan(data_value * degtograd);
	cout << "tg=" << answer;
	cout << endl;
	return 0;
}

long double degree::get_secant(void)
{
	long double answer;
	answer = 1.0/(sin(data_value * degtograd));
	cout << "sec=" << answer;
	cout << endl;
	return 0;
}

long double degree::get_cosecant(void)
{
	long double answer;
	answer =1.0/(cos(data_value * degtograd));
	cout << "cosec=" << answer;
	cout << endl;
	return 0;
}

long double degree::get_cotangent(void)
{
	long double answer;
	answer = 1.0/(tan(data_value * degtograd));
	cout << "ctg=" << answer;
	cout << endl;
	return 0;
}

char degree::out(void)
{
	do
	{
		cout << "Угол = ";
		cin >> data_value;
		cout << endl;
		deg.get_cosine();
		deg.get_sine();
		deg.get_tangent();
		deg.get_cosecant();
		deg.get_secant();
		deg.get_cotangent();
		cout << endl;
		cout << "\nЧто-бы выйти нажмите q и d что-бы повторить.\n";
		cin >> z;
	}while(z!='q');
	return 0;
}
//////////////////////////////////////////////////////////////////////

class becvadur
{
private:
	long double a;
	long double b;
	long double c;
	char z;
	long double D;
public:
	long double Disc(void);
	long double bolshe(void);
	long double raven(void);
	char out(void);
}becvad;

long double becvadur::Disc()
{
	D = b * b - 4 * a * c;
	return 0;
}
////////////////////////////////

long double becvadur::bolshe()
{
	long double x1;
	long double x2;
	long double r1;
	long double r2;
	long double t1;
	long double t2;
	x1 = (sqrt(D) - b) / (2*a);
	x2 = ((-b) - sqrt(D)) / (2*a);
	t1=sqrt(x1);
	t2=sqrt(x2);
	r1 = a*(t1*t1*t1*t1)+b*(t1*t1)+c;
	r2 = a*(t2*t2*t2*t2)+b*(t2*t2)+c;
	if(r1==0)
	{
		cout << "x1=" << t1 << endl;
	}
	if(r2==0)
	{
		cout << "x2=" << t2 << endl;
	}
	else
	{
		cout << "Ошибка!!!" << endl;
		cout << "D=" << D << endl;
		cout << "x1=" << t1 << endl;
		cout << "x2=" << t2 << endl;
		cout << "Ошибка!!!" << endl;
	}
	return 0;
}
/////////////////////////////////////

long double becvadur::raven()
{
	long double x;
	long double r;
	long double t;
	x=(-b)/(2*a);
	t=sqrt(x);
	r=a*(t*t*t*t)+b*(t*t)+c;
	if(r==0)
	{
		cout << "x=" << t << endl;
	}
	else
	{
		cout << "Ошибка!!!" << endl;
		cout << "D=" << D << endl;
		cout << "t=" << x << endl;
		cout << "x=" << t << endl;
		cout << "r=" << r << endl;
		cout << "Ошибка!!!" << endl;
	}
	return 0;
}

/////////////////////////////////////

char becvadur::out()
{
	do
	{
		cout << "Вы выбрали биквадратное уравнение ";
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		becvad.Disc();
		if(D>0)
		{
			becvad.bolshe();
		}
		if(D==0)
		{
			becvad.raven();
		}
		if(D<0)
		{
			cout << "Дискриминант меньше нуля" << endl;
		}
		cout << endl <<"Что-бы выйти нажмите q и d что-бы повторить." << endl;
		cin >> z;
	}while(z!='q');
	return 0;
}

////////////////////////////////////////////////////////////////////////////////

class cvadur
{
private:
	long double a;
	long double b;
	long double c;
	char z;
	long double D;
public:
	long double Disc(void);
	long double bolshe(void);
	long double raven(void);
	char out(void);
}cvad;

long double cvadur::Disc()
{
	D = b * b - 4 * a * c;
	return 0;
}

long double cvadur::bolshe()
{
	long double x1;
	long double x2;
	long double r1;
	long double r2;
	x1 = (sqrt(D) - b) / (2*a);
	x2 = ((-b) - sqrt(D)) / (2*a);
	r1 = a*(x1*x1)+b*x1+c;
	r2 = a*(x2*x2)+b*x2+c;
	if(r1==0)
	{
		cout << "x1=" << x1 << endl;
	}
	if(r2==0)
	{
		cout << "x2=" << x2 << endl;
	}
	else
	{
		cout << "Ошибка!!!" << endl;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
		cout << "D=" << D << endl;
		cout << "Ошибка!!!" << endl;
	}
	return 0;
}

long double cvadur::raven()
{
	long double x;
	long double r;
	x = (-b)/(2*a);
	r = a*(x*x)+b*x+c;
	if(r==0)
	{
		cout << "x=" << x << endl;
	}
	else
	{
		cout << "Ошибка!!!" << endl;
		cout << "x=" << x << endl;
		cout << "D=" << D << endl;
		cout << "Ошибка!!!" << endl;
	}
	return 0;
}

char cvadur::out()
{
	do
	{
		cout << "\n\n\nВы выбрали квадратное уравнение\n";
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		cvad.Disc();
		if(D>0)
		{
			cvad.bolshe();
		}
		if(D==0)
		{
			cvad.raven();
		}
		if(D<0)
		{
			cout << "Дискриминант меньше нуля" << endl;
		}
		cout << endl <<"Что-бы выйти нажмите q и d что-бы повторить." << endl;
		cin >> z;
	}while(z!='q');
	return 0;
}
////////////////////////////////////////////////////////////////////////////////
class step
{
private:
	long double a;
	long double b;
	long double p;
	char z;
public:
	char out(void);
}st;

char step::out()
{
	do
	{
		try
		{
			cout << "Введите число" << endl;
			cin >> a;
		}
		catch(...)
		{
			return 0;
		}
		cout << "Введите степень" << endl;
		cin >> b;
		p=pow(a,b);
		cout << p << endl;
		cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
		cin >> z;

	}while(z!='q');
	return 0;
}
////////////////////////////////////////////////////////////////////////////
class plosh
{
private:
	long double a;

	char z;
public:
	char out(void);
}pl;

////////////////////////////////////////////////////////////////////////////
int main()
{
	system ("color 0a");
	setlocale (LC_ALL, "rus");
lab1:
	try
	{
		char z;
		cout << endl;
		cout << "Версия 2.6\n";
		cout << "Введите a если уравнение квадратное"<< endl;
		cout << "Введите z если уравнение биквадратное"<< endl;
		cout << "Введите b если уравнение линейное"<< endl;
		cout << "Введите d если возвести число в степень"<< endl;
		//cout << "Введите s если хотите вычислить площадь."<< endl;
		//cout << "Введите v если хотите вычислить объём"<< endl;
		//cout << "Введите p если хотите вычислить периметр"<< endl;
		cout << "Введите x если требуются тригонометрические функци"<< endl;
		cout << "Что-бы выйти наберите q"<< endl;
		cin >> z;
		switch(z)
		{
		case 'q':
			return 0;
			break;
		case 'a':
			goto lab2;
			break;
		case 'b':
			goto lab3;
			break;
		case 'z':
			goto lab4;
			break;
		case 'd':
			goto lab5;
			break;
			/* case 's':
			goto lab6;
			break;
			case 'v':
			goto lab7;
			break;
			case 'p':
			goto lab8;
			break;*/
		case 'x':
			goto lab9;
			break;
		default:
			goto lab1;
		}
		//квадратное уравнение
lab2:
		cvad.out();
		goto lab1;
		//линейное уровнение
lab3:
		lin.out();
		goto lab1;
		//биквадратное уравнение
lab4:
		becvad.out();
		goto lab1;
		//возведение в степень
lab5:
		st.out();
		goto lab1;
		//тригонометрические функции
lab9:
		deg.out();
		goto lab1;
	}
	catch(...)
	{
		goto lab1;
	}
	return 0;
}