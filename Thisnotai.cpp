#include <iostream>
using namespace std;

int sumMatrix(int** matrix, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int rows = 3, cols = 3;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout<< matrix[i][j]<<" ";
        }
        cout << endl;
    }


    cout << "sumMatrix " << sumMatrix(matrix, rows, cols) << endl;

}
