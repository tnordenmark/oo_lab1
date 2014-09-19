/*  File:       TestComplex.cpp
    Topic:    client program for class Complex
    Date:       2001-09-22/ orjste */

#include <iostream>

#include "Complex.h"

using namespace std;

int main() {

    Complex c0, c1(1,1), c2(2,2);
    Complex c3(c1 + c2);

    cout << c0 << ' ' << c1 << ' ' << c2 << ' ' << c3 << endl;
    c3 = c2 * c1;

    cout << c3 << endl;

    cout << "Enter re and im:";
    cin >> c0;
    cout << c0 << endl;

    system("pause");
    return 0;
}
