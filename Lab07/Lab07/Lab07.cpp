#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    cout << "address of x is " << &x << endl;
    cout << "value of x is " << x << endl;

   
    int* pt = &x;      
    *pt = 100;         

    cout << "address of pt is " << &pt << endl;
    cout << "value of pt (address it points to) is " << pt << endl;
    cout << "value pointed by pt is " << *pt << endl;
    cout << "value of x is " << x << endl;

    pt = &y;           
    *pt = 500;         

    cout << "value of y is " << y << endl;

    return 0;
}
