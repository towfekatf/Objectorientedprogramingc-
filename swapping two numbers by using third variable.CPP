#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
  cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:Swapping two numbers by using 3rd number by c++"<<endl;
  float num1,num2,tem;

  cout<<"Enter the first number:";
  cin>>num1;

   cout<<"Enter the second number:";
  cin>>num2;

  cout<<"Before swapping---"<<endl;
  cout<<"The first number is:"<<num1<<endl<<"The second number is:"<<num2;

  tem=num1;
  num1=num2;
  num2=tem;
  cout<<endl;

   cout<<"After swapping---"<<endl;
    cout<<"The first number is:"<<num1<<endl<<"The second number is:"<<num2;

    getch();
}
