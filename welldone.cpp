#include<iostream.h>
#include<conio.h>

void printMessage(int);

void main()
{
    int n;
    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    printMessage(n);

    getch();
}

void printMessage(int times)
{
    for(int i = 0; i < times; i++)
    {
        cout << "\nWell Done";
    }
}
