// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int** Newarray(int** arr,int rows, int n){
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[n];
    }
    return arr;
}
void vivearr(int** arr, int rows, int n) {
    cout << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n;j++) {
            cout << arr[i][j] << " ";
       }
        cout << endl;
    }
}

int main()
{
    int n;
    int rows;
    
    
    for (int num = 0; num < 5; num++) {
        switch (num) {
        case(0):
            rows = 3;
            n = 3;
            break;
        case(1):
            rows = 5;
            n = 8;
            break;
        case(2):
            rows = 10;
            n = 1;
            break;
        case(3):
            rows = 4;
            n = 4;
            break;
        case(4):
            rows = 7;
            n = 6;
            break;
        }
        int** array = new int* [rows];
        int** matrix = new int* [rows];
        Newarray(array, rows, n);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < n;j++) {
                array[i][j] = rand() % 10;
            }
        }
        vivearr(array, rows, n);
        Newarray(matrix, n, rows);
 

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < n;j++) {
                matrix[j][i] = array[i][j];
            }
        }
        cout << endl;
        vivearr(matrix, n, rows);
    }
}


