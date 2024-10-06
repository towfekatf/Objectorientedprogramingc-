#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    float basicsalary, deductions, taxRate;
     cout<<"Name: Towfeka Benta towhid\nID:11200120427\nTask:Basic salary calculation by using c++\n";


    cout << "Enter basicsalary: ";
    cin >> basicsalary;

    cout << "Enter deductions: ";
    cin >> deductions;

    cout << "Enter tax rate (in percentage): ";
    cin >> taxRate;

    float taxableIncome = basicsalary - deductions;
    float taxAmount = taxableIncome * (taxRate / 100);
    float netSalary = taxableIncome - taxAmount;

    cout << "Net Salary: $" << netSalary << endl;

    getch();
}
