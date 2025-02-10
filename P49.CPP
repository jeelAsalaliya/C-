#include<iostream.h>
#include<conio.h>

class static2
{
 int number;
 static int count;
 public:

 void getdata()
 {

  number=++count;
 }
 void putdata()
 {
  cout<<"\n data member=="<<number;
  cout<<"\n data static="<<count;
 }
 static void display()
 {
  cout<<"\n static data=="<<count;
 }
};
 int static2::count;
 void main()
 {
  clrscr();
  static2 a,b;
  a.getdata();
  b.getdata();
  a.putdata();
  b.putdata();
  static2::display();
  getch();
 }