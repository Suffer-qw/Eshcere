// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <ctime>
#include "windows.h"
#include <stdlib.h>
using namespace std;

int main()
{
    int zxc = 12;

    int arr[14]{ 40,41,42,43,44,45,46, 100, 101, 102, 103, 104, 105,106};


    while (true) {
        for (int i = 0;i < 14; i++) {
            for (int j = 0; j < 14; j++) {
                string color = to_string(arr[j]);
                string num = to_string(zxc);
                string ccl = "\033[" + color + "m";
                Sleep(13);
                cout << ccl << num << "(" << color  << ")";
            }
            for (int x = 13; x > 0; x--) {
                if (x + 1 == 14) {
                    swap(arr[0], arr[13]);
                    continue;
                }
                swap(arr[x + 1], arr[x]);


            }

            cout << "\033[40m" << " | " << endl;
            



        }
        system("CLS");
    }
}
