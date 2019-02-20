#include<iostream.h>
#include<conio.h>
void main()
{
int a[25],n,i,k,sum=0;
cout<<"array size:\t";
cin>>n;
cout<<"how many element want sum";
cin>>k;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
cout<<sum;
getch();
}
