#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    cout << "Name:Towfeka Benta towhid\nID:11200120427\nTask:Find the volume of a cylinder\n";
float r,h,v;

cout <<"Enter the height of the cylinder: ";

cin >> h;

cout <<"Enter the radius of the cylinder: ";

cin >> r;

 v = 3.1416 * (r * r) * h;

 cout <<"The volume of the cylinder is: " << v <<endl;

    getch();
}

