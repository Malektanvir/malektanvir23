#include<iostream.h>
#include<conio.h>
#include<stdio.h> // for gets()

float calculateBill(int);

void main()
{
    char name[50];
    int units;
    float bill;
    clrscr();

    cout << "Enter your name: ";
    gets(name);

    cout << "Enter number of units consumed: ";
    cin >> units;

    bill = calculateBill(units);

    cout << "\nElectricity Bill";
    cout << "\n------------------";
    cout << "\nName: " << name;
    cout << "\nUnits Consumed: " << units;
    cout << "\nTotal Charges: Rs. " << bill;

    getch();
}

float calculateBill(int u)
{
    float amount;

    if(u <= 100)
        amount = u * 0.60;
    else if(u <= 300)
        amount = (100 * 0.60) + ((u - 100) * 0.80);
    else
        amount = (100 * 0.60) + (200 * 0.80) + ((u - 300) * 0.90);

    // Apply surcharge if amount > 300
    if(amount > 300)
        amount += amount * 0.15;

    // Minimum bill Rs. 50
    if(amount < 50)
        amount = 50;

    return amount;
}
