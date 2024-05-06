/*
Author : Mihir Raj Singh
Title : Character Identification
Date & Time : 2023-12-30 12:53:47
*/

/*

? 97+ 25 - (a to z)
? 65 + 25 - (A to Z)
? 48 + 9 - (0 to 9)

*/

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cin >> ch;

    if (ch >= 0 && ch <= 127)
    {
        cout << "ASCII value is loading . . . . .\n ";
        if (ch >= 97 && ch <= 122)
        {
            cout << ch << " is a lowercase character.\n ";
            cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
        }
        else if (ch >= 65 && ch <= 90)
        {
            cout << ch << " is a upercase character.\n ";
            cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
        }
        else if (ch >= 48 && ch <= 57)
        {
            cout << ch << " is a number character.\n ";
            cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
        }
        else
        {
            cout << ch << " is a special character.\n ";
            cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
        }
    }
    else
    {
        cout << ch << " Out of range of ASCII values.\nTry again with different output.\n";
    }
    return 0;
}