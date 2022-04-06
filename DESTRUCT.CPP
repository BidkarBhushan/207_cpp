#include<iostream.h>
#include<conio.h>
class demo
{
	private:
	   int x;
	public :
	demo()//default
		{
		cout<<"\nthe constructor with no parameter";
		}
	demo(int a)//parameterized
		{
		x=a;
		cout<<"\n\tconstructor with one parameter x="<<x;
		cout<<"\n\tsqure of x is"<<x*x;
		}
	demo(demo&d)//copy
		{
		cout<<"\n\tcopy of construct is x=d.x="<<d.x;
		x=d.x;
		cout<<"\n\tthe copied contructor is"<<x;
		}
	~demo()
		{
		cout<<"destructor is invoke\n";
		}
};
void main()
{
	clrscr();
	demo d1;
	demo d2(10);
	demo d5(d2);
	getch();
}