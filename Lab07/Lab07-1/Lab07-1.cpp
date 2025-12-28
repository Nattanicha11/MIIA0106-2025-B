#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    cout << "value of x is: " << x << endl;
    cout << "value of p is: " << *p << endl;

    return 0;
}
