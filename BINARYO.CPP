//program to demonstrate binary(+)operator overloading without using friend fun
#include<iostream.h>
#include<conio.h>
class binary
{
 private:
	int k,b;
 public:
	void get();
	binary operator +(binary &b);
	void show();
 };
 void binary::get()
 {
  cout<<"enter k=";
  cin>>k;
  cout<<"enter b=";
  cin>>b;
 }
 binary binary::operator +(binary &B)
 {
  binary B3;
  B3.k=k+B.k;
  B3.b=b+B.b;
  return(B3);
 }
 void binary::show()
 {
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"addition of B1&B2 is="<<endl;
	cout<<"value of k="<<k<<endl;
	cout<<"value of b="<<b<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
 }
void main()
 {
 clrscr();
 binary B1,B2,B4;
 B1.get();
 B2.get();
	 B4=B1+B2;
 B4.show();
 getch();
 }









































































































































































