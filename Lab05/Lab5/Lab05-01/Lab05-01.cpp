
#include <iostream>
#include <string>

using namespace std;
double circleArea(double radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    double radius;
    double result;

    cout << "Enter the raduis:";
    cin >> radius;

    result = circleArea(radius);
    cout << "the area of the circle is :" << result << endl;

    return 1;

}
