/*
Author : Mihir Raj Singh
Title : Is Prime ?
Date & Time : 2023-12-29 14:25:04
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n, squareroot = 0;
    bool isPrime = true;

    cin >> n;

    if (n == 1)
    {
        cout << "1 is neither prime nor composite.\n";
        return 0;
    }

    else
    {
        squareroot = sqrt(n);
        for (int i = 2; i <= squareroot; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime == true)
    {
        cout << n << " is a Prime Number.\n";
    }
    else
    {
        cout << n << " is a not a Prime Number.\n";
    }

    return 0;
}