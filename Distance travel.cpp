#include<iostream>
#include<conio.h>
using namespace std;

int main()
    {
        cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:Find the distance traveled\n";
        float v,u,a, D;

        cout<<"Enter the initial velocity:";
        cin>>u;

        cout<<"Enter the final velocity:";
        cin>>v;

        cout<<"Enter the accelaration:";
        cin>>a;

        D=(u*u)-(v*v)/(2*a);
        cout<<"The distance is:"<<D<<endl;

        getch();

    }
