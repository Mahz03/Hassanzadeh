#include <iostream>
using namespace std;
double sqrt0(double x) {
	double i = 0, buffer = 1;
	for (; buffer > 0.000000001 && i * i < x; buffer /= 2)
	{
		while ((i + buffer) *( i + buffer )< x ) {
			i += buffer;
		}
	}
	return i;
}
double power(double x, double y) {
	double r = 1;
	double i = 0;
	double buffer = 1;
	double gh = 0;
	for (; buffer > 0 && i < y; buffer /= 2)
	{
		for (; i < y - buffer; i += buffer)
		{
			r = r * x;
		}
		x =sqrt0(x);
	}
	return r;
}
int main()
{
	double x, y;
	char p;
	cin >> x;
	cin >> p;
	cin >> y;
	switch (p)
	{
	case '+':
		cout << x + y;
		break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	case '/':
		cout << x / y;
		break;
	case '%': 
		cout << (long)x % (long)y;
		break;
	case '^':
		cout << power(x,y);
		break;
	default:
		cout << "error";
		break;
	}
}