#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter two no.s \n ";
	cout<<"\nBefore swap";
	cin>>a>>b;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"\nAfter swap"<<a;
	cout<<"\n"<<b;
	getch();
}