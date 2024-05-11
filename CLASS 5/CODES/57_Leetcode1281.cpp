/*
Author : Mihir Raj Singh
Title : Subtract the product and sum of an integer
Date & Time : 2024-05-11 21:34:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, product = 1, lastDigit;

    cout << "N dedo meko: ";
    cin >> n;

    // Number ko alag karke sum and product calculate karenge

    while (n != 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        product = product * lastDigit;
        n = n / 10;
    }
    // cout << "Product: " << product << endl;
    // cout << "Sum: " << sum << endl;

    cout << (product - sum);

    return 0;
}

// int subtractProductAndSum(int n)
// {

//     int sum = 0, product = 1, lastDigit;

//     cout << "N dedo meko: ";
//     cin >> n;

//     // Number ko alag karke sum and product calculate karenge

//     while (n != 0)
//     {
//         lastDigit = n % 10;
//         sum = sum + lastDigit;
//         product = product * lastDigit;
//         n = n / 10;
//     }

//     return (product - sum);
// }