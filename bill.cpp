#include<iostream.h>
#include<conio.h>

float calculateBill(int);

void main()
{
    int units;
    float bill;
    clrscr();

    cout << "Enter total units consumed: ";
    cin >> units;

    bill = calculateBill(units);

    cout << "\nTotal electricity bill: Rs. " << bill;

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

    // Apply minimum bill of 50
    if(amount < 50)
        amount = 50;

    return amount;
}
