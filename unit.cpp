#include<iostream.h>
#include<conio.h>

float calculateBill(int);

void main()
{
    int units;
    float amount;
    clrscr();

    cout << "Enter number of units consumed: ";
    cin >> units;

    amount = calculateBill(units);

    cout << "\nTotal electricity bill: Rs. " << amount;

    getch();
}

float calculateBill(int u)
{
    float total = 0;

    if(u <= 100)
    {
        total = u * 0.60;
    }
    else if(u <= 300)
    {
        total = (100 * 0.60) + ((u - 100) * 0.80);
    }
    else
    {
        total = (100 * 0.60) + (200 * 0.80) + ((u - 300) * 0.90);
    }

    return total;
}
