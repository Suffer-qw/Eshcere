// dzIDK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void full(int mass[], int size)
{
    for (int i = 0; i < size; i++)
    {
        mass[i] = i;
    }
    
}

void view(int* mass, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< mass[i]<<" ";
    }
    cout << "\n";
}

void create(int* mass[], int num, int size)
{
    for (int i = 0;i < num; i++)
    {
        mass[i] = new int[size];
        full(mass[i], size);
        view(mass[i], size);
    }
    
   
    
}

int main()
{
    int size = 5;
    int* array = new int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
    create(&array, 5, size);
   
}
