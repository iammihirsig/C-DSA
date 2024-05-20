/*
Author : Mihir Raj Singh
Title : Functions
Date & Time : 2024-05-17 21:11:36
*/
#include <iostream>
using namespace std;

int printSum(int a, int b)
{
    return a + b;
}

int main()
{
    int result = 0;
    result = printSum(2, 3);
    cout << result;
    return 0;
}

/*
#include <iostream>
using namespace std;

int printSum()
{
    int a, b; // local of printSum
    cin >> a >> b;
    return a + b;
}

int main()
{
    int result = 0;
    result = printSum();
    cout << result;
    return 0;
}

*/
// --------------------------------------------------------------------------
/*
#include <iostream>
using namespace std;

// Function Declaration
void printName(); // compiler ye printName name ka ek function hai bd me milega tumko error mt dena

int main()
{
    printName(); // Function Calling
    return 0;
}

// Function Definition
void printName()
{
    cout << "My Name Is Mihir" << endl;
}
*/