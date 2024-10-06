#include<iostream>
using namespace std;

int prime(int n) {

    if (n <= 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= n / 2; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, result;
    cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:prime number or not by user input\n";

    cout<<"enter a number:";
    cin >> n;
    result = prime(n);
    if (result) {
        cout << "prime number";
    } else {
        cout << "not prime number";
    }
    return 0;
}
