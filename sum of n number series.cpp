#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:printing the sum of n number\n";


    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}






