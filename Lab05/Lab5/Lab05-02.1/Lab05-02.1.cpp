#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
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



	int max = maxOfThree(a, b, c);
	cout << "Maximum value is: " << max << endl;

	return 0;
}
