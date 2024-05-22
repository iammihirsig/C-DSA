/*
Author : Mihir Raj Singh
Title : Array intro
Date & Time : 2024-05-21 20:14:08
*/

#include <iostream>
using namespace std;

int main()
{

    int roll[6]; // Declare an array, int type.

    cout << roll[0] << endl; // Garbage Value

    // Initialise roll[0];

    roll[0] = 14;
    cout << "1st Roll Is: " << roll[0] << endl;
    // cin << roll[0];

    // Printing array
    //  cout << roll[0] << " " << roll[1] << " " << roll[2] << " " << roll[3] << " " << roll[4] << " " << roll[5] << " " << endl;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << roll[i] << " ";
    // }
    // cout << endl;

    // New Array & Initialise with 0;
    // int number[6] = {0};
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << number[i] << " ";
    // }
    // cout << endl;

    // New Array var
    // int random[6] = {1, 2, 3, 4, 5, 6};
    // int random[6] = {1};
    // int random[6] = {1,2};
    // int random[6]; // Custom Value
    // fill(random, random + 6, 0);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << random[i] << " ";
    // }
    // cout << endl;

    // Inputting multiple diff value in array
    // Value lelo
    // for (int i = 0; i < 6; i++)
    // {
    //     cin >> random[i];
    // }
    // cout << endl;

    return 0;
}