#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");
	system ("color 0a");
	char z;
	long double a,b,c,a1,b1,c1,D,x1,x2,x,r,r1,r2,t1,t2,S,S1,p,p1,h,l,v;
lab1:
	cout << "Версия 1.21 " << endl;
	cout << "Введите а если уравнение квадратное " << endl;
	cout << "Введите z если уравнение биквадратное " << endl;
	cout << "Введите b если уравнение линейное " << endl;
	cout << "Введите d если возвести число в степень " << endl;
	cout << "Введите s если нужновычислить площадь " << endl;
	cout << "Введите v если нужно вычислить объём " << endl;
	cout << "Введите p если нужно вычислить периметр " << endl;
	cout << "Что-бы выйти нажмите q " << endl;
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
	case 's':
		goto lab6;
		break;
	case 'v':
		goto lab7;
		break;
	case 'p':
		goto lab8;
		break;
	default:
		goto lab1;
	}
	//квадратное уравнение
lab2:
	cout << "   Вы выбрали квадратное уравнение. " << endl;
	cout << "a=";
	cin >> a;
	cout  << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	cout << "c=";
	cin >> c;
	cout  << endl;
	D = b * b - 4 * a * c;
	if(D>0)
	{
		x1 = (sqrt(D) - b) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);
		r1 = a*(x1*x1)+b*x1+c;
		r2 = a*(x2*x2)+b*x2+c;
		cout << "D=" << D << endl;
		cout << "Два корня:" << endl;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
		cout << "r1=" << r1 << endl;
		cout << "r2=" << r2 << endl;
	}
	if(D==0)
	{
		x1 = -b / (2*a);
		r1 = a*(x1*x1)+b*x1+c;
		cout << "D=" << D << endl;
		cout << "Один корень:" << endl;
		cout << "x=" << x1 << endl;
		cout << "r=" << r1 << endl;
	}
	if(D<0)
	{
		cout << "D=" << D << endl;
		cout << "Нет корней!" << endl;
	}
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab2;
		break;
	default:
		goto lab1;
	}
lab3:
	cout << "Вы выбрали линейное уравнение." << endl;
	cout << "a=";
	cin >> a;
	cout  << endl << "b=";
	cin >> b;
	cout  << endl << "c=";
	cin >> c;
	x=(c-b)/a;
	cout  << endl << " x=" << x;
	cout  << endl << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'D':
	case 'd':
		goto lab3;
		break;
	default:
		goto lab1;
	}
	//биквадратное уравнение
lab4:
	cout << "Вы выбрали биквадратное уравнение." << endl;
	cout << "a=";
	cin >> a;
	cout  << endl << "b=";
	cin >> b;
	cout  << endl << "c=";
	cin >> c;
	D = b * b - 4 * a * c;
	if(D>0)
	{
		x1 = (sqrt(D) - b) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);
		t1=sqrt(x1);
		t2=sqrt(x2);
		cout << "Два корня:" << endl;
		cout << "x1=" << t1 << endl;
		cout << "x2=" << t2 << endl;
	}
	if(D==0)
	{
		x1 = -b / (2*a);
		t1=sqrt(x1);
		cout << "Один корень:" << endl;
		cout << "x=" << t1 << endl;
	}
	if(D<0)
	{
		cout << " D=" << D;
		cout << " Нет корней!";
	}
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab4;
		break;
	default:
		goto lab1;
	}
	//степень
lab5:
	cout << "Введите число ";
	cin >> a;
	cout << "Введите степень ";
	cin >> b;
	p=pow(a,b);
	//функция написана и может существовать без библиотек
	/*p=1;
	for(r=1; r<=b; r++)
	{
	p=p*a;
	}
	cout << "Степень равна" << p << endl;
	*/
	//
	cout << endl << endl << endl;
	cout << "Степень равна: " << p << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab5;
		break;
	default:
		goto lab1;
	}
	//площадь
