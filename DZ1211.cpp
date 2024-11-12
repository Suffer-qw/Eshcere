// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int rows;
    // rows - количество массивов
    int n;
    //  n - количество значений
    
    cin >> rows >> n;
    int** arr = new int*[rows] ;
    // arr - 
    for (int i = 0; i < rows;i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand()%10;
            //arr[номер массва] [номер значения массва]
        }
    }
    //заполнение rows (n) массовов по m значений
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j]<< " ";
            //arr[номер массва] [номер значения массва]
        }
        cout << endl;
    }
    //вывод rows (n) массовов по m значений
    int z = 0;
    int ini = 0;
    // выводит индекс по arr[i]
    int inj = 0;
    // выводит индекс по arr[][j]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {
            
            if (z < arr[i][j]) {
                z = arr[i][j];
                ini = i;
                inj = j;
            }
        }
    }
    //находим большее значение 
    cout <<"HEVEN " << "loc rows: " << ini << " " << "loc n: " << inj << " " << "num: " << z << endl;
    cout << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {

            if (z > arr[i][j]) {
                z = arr[i][j];
                ini = i;
                inj = j;
            }
        }
 
    }
    //находим меньшее значение 

    cout << "LOW " << "loc rows: " << ini << " " << "loc n: " << inj << " " << "num: " << z << endl;
    cout << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {

            if (arr[i][j] == 0) {
                cout <<"zero loc: " << i << " " << j << endl;
            }
            //394-a 
            if (arr[i][j] % 2 == 0) {
                cout << "even element: " << i << " " << j << endl;
            }
        }

    }
    //394 Г , Б - НЕ ПОНЯЛ СУТЬ ЗАДАНИЯ
}

