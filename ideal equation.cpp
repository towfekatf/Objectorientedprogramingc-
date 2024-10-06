#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,x,y;
     cout<<"Name: Towfeka Benta towhid\nID:11200120427\nTask:Quadaratic equation calculation by using c++\n";
    cout<<"Enter the value of a,b,c:";
    cin >>a>>b>>c;


    x=((-b+(sqrt(b*b-4*a*c)))/2*a);
    y=((-b-(sqrt(b*b-4*a*c)))/2*a);

    cout<<"The value of the quadaratic equation :"<< x <<endl;
    cout<<"The value of the quadaratic equation :"<<y;

    getch();

}
