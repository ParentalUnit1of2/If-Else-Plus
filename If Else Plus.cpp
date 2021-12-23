#include <iostream>
using namespace std;

int main()
{
	// User enters the lengths of triangle (a,b,c)
	// Program should write out whether that triangle is 
	// equilateral, isoceles, scalene

	float a, b, c;

	cout << "a, b, c:";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "This is a equilateral triangle";
	else
	{
		if (a != b && a != c && b != c)
			cout << "This is a scalene triangle";
		else

			cout << "This is a isosceles triangle";
	}
	system("pause>0");
}
	




	