lab6:
	cout << endl;
	cout << "Какой фигуры? " << endl;
	cout << "a квадрат " << endl;
	cout << "b прямоугольник " << endl;
	cout << "c треугольник " << endl;
	cout << "d паралелограмм " << endl;
	cout << "e трапеция " << endl;
	cout << "f круг " << endl;
	cout << "g ромб " << endl;
	cout << "h цилиндр " << endl;
	cout << "i шар " << endl;
	cout << "j конус(боковой) " << endl;
	cout << "k конус с усеченным верхом (боковой) " << endl;
	cout << "m конус " << endl;
	cout << "n конус с усеченным верхом " << endl;
	cout << "Что-бы выйти нажмите q " << endl;
	cin >> z;
	switch(z)
	{
	case 'q':
		return 0;
		break;
	case 'a':
		goto lab9;
		break;
	case 'b':
		goto lab10;
		break;
	case 'c':
		goto lab11;
		break;
	case 'd':
		goto lab12;
		break;
	case 'e':
		goto lab13;
		break;
	case 'f':
		goto lab14;
		break;
	case 'g':
		goto lab15;
		break;
	case 'h':
		goto lab16;
		break;
	case 'i':
		goto lab17;
		break;
	case 'j':
		goto lab18;
		break;
	case 'k':
		goto lab19;
		break;
	case 'm':
		goto lab20;
		break;
	case 'n':
		goto lab21;
		break;
	default:
		goto lab6;
	}
	//вычисление площади квадратa
lab9:
	cout << "Вы выбрали вычисление площади квадратa." << endl;
	cout << "a=";
	cin >> a;
	c = a * a;
	cout  << endl << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	cout << endl;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab9;
		break;
	default:
		goto lab1;
	}
	//вычисление площади прямоугольникa
lab10:
	cout << "Вы выбрали вычисление площади прямоугольникa. ";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	c = a * b;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab10;
		break;
	default:
		goto lab1;
	}
	//вычисление площади треугольникa
lab11:
	cout << "Вы выбрали вычисление площади треугольникa." << endl;
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	cout << "c=";
	cin >> c;
	cout << endl;
	p = (a+b+c)/2;
	S = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << S << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab11;
		break;
	default:
		goto lab1;
	}
	//вычисление площади паралелограммa
lab12:
	cout << "Вы выбрали вычисление площади паралелограммa. ";
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	c = a * b;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab12;
		break;
	default:
		goto lab1;
	}
	//вычисление площади трапеция
lab13:
	cout << "Вы выбрали вычисление площади трапеции.";
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	cout << "h=";
	cin >> h;
	cout << endl;
	c = (a + b) * (h/2);
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab13;
		break;
	default:
		goto lab1;
	}
	//вычисление площади кругa
lab14:
	cout << "Вы выбрали вычисление площади кругa." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	S = (r * r)* 3.14;
	cout << "площади кругa = " << S << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab14;
		break;
	default:
		goto lab1;
	}
	//вычисление площади ромб
lab15:
	cout << "Вы выбрали вычисление площади ромбa.";
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "h=";
	cin >> h;
	cout << endl;
	cout << "Площадь ромба :";
	c = a * h;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab15;
		break;
	default:
		goto lab1;
	}
	//вычисление площади цилиндра
lab16:
	cout << "Вы выбрали вычисление площади цилиндра." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "h=";
	cin >> h;
	cout << endl;
	c = 6.28 * r * h;
	cout << "Площадь цилиндра = " << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab16;
		break;
	default:
		goto lab1;
	}
	//вычисление площади шара
lab17:
	cout << "Вы выбрали вычисление площади шара." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	c = 4 * 3,14 * (r * r);
	cout << "Площадь шара равна :" << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab17;
		break;
	default:
		goto lab1;
	}
	//вычисление боковой площади конуса
lab18:
	cout << "Вы выбрали вычисление боковой площади конуса." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "l=";
	cin >> l;
	cout << endl;
	c = r * 3,14 * l;
	cout << "Площадь конуса равна : " << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab18;
		break;
	default:
		goto lab1;
	}
	//вычисление боковой площади усеченного конуса
lab19:
	cout << "Вы выбрали вычисление боковой площади усеченного конуса." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "r1=";
	cin >> r1;
	cout << endl;
	cout << "l=";
	cin >> l;
	cout << endl;
	c = l * 3,14 * (r * r1);
	cout << "площади усеченного конуса = " << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab19;
		break;
	default:
		goto lab1;
	}
	//вычисление полной площади конуса
lab20:
	cout << "Вы выбрали вычисление полной площади конуса." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "l=";
	cin >> l;
	c = (r * 3,14 * l)+(3,14*(r*r)) ;
	cout << "Полная площадь конуса равна : "<< c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab20;
		break;
	default:
		goto lab1;
	}
	//вычисление polnoy площади usechennogo konusa
