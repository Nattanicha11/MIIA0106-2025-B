#include <iostream>
using namespace std;

// Call by Value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Call by Value
    swapByValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    // Call by Reference
    swapByReference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}
