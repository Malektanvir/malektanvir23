#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter three no.s to find biggest ";
	cin>>a>>b>>c;

	if(a>b && a>c)
	{
		cout<<"A is biggest "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"B is biggest "<<b;
	}
	else
	{
		cout<<"C is biggest "<<c;
	}
	getch();
}