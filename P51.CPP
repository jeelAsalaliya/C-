#include<iostream.h>
#include<conio.h>

 int sum(int,int);
 int main()
 {
  int x,y,z;
  cout<<"enter first number:";
  cin>>x;
  cout<<"enter second number:";
  cin>>y;
  z=sum(x,y);
  cout<<"\n sum is:"<<z;
  return 0;
 }
  int sum(int a,int b)
  {
   clrscr();
   int total;
   total=a+b;
   return total;
 }
