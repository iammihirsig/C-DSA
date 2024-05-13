/*
Author : Mihir Raj Singh
Title : Binary To Decimal
Date & Time : 2024-05-13 19:50:51
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int binary, decimal = 0, i = 0, lastDigit;

    cout << "Binary Dedo: ";
    cin >> binary;

    while (binary)
    {
        lastDigit = binary % 10;
        binary = binary / 10;
        decimal = (lastDigit * pow(2, i) + decimal);
        i++;
    }

    cout << "Decimal Lelo: " << decimal << endl;

    return 0;
}