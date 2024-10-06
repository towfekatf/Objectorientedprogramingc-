#include <iostream>
using namespace std;

int fact(int a) {
    if (a == 1 || a == 0)
        return 1;
    else
        return (a * fact(a - 1));
}

int main() {
    int n;
     cout<<"Name:Towfeka Benta towhid\nID:11200120427\nTask:Krishnamurthy number or not\n";

    cout << "Enter any number: ";
    cin >> n;
    int temp = n;
    int sum = 0;
    int a;

    while (n > 0) {
        a = n % 10;
        sum += fact(a);
        n = n / 10;
    }


    if (temp == sum)
        cout << "krishnomurthy number";
    else
        cout << "Not krishnomurthy number";

    return 0;
}
