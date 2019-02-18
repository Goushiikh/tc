#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"enter the number";
cin>>a;
if(a>=0)
{
if(a%2==0)
{
cout<<"the number is even";
}
else
{
cout<<"the number is odd";
}
}
else
{
cout<<"invalid";
}
getch();
}
