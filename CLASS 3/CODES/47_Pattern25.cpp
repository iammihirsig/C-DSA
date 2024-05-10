/*
Author : Mihir Raj Singh
Title : Pattern Best Approach - Sometime Change Loop (1 to n) to (n to 1).

! TAGDA - HOMEWORK
                1   2   3   4   5   5   4   3   2   1
                1   2   3   4   *   *   4   3   2   1
                1   2   3   *   *   *   *   3   2   1
                1   2   *   *   *   *   *   *   2   1
                1   *   *   *   *   *   *   *   *   1


Date & Time : 2023-12-31 13:04:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        // For 1st
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }

        // For 2nd & 3rd Stars
        for (int m = 0; m < 2; m++)
        {
            for (int k = 1; k <= i; k++) // Chnage k value to up and see the fun !!
            {
                cout << "* ";
            }
        }

        // For 2nd
        // for (int k = 2; k <= i; k++) // Chnage k value to up and see the fun !!
        // {
        //     cout << "* ";
        // }

        // For 3rd
        // for (int k = 2; k <= i; k++) // Chnage k value to up and see the fun !!
        // {
        //     cout << "* ";
        // }

        // For 4th
        // for (int l = n - i + 1; l >= 1; l--) // yaha revise kro
        // {
        //     cout << l << " ";
        // }

        // For 4th
        for (int l = 0; l < n - i; l++) // yaha revise kro
        {
            cout << n - (i + l) << " ";
        }

        cout << endl;
    }

    return 0;
}