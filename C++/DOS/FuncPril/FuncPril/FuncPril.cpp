#include "stdafx.h"
#include <iostream>
#include<math.h>
using namespace std;
int main(void)
{
lab1:
char z;
long double a,b,c,a1,b1,c1,D,x1,x2,x,r,r1,r2,t1,t2,S,S1,p,p1,h,l,v;
cout << "Versia 1.2\n";
cout << "Vvedite a esli uravnenie kvadratnoe\n";
cout << "Vvedite z esli uravnenie bikvadratnoe\n";
cout << "Vvedite b esli uravnenie lineynoe\n";
cout << "Vvedite d esli vozvesti chislo v stepen'\n";
cout << "Vvedite s esli hotite vychislit' ploshad'\n";
cout << "Vvedite v esli hotite vychislit' ob'em\n";
cout << "Vvedite p esli hotite vychislit' perimetr\n";
cout << "CHtoby vyyti nazhmite q\n";
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
  //
  //
  //
  //kvadratnoe uravnenie
 lab2:
 cout << "\n\n\nVy vybrali kvadratnoe uravnenie.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "c=";
 cin >> c;
 D = b * b - 4 * a * c;
if(D>0)
{
x1 = (sqrt(D) - b) / (2*a);
x2 = (-b - sqrt(D)) / (2*a);
r1 = a*(x1*x1)+b*x1+c;
r2 = a*(x2*x2)+b*x2+c;
  cout << "\nD=" << D;
  cout << "\nDva kornia:";
  cout << "\nx1=" << x1;
  cout << "\nx2=" << x2;
  cout << "\n\n\nr1=" << r1;
  cout << "\nr2=" << r2;
}
if(D==0)
{
x1 = -b / (2*a);
r1 = a*(x1*x1)+b*x1+c;
cout << "\nD=" << D;
cout << "\nOdin koren':";
cout << "\nx=" << x1;
cout << "\n\n\nr=" << r1;
}
if(D<0)
{
cout << "\nD=" << D;
cout << "\nNet korney!";
}
cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
 cout << "\n\n\nVy vybrali lineynoe uravnenie.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "c=";
 cin >> c;
 x=(c-b)/a;
 cout << "\nx=" << x;
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //
  //
  //
  //
  //bikvadratnoe uravnenie
 lab4:
 cout << "\n\n\nVy vybrali bikvadratnoe uravnenie.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "c=";
 cin >> c;
 D = b * b - 4 * a * c;
if(D>0)
{
x1 = (sqrt(D) - b) / (2*a);
x2 = (-b - sqrt(D)) / (2*a);
t1=sqrt(x1);
t2=sqrt(x2);
cout << "\nDva kornia:";
cout << "\nx1=" << t1;
cout << "\nx2=" << t2;
}
if(D==0)
{
x1 = -b / (2*a);
t1=sqrt(x1);
cout << "\nOdin koren':";
cout << "\nx=" << t1;
}
if(D<0)
{
cout << "\nD=" << D;
cout << "\nNet korney!";
}
cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //
  //
  //
  //
  //stepen'
lab5:
 cout << "Vvedite chislo\n";
 cin >> a;
 cout << "Vvedite stepen'\n";
 cin >> b;
 p=pow(a,b);
 //
 //
 //
 /*p=1;
 for(r=1; r<=b; r++)
 {
 p=p*a;
 }*/
 //
 //
 //
 //eshe odin sposob
 cout << "\n";
 cout << "\n";
 cout << "\n";
 cout << p << '\n';
 cout << "\n";
 cout << "\n";
 cout << "\n";
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //
  //ploshad'
lab6:
 cout << "\n";
 cout << "\n";
 cout << "\n";
 cout << "Kakoy figury?\n";
 cout << "a kvadrat\n";
 cout << "b priamougol'nik\n";
 cout << "c treugol'nik\n";
 cout << "d paralelogramm\n";
 cout << "e trapeciia\n";
 cout << "f krug\n";
 cout << "g romb\n";
 cout << "h cilindr\n";
 cout << "i shar\n";
 cout << "j konus(bokovoy)\n";
 cout << "k konus s usechennym verhom(bokovoy)\n";
 cout << "m konus\n";
 cout << "n konus s usechennym verhom\n";
 cout << "CHtoby vyyti nazhmite q\n";
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
  //
  //
  //
  //vychislenie ploshadi kvadrata
 lab9:
 cout << "\n\n\nVy vybrali vychislenie ploshadi kvadrata.\n";
 cout << "a=";
 cin >> a;
 c = a * a;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi priamougol'nika
 lab10:
 cout << "\n\n\nVy vybrali vychislenie ploshadi priamougol'nika.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 c = a * b;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi treugol'nika
 lab11:
 cout << "\n\n\nVy vybrali vychislenie ploshadi treugol'nika.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "c=";
 cin >> c;
 p = (a+b+c)/2;
 S = sqrt(p * (p-a) * (p-b) * (p-c));
 cout << S << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi paralelogramma
 lab12:
 cout << "\n\n\nVy vybrali vychislenie ploshadi paralelogramma.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 c = a * b;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi trapeciia
 lab13:
 cout << "\n\n\nVy vybrali vychislenie ploshadi trapecii.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "h=";
 cin >> h;
 c = (a + b) * (h/2);
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi kruga
 lab14:
 cout << "\n\n\nVy vybrali vychislenie ploshadi kruga.\n";
 cout << "r=";
 cin >> r;
 S = (r * r)* 3.14;
 cout << S << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi romb
 lab15:
 cout << "\n\n\nVy vybrali vychislenie ploshadi romba.\n";
 cout << "a=";
 cin >> a;
 cout << "h=";
 cin >> h;
 c = a * h;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi cilindr
 lab16:
 cout << "\n\n\nVy vybrali vychislenie ploshadi cilindra.\n";
 cout << "r=";
 cin >> r;
 cout << "h=";
 cin >> h;
 c = 6.28 * r * h;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ploshadi shara
 lab17:
 cout << "\n\n\nVy vybrali vychislenie ploshadi shara.\n";
 cout << "r=";
 cin >> r;
 c = 4 * 3,14 * (r * r);
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie bokovoy ploshadi konusa
 lab18:
 cout << "\n\n\nVy vybrali vychislenie bokovoy ploshadi konusa.\n";
 cout << "r=";
 cin >> r;
 cout << "l=";
 cin >> l;
 c = r * 3,14 * l;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie bokovoy ploshadi usechennogo konusa
 lab19:
 cout << "\n\n\nVy vybrali vychislenie bokovoy ploshadi usechennogo konusa.\n";
 cout << "r=";
 cin >> r;
 cout << "r1=";
 cin >> r1;
 cout << "l=";
 cin >> l;
 c = l * 3,14 * (r * r1);
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie polnoy ploshadi konusa 
 lab20:
 cout << "\n\n\nVy vybrali vychislenie polnoy ploshadi konusa.\n";
 cout << "r=";
 cin >> r;
 cout << "l=";
 cin >> l;
 c = (r * 3,14 * l)+(3,14*(r*r)) ;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie polnoy ploshadi usechennogo konusa
 lab21:
 cout << "\n\n\nVy vybrali vychislenie polnoy ploshadi usechennogo konusa.\n";
 cout << "r=";
 cin >> r;
 cout << "r1=";
 cin >> r1;
 cout << "l=";
 cin >> l;
 c = (l * 3,14 * (r * r1))+(3,14*(r*r))+(3,14*(r1*r1));
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //
  //
  //
  //
  //perimetr
lab8:
 cout << "\n";
 cout << "\n";
 cout << "\n";
 cout << "Kakoy figury?\n";
 cout << "a kvadrat\n";
 cout << "b priamougol'nik\n";
 cout << "c treugol'nik\n";
 cout << "d paralelogramm\n";
 cout << "e trapeciia\n";
 cout << "f krug\n";
 cout << "g romb\n";
 cout << "CHtoby vyyti nazhmite q\n";
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
   //
  //
  //
  //vychislenie perimetr kvadrata
 lab30:
 cout << "\n\n\nVy vybrali vychislenie perimetr kvadrata.\n";
 cout << "a=";
 cin >> a;
 c = 4 * a;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie perimetr priamougol'nika
 lab31:
 cout << "\n\n\nVy vybrali vychislenie perimetr priamougol'nika.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 c = 2*a + 2*b;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie perimetr treugol'nika
 lab32:
 cout << "\n\n\nVy vybrali vychislenie perimetr treugol'nika.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "c=";
 cin >> c;
 p = a+b+c;
 cout << p << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie perimetr paralelogramma
 lab33:
 cout << "\n\n\nVy vybrali vychislenie ploshadi paralelogramma.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 c = 2*a + 2*b;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie perimetr trapeciia
 lab34:
 cout << "\n\n\nVy vybrali vychislenie perimetr trapecii.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "h=";
 cin >> h;
 c = a + b + (h*2);
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie perimetr kruga
 lab35:
 cout << "\n\n\nVy vybrali vychislenie perimetr kruga.\n";
 cout << "r=";
 cin >> r;
 c = 2 * 3.14 * r;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie perimetr romb
 lab36:
 cout << "\n\n\nVy vybrali vychislenie perimetr romba.\n";
 cout << "a=";
 cin >> a;
 c = a * 4;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //
  //ob'em
lab7:
 cout << "\n";
 cout << "\n";
 cout << "\n";
 cout << "Kakoy figury?\n";
 cout << "a kub\n";
 cout << "b parallelepiped\n";
 cout << "c piramida\n";
 cout << "g oktaedr\n";
 cout << "h cilindr\n";
 cout << "i shar\n";
 cout << "m konus\n";
 cout << "n konus s usechennym verhom\n";
 cout << "j usechennoy piramidy\n";
 cout << "CHtoby vyyti nazhmite q\n";
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
  //
  //
  //
  //vychislenie ob'em kuba
 lab40:
 cout << "\n\n\nVy vybrali vychislenie ob'ema kuba.\n";
 cout << "a=";
 cin >> a;
 c = a * a * a;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'em parallelepiped
 lab41:
 cout << "\n\n\nVy vybrali vychislenie ob'em parallelepiped.\n";
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
 cout << "h=";
 cin >> h;
 c = (2*a) * (2*b) * h;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'em peramidy
 lab42:
 cout << "\n\n\nVy vybrali vychislenie ob'em peramidy.\n";
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
 cout << v << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'ema oktaedra
 lab43:
 cout << "\n\n\nVy vybrali vychislenie ob'ema oktaedra.\n";
 cout << "a=";
 cin >> a;
 c = ((a*a*a) * 1,41421)/3;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'em cilindr
 lab44:
 cout << "\n\n\nVy vybrali vychislenie ploshadi cilindra.\n";
 cout << "Ploshad' osnovaniia znaesh?(y/n)\n";
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
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'em shara
 lab45:
 cout << "\n\n\nVy vybrali vychislenie ob'em shara.\n";
 cout << "r=";
 cin >> r;
 c = (4 * 3,14 * (r * r * r))/3;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'em konusa
 lab46:
 cout << "\n\n\nVy vybrali vychislenie ob'em konusa.\n";
 cout << "r=";
 cin >> r;
 cout << "h=";
 cin >> h;
 c = ((r * r) * 3,14 * h)/3;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'em usechennogo konusa
 lab47:
 cout << "\n\n\nVy vybrali vychislenie ob'em usechennogo konusa.\n";
 cout << "r=";
 cin >> r;
 cout << "r1=";
 cin >> r1;
 cout << "h=";
 cin >> h;
 c = h * 3,14 * ((r*r)+(r1*r1)+ (r*r1))/3;
 cout << c << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
  //
  //
  //
  //vychislenie ob'ema usechennoy piramidy
 lab48:
 cout << "\n\n\nVy vybrali vychislenie ploshadi usechennoy piramidy.\n";
 cout << "Ploshadi znaesh?(y/n)\n";
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
 cout << v << '\n';
 cout << "\nCHtoby vyyti nazhmite q i d chtoby povtorit'.\n";
 cin >> z;
 cout << "\n";
 cout << "\n";
 cout << "\n";
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
