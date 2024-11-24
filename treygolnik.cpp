

#include <iostream>
#include <math.h>
using namespace std;

void viwe(int* arr, int size) {
	for (int i = 0;i < size; i++) {
		cout << " " << arr[i];
	}
	cout << endl;
}

int fact(int x) {
	int n = 1;
	for (int i = 1; i < x+1; i++) {
		n = n * i;
	}
	return n;
}

int fact_a(int x) {
	if (x > 1) {
		return x * fact_a(x-1);
	}
	return 1;
}

int main()
{
	int size = 10;
	for (int i = 2; i < size + 1; i++) {
		int* arr = new int[i+1];
		for (int z = 1; z < i-1; z++) {
			arr[z] = fact_a((i - 1)) / (fact_a(z) * fact_a((i - 1) - z));

			//cout << " z = " << z << " i-1 = " << i-1 << endl;
			//cout << fact_a(i ) / (fact_a(z) * fact_a(i  - z));
			//cout<<"fact : " << fact_a(i ) / (fact_a(z) * fact_a(i  - z))<<endl;
			//cout << "fact : " << fact((i - 1)) / (fact(z) * fact((i - 1) - z)) << endl;

		}
		arr[0] = 1;
		arr[i - 1] = 1;
		viwe(arr, i);

	}
	cout << endl;
	//cout << fact(2) / (fact(1) * fact(2 - 1));
}

