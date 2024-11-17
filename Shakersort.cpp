// Shakersort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int* Shakersort(int* mas, int size) {
    int left = 0;
    int right = size - 1;

    bool swapped = true;

    while (swapped) {
        swapped = false;

        for (int i = left; i < right; i++) {
            if (mas[i] > mas[i + 1]) {
                int temp = mas[i + 1];
                mas[i + 1] = mas[i];
                mas[i] = temp;

                swapped = true;
            }
        }
    }
    return mas;
}



int main()
{
    int SIZE = 10;
    int* mas = new int [SIZE] {2, 1, 4, 5, 6, 4, 8, 4, 7, 9};

    for (int i = 0; i < SIZE; ++i) {
        cout << mas[i] << " ";
    }
    cout << endl;
    Shakersort(mas, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << mas[i] << " ";
    }
}

