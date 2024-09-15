// Lab_02.cpp
// < Грушевський Іван >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.4

#include <iostream>
#include <cmath>



using namespace std;

int main()
{
    double a;
    double z1;
    double z2;

    cout << "Type angle alpha in radians:" << endl;
    cout << "a = "; cin >> a;

    z1 = ( sin(a) + sin(5*a) - sin(3*a) ) / ( cos(a) - cos(3*a) + cos(5*a) );
    z2 = tan(3*a);

    cout << endl;
    cout << "- - - Result - - -" << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cout << "Branch: Master" << endl;
    cout << "CHANGE ONE" << endl;
    cout << "CHANGE TWO" << endl;

    cin.get();
    return 0;

}
