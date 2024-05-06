/*
Author : Mihir Raj Singh
Title : Simple Interest
Date & Time : 2023-12-29 13:55:40
*/

#include <iostream>
using namespace std;

int main()
{

    double p, r, t;

    cout << "Enter the values of P, R, T: ";
    cin >> p >> r >> t;
    cout << "Simple Interest is: " << (p * r * t) / 100;

    return 0;
}