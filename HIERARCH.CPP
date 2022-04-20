#include<stdio.h>
#include<conio.h>

class stud
{
protected:
	char name[20];
	int prno;
public:
	void get();
	void put();
};
void stud::get()
{
	cout<<"\n enter the name and permenenet reg.no.:";
	cin>>name>>prno;
}
void stud::get()
{
	cout<<"\n the name andpermanent reg. no:";
	cout<<"\n name :"<<name<<"\t"<<"prno :"<<prno;
}
class art:public stud
{
	protected:
		int fcode;
		char sub[20];
	public:
		void getinfo();
		void putinfo();
};
void art::getinfo()
{
	get();
	cout<<"\n enter the faculty code and subject name :";
	cin>>fcode>>sub;
}
void art::putinfo();
{
	put();
	cout<<"\n faculty code :"<<fcode<<"\t"subect code:"sub;
	}
class medical:public stud
{
	int fc;
	char s1[20];
public:
	void getdata();
	void putdata();
};
void medical::putdata()
{
	get();
	cout<<"\n enter the faculty code and subject name:";
	cin>>fc>>s1;
}
void medical::putdata()
{
	put();
	cout<<"\n faculty code :"<<fc<<"\t"<<"subject name :"<<s1;
}
void main()
{
	art a;
	clrscr();
	cout<<"\n arts student";
	a.getinfo();
	a.putinfo();
	cout<<"\n faculty code :"<<fc<<"\t"<<"subject name :"<<s2;
	medical m;
	cout<<"\n medical studend";
	m.getdata();
	m.putdata();
	getch();
}