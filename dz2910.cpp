#include <string>
#include <iostream>
#include <math.h>
using namespace std;

void romb(float& y, float& x)
{
	if ((y >= -0.5*x - 1 && y <= 0.5*x + 1) or (1 > pow(y,2) + pow(x, 2) && x>=0)) {
		cout << "verno";
	}
	else {
		cout << "not verno";
	}
}
/*void romb(float& y, float& x)
{
	if ((y >= 2 * x - 1) && (y <= 2 * x + 1)&& (y >= -2 * x - 1) && (y <= -2 * x + 1)) {
		cout << "verno";
	}
	else {
		cout << "not verno";
	}
}
*/

int main()
{
	float y;
	float x;
	cin >> y >> x;
	romb(y, x);
}
