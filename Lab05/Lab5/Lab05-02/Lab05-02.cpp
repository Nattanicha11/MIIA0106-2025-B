
#include <iostream>
#include <string>

using namespace std;
double rectArea(double width, double height)
{
    return width * height;
   
}

int main()
{
    double width, height;
    double result;

    cout << "Enter width:";
    cin >> width;

    cout << "Enter height:";
    cin >> height;

    result = rectArea (width, height);
    cout << "the area of the rectArea is :" << result << endl;

    return 1;

}