lab21:
	cout << "Вы выбрали вычисление полной площади усеченного конуса." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "r1=";
	cin >> r1;
	cout << endl;
	cout << "l=";
	cin >> l;
	cout << endl;
	c = (l * 3,14 * (r * r1))+(3,14*(r*r))+(3,14*(r1*r1));
	cout << "Полная площадь усеченного конуса равна : " << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab21;
		break;
	default:
		goto lab1;
	}
	//периметр
lab8:
	cout << endl;
	cout << "Какой фигуры?? ";
	cout << "a квадрат ";
	cout << "b прямоугольник ";
	cout << "c треугольник ";
	cout << "d паралелограмм ";
	cout << "e трапеция ";
	cout << "f круг ";
	cout << "g ромб ";
	cout << "Что-бы выйти нажмите q ";
	cin >> z;
	switch(z)
	{
	case 'q':
		return 0;
		break;
	case 'a':
		goto lab30;
		break;
	case 'b':
		goto lab31;
		break;
	case 'c':
		goto lab32;
		break;
	case 'd':
		goto lab33;
		break;
	case 'e':
		goto lab34;
		break;
	case 'f':
		goto lab35;
		break;
	case 'g':
		goto lab36;
		break;
	default:
		goto lab6;
	}
	//вычисление периметра квадратa
lab30:
	cout << "Вы выбрали вычисление периметра квадратa." << endl;
	cout << "a=";
	cin >> a;
	cout << endl;
	c = 4 * a;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab30;
		break;
	default:
		goto lab1;
	}
	//вычисление периметр прямоугольникa
lab31:
	cout << "Вы выбрали вычисление периметр прямоугольникa." << endl;
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	c = 2*a + 2*b;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab31;
		break;
	default:
		goto lab1;
	}
	//вычисление периметр треугольникa
lab32:
	cout << "Вы выбрали вычисление периметр треугольникa." << endl;;
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	cout << "c=";
	cin >> c;
	cout << endl;
	p = a+b+c;
	cout << p << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab32;
		break;
	default:
		goto lab1;
	}
	//вычисление периметр паралелограммa
lab33:
	cout << "Вы выбрали вычисление площади паралелограммa." << endl;
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	c = 2*a + 2*b;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab33;
		break;
	default:
		goto lab1;
	}
	//вычисление периметр трапеция
lab34:
	cout << "Вы выбрали вычисление периметр трапеции." << endl;
	cout << "a=";
	cin >> a;
	cout << endl;
	cout << "b=";
	cin >> b;
	cout << endl;
	cout << "h=";
	cin >> h;
	cout << endl;
	c = a + b + (h*2);
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab34;
		break;
	default:
		goto lab1;
	}
	//вычисление периметр кругa
lab35:
	cout << "Вы выбрали вычисление периметр кругa.";
	cout << "r=";
	cin >> r;
	c = 2 * 3.14 * r;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab35;
		break;
	default:
		goto lab1;
	}
	//вычисление периметр ромба
lab36:
	cout << "   Вы выбрали вычисление периметр ромба. " << endl;
	cout << "a=";
	cin >> a;
	cout << endl;
	c = a * 4;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab36;
		break;
	default:
		goto lab1;
	}
	//Объем
lab7:
	cout << "Какой фигуры? ";
	cout << "a куб ";
	cout << "b паралелепипед ";
	cout << "c пирамида ";
	cout << "g октаедр ";
	cout << "h цилиндр ";
	cout << "i шар ";
	cout << "m конус ";
	cout << "n конус с усеченным верхом ";
	cout << "j усеченной пирамиды ";
	cout << "Что-бы выйти нажмите q ";
	cin >> z;
	switch(z)
	{
	case 'q':
		return 0;
		break;
	case 'a':
		goto lab40;
		break;
	case 'b':
		goto lab41;
		break;
	case 'c':
		goto lab42;
		break;
	case 'g':
		goto lab43;
		break;
	case 'h':
		goto lab44;
		break;
	case 'i':
		goto lab45;
		break;
	case 'm':
		goto lab46;
		break;
	case 'n':
		goto lab47;
		break;
	case 'j':
		goto lab48;
		break;
	default:
		goto lab7;
	}
	//вычисление объёма куба
