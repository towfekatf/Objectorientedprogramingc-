#include <iostream>
#include<conio.h>

using namespace std;
int main()
{
     cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:Convert temperature from farhenite to celcius\n";
    float frh, cel;


    cout << " Enter the temperature in Fahrenheit : ";
    cin >> frh;

    cel = ((frh * 5) - (5 * 32)) / 9;

    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Celsius : " << cel << endl;


    getch();
}
