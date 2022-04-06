#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"enter the of a";
	cin>>a;
	cout<<"enter the value of b";
	cin>>b;
	cout<<"*******before swapping*******"<<endl;
	cout<<"you enter the first number:-"<<a <<endl;
	cout<<"you enter the second number:-"<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"*******after  swapping*******"<<endl;
	cout<<"after swap number first is :-"<<a<<endl;
	cout<<"after swap number second is :-"<<b<<endl;
	getch();
}
