#include <iostream>
using namespace std;

// ฟังก์ชันหา MAX ของ 3 ค่า
int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

// ฟังก์ชันหา MIN ของ 3 ค่า
int minOfThree(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;

    int maxValue = maxOfThree(a, b, c);
    int minValue = minOfThree(a, b, c);

    cout << "Maximum value is: " << maxValue << endl;
    cout << "Minimum value is: " << minValue << endl;

    return 0;
}
