#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float p,r,t,si;
     cout<<"Name: Towfeka Benta towhid\nID:11200120427\nTask:simple interest calculation by using c++\n";

    cout<<"Enter the principle:";
    cin>>p;


    cout<<"Enter the rate:";
    cin>>r;

    cout<<"Enter the time";
    cin>>t;

    si=(p*r*t)/100;
    cout<<"The simple interest rate is:"<<si;


   getch();
}
