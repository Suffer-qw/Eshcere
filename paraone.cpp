int main()
{
	int mat[20] = { 3, 5, 1, 6, 7, 6, 8, 6, 9, 4, 9, 5, 2, 8, 8, 5, 4, 5, 9, 4 };
	int victori[10];

	for (int i = 0; i < 10; i+=1) {
		int zero = 0;
			for (int j = 0; j < 20; j++) {
				if (i == mat[j]) {
					zero++;
					
				}
			}
			if (zero > 1) {
				cout << i << "(" << zero << ")"<< ":";
				for (int k = 0; k < zero; k++) {
					cout << "*";
				}
				cout << endl;
			}
	}
	cout << endl;
	for (int i = 9; i > -1; i--) {
		cout << mat[i] << endl;
	}

	
}
