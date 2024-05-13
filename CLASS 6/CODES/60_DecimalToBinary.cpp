/*
Author : Mihir Raj Singh
Title : Decimal To Binary
Date & Time : 2024-05-13 19:51:17
*/

// Complete this code for the negative value

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int binary = 0;
    int decimal, i = 0, lastBit;

    cout << "Decimal Dedo: ";
    cin >> decimal;

    while (decimal)
    {
        lastBit = decimal & 1;
        decimal = decimal >> 1;
        binary = (lastBit * pow(10, i) + binary);
        i++;
    }

    cout << "Binary Lelo: " << binary << endl;

    return 0;
}