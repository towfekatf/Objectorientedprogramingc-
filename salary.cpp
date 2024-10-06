#include<iostream>
using namespace std;
int main(){
    cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:Gross salary of en employee\n";

    float basic_salary,HRA,DA,gross_salary;
    cout<<"enter the basic salary of the employee:";
    cin>>basic_salary;
    if(basic_salary<1800){
        HRA=0.15*basic_salary;
        DA=0.85*basic_salary;
    }
    else{
        HRA=500;
        DA=0.89*basic_salary;
    }
    gross_salary=basic_salary+HRA+DA;
    cout<<"The gross salary of the employee is :"<<gross_salary;




}
