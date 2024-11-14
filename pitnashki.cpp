// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int** create(int** arr, int rows, int size) {
	// создание массива, передаём двойную ссылку, а затем созаем rows сторк, по n значениям
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[size];
	}
	return arr;
}

void viwe(int** arr, int rows, int size) {
	//вывводим массив
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}

int** play(int** arr, int rows, int size, string wasd) {

	// движение

	//двигаем ноль влево
	if (wasd == "a") {
		for (int i = 0; i < rows; i += 1) {
			for (int j = 0; j < size - 1; j++) {
				if (arr[i][j + 1] == 0) {
					swap(arr[i][j], arr[i][j + 1]);
				}

			}
		}
	}

	//двигаем ноль вправо
	if (wasd == "d") {
		for (int i = 0; i < rows; i += 1) {
			for (int j = 0; j < size; j++) {
				if (arr[i][j - 1] == 0) {
					swap(arr[i][j], arr[i][j - 1]);
					break;
				}

			}
		}
	}

	//двигаем ноль вверх
	if (wasd == "w") {
		for (int i = 0; i < rows - 1; i += 1) {
			for (int j = 0; j < size; j++) {
				if (arr[i + 1][j] == 0) {
					swap(arr[i][j], arr[i + 1][j]);
					break;
				}

			}
		}
	}

	//двигаем ноль вниз
	if (wasd == "s") {
		int y = 0;
		for (int i = 0; i < rows - 1; i += 1) {
			for (int j = 0; j < size; j++) {
				if (arr[i][j] == 0) {
					swap(arr[i + 1][j], arr[i][j]);
					y++;
				}

			}
			if (y == 1) {
				break;
			}
		}
	}

	return arr;
}




int main()
{
	int rows = 4;
	//rows - строки (количество массивов)

	int n = 4;
	//n - количество значений

	int** field = new int* [rows];
	//игровое поле

	int rand[16] = { 3, 11, 1, 15, 6, 9, 8, 10, 12, 4, 5, 13, 2, 7, 0, 3 };
	//рандомность поля

	int z = 0;
	// переменная заполнения

	create(field, rows, n);
	//создаём массив


	//заполняем массив
	for (int i = 0; i < rows; i += 1) {
		for (int j = 0; j < n; j++) {
			field[i][j] = rand[z];
			z++;
		}
	}

	//выводим массив
	viwe(field, rows, n);

	cout << endl;

	string move;

	while (true) {
		cin >> move;

		play(field, rows, n, move);
		system("CLS");
		viwe(field, rows, n);
	}
}
