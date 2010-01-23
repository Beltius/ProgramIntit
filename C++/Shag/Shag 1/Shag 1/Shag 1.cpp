#include "stdafx.h"
#include <iostream> //подключаем библиотеку ввода вывода
using namespace std; //используем пространство имен std дл€ дальнейшего упрощени€
/////////////////////////////////////////// объ€вл€ем фунуции
double sredar(double a, double b); //среднеарифметическое
double cvadrat(double a);// квадрат числа
double valutab(double a);// доллары
double valutae(double a);// евро
double valutar(double a);// рубли
//////////////////////////////////////тело программы
int main()
{
Start://точка дл€ безусловного перехода дл€ возможности повторить операцию без перезапуска
    double a,b,c,e,r;
	int z;//переменна€ дл€ использовани€ в переключателе
	cout<<"Hello!"<<endl;
	cout<<"Vvedite dlia srednearif 1"<<endl<<"Vvedite dlia cvadrata 2"<<endl<<"Vvedite dlia valut 3"<<endl<<"Vvedite dlia umnog/summi 4"<<endl;
	cout<<"Vvedite dlia vivoda stoki 5"<<endl<<"Vvedite dlia vihoda 6"<<endl;
	cin>>z;
	cout<<endl;
	switch(z)
	{
	///////////////////////////////////////// вычисление среднеарифметического
	case 1:
	   		cout<<"a=";
			cin>>a;
 		    cout<<"b=";
			cin>>b;
 		    c= sredar(a,b);
		    cout<<"c="<<c<<endl;
			goto Start;//////возврат в начало
	break;
	//////////////////////////////////////////////// вычисление квадрата
	case 2:
	   		 cout<<"a=";
		     cin>>a;
			 c = cvadrat(a);
			 cout << "c=" << c <<endl;
			 goto Start;//////возврат в начало
	break;
	/////////////////////////////////////////////////// перевод валют
	case 3:
	   		 cout<<"a=";
		     cin>>a;
			 b = valutab(a);
			 cout << "dolars=" << b <<endl; //долары
			 e = valutae(a);
			 cout << "evro=" << e <<endl; //евро
			 r = valutar(a);
			 cout << "rubli=" << r <<endl; //рубли
			 goto Start;//////возврат в начало
	break;
	/////////////////////////////////////////////////// сумма и произведение
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
			 goto Start;//////возврат в начало
	break;
	/////////////////////////////////////////////////// вывод табулированного текста
	case 5:
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