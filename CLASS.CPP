#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
		char sname[20];
		char city[20];
	public:
		void get();
		void put();
};
void student::get()
{
	cout<<"enter rollno"<<endl;
	cin>>rollno;
	cout<<"enter student name"<<endl;
	cin>>sname;
	cout<<"enter city"<<endl;
	cin>>city;
}
void student::put()
{
	cout<<rollno<<"\t\t"<<sname<<"\t\t"<<city<<endl;
}
void main()
{       int i;
	clrscr();
	student s[3];
	 for(i=0;i<3;i++)
	 {
	    s[i].get();
	  }
	  cout<<"***********************************************"<<endl;
	  cout<<"rollno\t\tsname\t\tcity"<<endl;
	  cout<<"***********************************************"<<endl;
	  for(i=0;i<3;i++)
	  {
	     s[i].put();
	  }

	  getch();
}