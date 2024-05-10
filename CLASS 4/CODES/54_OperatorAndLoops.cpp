/*
Author : Mihir Raj Singh
Title : Operator
Date & Time : 2024-05-10 20:47:13
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "---------------Relational Operator Starts Here------------------------" << endl;
    cout << "(2 && 3) = " << (2 && 3) << endl;
    cout << "(2 && 0) = " << (2 && 0) << endl;
    cout << "(2 || 1) = " << (2 || 1) << endl;
    cout << "(2 || 0) = " << (2 || 0) << endl;
    cout << "(!0) = " << !0 << endl;

    cout << endl;

    cout << "---------------Bitwise Operator Starts Here------------------------" << endl;
    cout << "(2 & 3) = " << (2 & 3) << endl;
    cout << "(2 | 3) = " << (2 | 3) << endl;
    cout << "(~2) = " << (~2) << endl;
    cout << "(2 ^ 3) = " << (2 ^ 3) << endl;
    cout << "(4 << 2) = " << (4 << 2) << endl;
    cout << "(4 >> 2) = " << (4 >> 2) << endl;

    cout << endl;

    cout << "---------------Increment & Decrement Starts Here------------------------" << endl;
    int value = 2;
    cout << "(++value) = " << ++value << endl; // 3
    int secondValue = value++;
    cout << "(++value) = " << ++value << endl;         // 5
    cout << "(secondValue) = " << secondValue << endl; // 3
    // Decrement same case

    /*
        int i = 1;
        int n = 4;

        for (;;)
        {
            if (i <= n)
            {
                cout << i << endl;
            }
            i++;
        }
        Rukna kaha pr hai? -> isliye infinite loop me jayega
    */
    cout << "---------------For Loop Magic------------------------" << endl;
    int i = 1;
    int n = 5;

    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
            i++;
        }
        else
        {
            break;
        }
    }
    cout << "---------------Continue Magic------------------------" << endl;

    for (int num = 1; num <= 5; num++)
    {
        if (num == 4)
        {
            continue;
        }
        cout << num << endl;
    }

    return 0;
}