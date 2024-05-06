/*
Author : Mihir Raj Singh
Title : What Happen When We Store Large Int Value In Char
Date & Time : 2023-12-29 17:43:42
*/

#include <iostream>
using namespace std;

int main()
{

    char ch = 123456;
    cout << ch << endl;

    /*
    ? The output will be @ , because max value that char can store is 1 byte = 8 bit = 2 pe power 8 - 1. which is equal to 255 excluding 0.

    ? However, since a char can only hold values from -128 to 127 (or 0 to 255 if it's an unsigned char), the value 123456 will overflow and wrap around. The actual value that will be stored in ch is the result of the overflow, which is equivalent to (123456 % 256). In this case, it's 64. And ASCII value of 64 is @.
    */

    char ch1 = 123;
    cout << ch1 << endl;

    /*
   ? The output will be { , because max value that char can store is 1 byte = 8 bit = 2 pe power 8 - 1. which is equal to 255 excluding 0.

   ? However, since a char can only hold values from -128 to 127 (or 0 to 255 if it's an unsigned char), the value 123 will overflow and wrap around. The actual value that will be stored in ch is the result of the overflow, which is equivalent to (123 % 256). In this case, it's 123. And ASCII value of 123 is {.
   */

    return 0;
}