lab40:
	cout << "   Вы выбрали вычисление объёмаa куба. ";
	cout << "a=";
	cin >> a;
	c = a * a * a;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	cout << endl;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab40;
		break;
	default:
		goto lab1;
	}
	//вычисление объёма паралелепипеда
lab41:
	cout << "   Вы выбрали вычисление объёма паралелепипеда. ";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "h=";
	cin >> h;
	c = (2*a) * (2*b) * h;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	cout << endl;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab41;
		break;
	default:
		goto lab1;
	}
	//вычисление объёма пирамиды
lab42:
	cout << "   Вы выбрали вычисление объёма пирамиды. ";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "h=";
	cin >> h;
	p = (a+b+c)/2;
	S = sqrt(p * (p-a) * (p-b) * (p-c));
	v = (h*S)/3;
	cout << v << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab42;
		break;
	default:
		goto lab1;
	}
	//вычисление объёмаa октаедра
lab43:
	cout << "   Вы выбрали вычисление объёма октаедра. ";
	cout << "a=";
	cin >> a;
	c = ((a*a*a) * 1,41421)/3;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab43;
		break;
	default:
		goto lab1;
	}
	//вычисление объёма цилиндр
lab44:
	cout << "   Вы выбрали вычисление площади цилиндра. ";
	cout << "Дана площадь основания?(y/n) ";
	cin >> z;
	if (z=='n')
	{
		cout << "r=";
		cin >> r;
		cout << "h=";
		cin >> h;
		c = 3.14 * (r * r) * h;
		goto lab200;
	}
	if (z=='y')
	{
		cout << "S=";
		cin >> S;
		cout << "h=";
		cin >> h;
		c = S * h;
		goto lab200;
	}
lab200:
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab44;
		break;
	default:
		goto lab1;
	}
	//вычисление объёма шара
lab45:
	cout << "Вы выбрали вычисление объёма шара." << endl;
	cout << "r=";
	cin >> r;
	c = (4 * 3,14 * (r * r * r))/3;
	cout << c << endl;
	cout << " Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab45;
		break;
	default:
		goto lab1;
	}
	//вычислени объема конуса
lab46:
	cout << "Вы выбрали вычислени объема конуса." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "h=";
	cin >> h;
	cout << endl;
	c = ((r * r) * 3,14 * h)/3;
	cout << c << endl;
	cout << "Что-бы выйти нажмите q и d что-бы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab46;
		break;
	default:
		goto lab1;
	}
	//вычислить объём усеченного конуса
lab47:
	cout << "Вы выбрали вычислить объём усеченного конуса." << endl;
	cout << "r=";
	cin >> r;
	cout << endl;
	cout << "r1=";
	cin >> r1;
	cout << endl;
	cout << "h=";
	cin >> h;
	cout << endl;
	c = h * 3,14 * ((r*r)+(r1*r1)+ (r*r1))/3;
	cout << c << endl;
	cout << " Чтобы выти нажмите q и д чтобы повторить. " << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab47;
		break;
	default:
		goto lab1;
	}
	//Вычисление объема усеченной пирамиды
lab48:
	cout << " Вы выбрали вычисление плошади усеченноы пирамиды. " << endl;
	cout << "Плошади знаеш?(y/n) " << endl;
	cin >> z;
	if (z=='n')
	{
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		cout << "a1=";
		cin >> a1;
		cout << "b1=";
		cin >> b1;
		cout << "c1=";
		cin >> c1;
		cout << "h=";
		cin >> h;
		p=(a+b+c)/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		p1=(a1+b1+c1)/2;
		S1=sqrt(p1*(p1-a1)*(p1-b1)*(p1-c1));
		v = (h*(S+S1+sqrt(S*S1)))/3;
		goto lab300;
	}
	if (z=='y')
	{
		cout << "S=";
		cin >> S;
		cout << "S1=";
		cin >> S1;
		cout << "h=";
		cin >> h;
		v = (h*(S+S1+sqrt(S*S1)))/3;
		goto lab300;
	}
	else
	{
		goto lab48;
	}
lab300:
	cout << v << endl;
	cout << " Чтобы выти нажмите q и д чтобы повторить." << endl;
	cin >> z;
	cout << endl;
	switch(z)
	{
	case 'q':
	case 'Q':
		return 0;
		break;
	case 'd':
	case 'D':
		goto lab48;
		break;
	default:
		goto lab1;
	}
	return 0;
}