#include<iostream.h>
#include<conio.h>
void main()
{
int no,a=0;
clrscr();
cout<<"enter any number";
cin>>no
while(no>0)
{
no=no/10;
a++;
}
cout<<"number of digits are"<<a;
getch();
}
