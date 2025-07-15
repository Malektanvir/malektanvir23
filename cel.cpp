#include<iostream.h>
#include<conio.h>

float convertToFahrenheit(float);

void main()
{
    float celsius, fahrenheit;
    clrscr();

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = convertToFahrenheit(celsius);

    cout << "\nTemperature in Fahrenheit is: " << fahrenheit;

    getch();
}

float convertToFahrenheit(float c)
{
    float f;
    f = (c * 9 / 5) + 32;
    return f;
}
