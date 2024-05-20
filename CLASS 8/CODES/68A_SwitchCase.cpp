/*
Author : Mihir Raj Singh
Title : exit(0) usecase;
Date & Time : 2024-05-17 20:41:48
*/

#include <iostream>
using namespace std;

int main()
{

    int age;
    cin >> age;

    while (1)
    {
        if (age > 12)
        {
            cout << "good" << endl;
            exit(0);
        }
        cout << "loop ke bahar hai" << endl;
    }
    cout << "last stage pe hai" << endl;
    return 0;
}