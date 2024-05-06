/*
Author : Mihir Raj Singh
Title : Valid Triangle Or Not
Date & Time : 2023-12-29 14:09:14
*/

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "Valid triangle.\n";
    }
    else
    {
        cout << "Not a valid triangle.\n";
    }

    return 0;
}
