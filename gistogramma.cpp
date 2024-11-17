#include <iostream>
using namespace std;

//создание массива со значениями от 1 до 9
int* CAR(int* arr, int size_A) {
    //srand(time(0));
    for (int i = 0; i < size_A; i++) {
        arr[i] = rand() % 10;
    }
    return arr;

}


//вывод массива зелёненьким
void arryviwe(int* arr, int size_A) {
    for (int i = 0; i < size_A; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << endl;
}



void vivearr(int** arr, int rows, int n) {
    std::cout << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n;j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << endl;
    }
}





int main()
{
    int size, sort;
    size = 20;
    //cin >> size;

    int* array = new int[size];
    CAR(array, size);
    arryviwe(array, size);

    int okey = size / 2;
    int* up = new int[okey];

    for (int i = 0; i < okey; i++) {
        int x = 0;
        for (int j = 0; j < size; j++) {
            if (i == array[j]) {
                x = x + 1;
            }

        }
        up[i] = x;
    }
    

    int rows = 0;
    for (int i = 0; i < okey ; i++) {
        if (rows < up[i]) {
            rows = up[i];
        }
    }

    int n = okey;
    //  n - количество значений

    int** arr = new int* [rows];

    for (int i = 0; i < rows;i++) {
        arr[i] = new int[n];
    }


    for (int i = 3; i > -1; i--) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
            //arr[номер массва] [номер значения массва]
        }

    }

    int j = 0;
    for (int x = 0; x < 10; x++) {
        int k = up[x];
        int i = 3;
        for (int z = k;z > 0; z--) {
            arr[i][j] = 1;
            i--;
            
        }  
        j++;
    }

    std::cout << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n;j++) {
            if (arr[i][j] == 0) {
                std::cout << "  ";
            }
            else {
                std::cout << "* ";
            }
        }
        std::cout<<" " << endl;
    }
    for (int i = 0; i < 10; i++) {
        cout << i<< " ";
    }

    std::cout << endl;
}
