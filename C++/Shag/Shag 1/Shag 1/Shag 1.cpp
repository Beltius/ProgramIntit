#include "stdafx.h"
#include <iostream> //подключаем библиотеку ввода вывода
#include <stdlib.h> //подключаем библиотеку ввода вывода
using namespace std; //используем пространство имен std для дальнейшего упрощения
/////////////////////////////////////////// объявляем фунуции
double sredar(double a, double b); //среднеарифметическое
double cvadrat(double a);// квадрат числа
double valutab(double a);// доллары
double valutae(double a);// евро
double valutar(double a);// рубли
//////////////////////////////////////тело программы
int main()
{
	system ("color 0a");
	setlocale (LC_ALL, "rus");
Start://точка для безусловного перехода для возможности повторить операцию без перезапуска
    double a,b,c,e,r;
	int z;//переменная для использования в переключателе
	cout<<"Здравствуйте"<<endl;
	cout<<"Задание:"<<endl;
	cout<<"1) Напишите программу, вычисляющую среднее арифметическое двух чисел. "<<endl;
	cout<<"2) Напишите программу, которая переводит гривны в $,Є, российские рубли. "<<endl;
	cout<<"3) Выведите на экран следующий текст: "<<endl;
	cout<<"\\To be or not to be\\"<<endl;
	cout<<"\t"<<"\\Shakespeare\\"<<endl;
	cout<<"4) В C нет операции возведения в квадрат. Напишите программу, которая вычисляет"<<endl;
	cout<<"квадрат любого, введенного числа. "<<endl;
	cout<<"5) Введите три числа и выведите на экран значение суммы и произведения этих чисел."<<endl;
	cout<<"6) Выход." << endl;
	cout<<"Введите номер задания которое вы хотите запустить : ";
	cin>>z;
	cout<<endl;
	switch(z)
	{
	///////////////////////////////////////// вычисление среднеарифметического
	case 1:
	    	system ("CLS");
	   		cout<<"a=";
			cin>>a;
 		    cout<<"b=";
			cin>>b;
 		    c= sredar(a,b);
		    cout<<"c="<<c<<endl;
			goto Start;//////возврат в начало
	break;
	//////////////////////////////////////////////// вычисление квадрата
	case 4:
		    system ("CLS");
	   		 cout<<"a=";
		     cin>>a;
			 c = cvadrat(a);
			 cout << "c=" << c <<endl;
			 goto Start;//////возврат в начало
	break;
	/////////////////////////////////////////////////// перевод валют
	case 2:
		     system ("CLS");
	   		 cout<<"a=";
		     cin>>a;
			 b = valutab(a);
			 cout << "доллары=" << b <<endl; //долары
			 e = valutae(a);
			 cout << "евро=" << e <<endl; //евро
			 r = valutar(a);
			 cout << "рубли=" << r <<endl; //рубли
			 goto Start;//////возврат в начало
	break;
	/////////////////////////////////////////////////// сумма и произведение
	case 5:
			system ("CLS");
	   		 cout<<"a=";
		     cin>>a;
			cout<<"b=";
		     cin>>b;
			 cout<<"c=";
		     cin>>c;
			 e=a+b+c;
			 r=a*b*c;
			 cout<<"сумма = "<<e<<endl;
			 cout<<"произведение = "<<r<<endl<<endl;
			 goto Start;//////возврат в начало
	break;
	/////////////////////////////////////////////////// вывод табулированного текста
	case 3:
	   		 cout<<"\"To be or not to be\""<<endl;
			 cout<<"\t"<<"\\Shakespeare\\"<<endl;
			 goto Start;//////возврат в начало
	break;
	/////////////////выход из программы 
	case 6:
		break;
    //////////////////////////выход из программы 
	default: break;
	}
	return 0;
}
///////////////////////////////////////// среднеарифметическое
double sredar(double a, double b)
{
	double d;
    d=(a+b)/2;
    return(d);
}
//////////////////////////////////////////// квадрат
double cvadrat(double a)
{
double d;
d=a*a;
return(d);
}
//////////////////////////// перевод гривен в долары
double valutab(double a)
{
double b;
b=a/8;
return(b);
}
////////////////////////// перевод гривен в евро
double valutae(double a)
{
double e;
e=a/12;
return(e);
}
//////////////////////// перевод гривен в рубли
double valutar(double a)
{
double r;
r=a/0.27;
return(r);
}