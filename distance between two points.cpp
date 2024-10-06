#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
  float x1,x2,y1,y2,D;
  cout<<"Name: Towfeka Benta towhid\nID:11200120427\nTask:Distance between two points by using c++\n";
  cout<<"Enter the value of first quardinates:";
  cin>>x2>>x1;

  cout<<"Enter the value of second quardinates:";
  cin>>y2>>y1;

  D = sqrt((x2-x1*(x2-x1))+((y2-y1)*(y2-y1)));
  cout<<"The distance is between two points are:"<<D;


    getch();
}
