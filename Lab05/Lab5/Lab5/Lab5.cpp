
#include <iostream>
#include <string>

using namespace std;

void printMessage(int& a)
{
    a = a + 30;
    cout << "TEST LAB" << endl;
    cout << "Thr value of a is" << a << endl;

}

int main()
{
    int a = 10;
    printMessage(a);

    return 1;

}
