#include <iostream>
using namespace std;

int* Rand(int* array, int size) 
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
    }

    return array;
}



void View(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


int Max(int* array, int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}

int Min(int* array, int size)
{
    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}

float Mid(int* array, int size)
{
    float mid = array[0];
    for (int i = 1; i < size; i++)
    {
        mid = mid + array[i];
    }

    return mid/size;
}

int main()
{
    int size = 10;
    int* array = new int[size];
    Rand(array, size);
    View(array, size);
    cout << Max(array, size) << endl;
    cout << Min(array, size) << endl;
    cout << Mid(array, size) << endl;

}
