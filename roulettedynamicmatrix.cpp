// dzIDK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int** view(int** array, int cols, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return array;
}

int** full(int** array, int cols, int rows)
{
    int num = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = num;
            num++;
        }
    }

    return array;
}

int** create(int** array, int cols, int rows)
{
    for (int i = 0;i < rows; i++)
    {
        array[i] = new int[cols];
    }
    full(array, cols, rows);
    view(array, cols, rows);
    return array;
}

int** newcreate(int** array, int cols, int rows)
{
    for (int i = 0;i < rows; i++)
    {
        array[i] = new int[cols];
    }
    return array;
}

int** sliad90(int** array, int cols, int rows)
{
    int** newarr = new int* [cols];
    newcreate(newarr, rows, cols);
  
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0)
            {
                newarr[i][j + 2] = array[i][j];//+ 2 ко второй
                j++;
                newarr[j][i + 2] = array[i][j];//разворот + 2 ко второй
                j++;
                newarr[i + 2][j] = array[i][j];//+2 к первой
            }
            if (i == 1)
            {
                newarr[j][i] = array[i][j];//разворот
                j++;
                newarr[j][i] = array[i][j];//разворот
                j++;
                newarr[j][i] = array[i][j];//разворот
            }
            if (i == 2)
            {
                newarr[i - 2][j] = array[i][j];//- 2  к первой
                j++;
                newarr[j][i - 2] = array[i][j];// разварот и - 2 ко втрой
                j++;
                newarr[i][j - 2] = array[i][j];// -2  и - 2
            }
            
        }
    }

    
    cout << '\n';
    view(newarr, rows, cols);
    return newarr;

}

int main()
{
    int cols = 3;
    int rows = 3;
    int** array = new int*[rows];

    create(array, cols, rows);

    array = sliad90(array, cols, rows);//90
    array = sliad90(array, cols, rows);//180
    array = sliad90(array, cols, rows);//270
    array = sliad90(array, cols, rows);//360
   
}
