#include<iostream.h>
#include<conio.h>
void main()
{
char c;
int isLowercaseVowel,isUppercaseVowel;
cout<<"enter the character";
cin>>c;
isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(isLowercaseVowel||isUppercaseVowel)
{
cout<<"vowel";
}
else
{
cout<<"constant";
}
getch();
}
