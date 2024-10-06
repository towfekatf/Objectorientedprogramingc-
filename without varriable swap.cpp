#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:Swapping numbers without using  third varriable\n";

 int num1, num2;
 cout<<"Enter the first number: ";
 cin>>num1;
 cout<<"Enter the second number: ";
 cin>>num2;
 cout<<"Before swapping: "<<endl;
 cout<<"1st number: "<<num1<<endl;
 cout<<"2nd number: "<<num2<<endl;

 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;

 cout<<"\nAfter swapping: "<<endl;
 cout<<"1st number: "<<num1<<endl;
 cout<<"2nd number: "<<num2<<endl;
 getch();
}
