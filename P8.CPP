#include<iostream.h>
#include<conio.h>

 void main()
 {
  int n,range;
  clrscr();

  cout<<"enter an interger:";
  cin>>n;
  cin>>range;

  for(int i=1;i<=range;i++)
  {
   cout<<n<<'*'<<i<<'='<<n*i<<endl;
  }
  getch();
}