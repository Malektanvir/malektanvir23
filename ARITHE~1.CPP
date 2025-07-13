#include<iostream.h>
#include<conio.h>

int add(int ,int);
int sub(int,int);
int multi(int,int);
float div(int,int);

void main()
{
	int a,b,ans;
	clrscr();
	cout<<"Enter two no.s \n";
	cin>>a>>b;
	ans=add(a,b);
	cout<<"\n ans  is "<<ans;
	ans=sub(a,b);
	cout<<"\n ans  is "<<ans;
	ans=multi(a,b);
	cout<<"\n ans  is "<<ans;
	ans=div(a,b);
	cout<<"\n ans  is "<<ans;
	getch();
}
float div(int a,int b)
{
    int ans;
    ans=a/b;
    return ans;
}
int multi(int a,int b)
{
    int ans;
    ans=a*b;
    return ans;
}
int sub(int a,int b)
{
	int ans;
	ans=a-b;
	return ans;
}
int add(int a,int b)
{
    int ans;
    ans=a+b;
    return ans;
}