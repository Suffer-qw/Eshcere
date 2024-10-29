#include <string>
#include <iostream>
#include <math.h>
using namespace std;

void romb(float& y, float& x)
{
	int z=0;
	if ((y >= -0.5*x - 1 && y <= 0.5*x + 1 && x <= 1) or (1 >= pow(y,2) + pow(x, 2) && x>= 0 )) {
		z = z + 1;
	}
	cout << " ";
	if (y <= 1) {
		z = z + 1;
	}
	if (z == 2) {
		cout << "verno,";
	}
	else {
		cout << "not verno,";
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
	for (int i = 0; i < 5; i++) {
		switch (i) {
		case(0):
			y = -0.1;
			x = -2.5;
			break;
		case(1):
			y = 0.1;
			x = -1.5;
			break;
		case(2):
			y = 0.5;
			x = -0.5;
			break;
		case(3):
			y = 0.5;
			x = 1.5;
			break;
		case(4):
			y = 1.1;
			x = 0.5;
			break;
		}
		romb(y, x);
	}
	

	
}
