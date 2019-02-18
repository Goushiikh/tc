#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
cout<<"enter a b and c";
cin>>a>>b>>c;
if(a<b)
{
if(b<c)
{
cout<<"c is greater";
}
else
{
cout<<"b is greater";
}
}
elseif(a<c)
{
cout<<"c is graeter";
}
else
{
cout<<" a is greater";
}
getch();
}

