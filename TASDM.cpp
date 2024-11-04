//TASDM
//Задания к контрольной: Разработка программныхмодулей


#include <iostream>
using namespace std;


int main()
{
	int nomer[16] = { 4 ,6, 12, 2, 13, 10, 11, 15, 9, 1, 14, 5, 16, 7, 3, 8 };
	int num[16] = { 61, 25, 62, 77, 2 ,39, 80, 85, 43, 69, 21, 82, 29, 46, 11, 14 };


	
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 15; j++) {
			if (num[j] < num[j + 1]) {
				int c = nomer[j];
				nomer[j] = nomer[j + 1];
				nomer[j + 1] = c;
				int b = num[j];
				num[j] = num[j + 1];
				num[j + 1] = b;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "  mesto : "<< num[i] << " nomer igroka " << nomer[i] << endl;
	}

}

