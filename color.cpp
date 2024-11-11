// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <ctime>
#include "windows.h"
#include <stdlib.h>
using namespace std;

int[] nextColor(int arr[9]) {
    swap(arr[0],arr[8]);

    for (int i = 1; i < 7; i++) {
        arr[i + 1] = arr[i];
    }

    return arr;
}

int main()
{
    int zxc = rand();

    int arr[9]{ 40,41,42,43,44,45,46,47,48 };



    for (int j = 0; j < 100; j++) {
        for (int i = 40 + j; i < 47 ; i++) {
            string color = to_string(i);
            string num = to_string(zxc);
            string ccl = "\033[" + color + "m";
            cout << ccl << num;
            Sleep(100);

        }
        system("CLS");
        if (j == 8) {
            j = 0;
        }
    }
}
