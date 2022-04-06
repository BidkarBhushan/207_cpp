#include<iostream.h>
#include<conio.h>

class demo
{
    private:
	    int count;

    public:
	   demo();
	   void print();
	   void inc();

};
demo::demo()
{
  cout<<"constractor called"<<endl;
  count=0;
}
void demo::print()
{
  cout<<count<<endl;
}

void demo::inc()
{
 count++;
}
void main()
{
   clrscr();
   demo d1;
   d1.print();
   d1.inc();
   d1.print();

   demo d2;
   d2.print();
   d2.inc();
   d2.print();
   d2.inc();
   d2.print();

  getch();
}




































































































































































