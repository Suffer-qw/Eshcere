#include <string>
#include <iostream>
#include <math.h>
using namespace std;

void romb(float &a, float &b)
{
	int yes = 0;
	if (a >= -1 && a <= 1) {
		yes = yes + 1;
	}
	if (b >= -0.5 && b <= 0.5) {
		yes = yes + 1;
	}
	if (yes == 1) {
		cout << "point in figyra";
	}
	else {
		cout << "not verno";
	}
}


int main()
{
	float y;
	float x;
	cin >> y >> x;
	romb(y, x);
}
