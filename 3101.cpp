// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void view(int** array, int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			std::cout << array[i][j] << ' ';
		}
		std::cout << "\n";
	}
	
}

int** full(int** array, int num)
{
	srand(time(NULL));
	int x = 0;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			x++;
			array[i][j] = rand()%100;
		}
	}
	return array;
}
bool dotX(int** array, int num)
{
	
	for (int r = 0; r < num; r++)
	{
		int c = 0;
		int x = 0;
		int y = 0;
		for (int i = 0; i < num; i++)
		{
			int x = array[i][0];
			for (int j = 0; j < num-1; j++)
			{
				x > array[i][j + 1] ? x = array[i][j + 1], c = j+1 : x = x, c = 0 ;
			}
			for (int bb = 0; bb < num - 1; bb++)
			{
				array[bb][c] < array[bb+1][c] ? y = array[bb+1][c] : y = array[bb][c];
			}
			if (x == y)
			{
				std::cout << x;
				std::cout << "\n";
				return true;
			}
		}
		
	}
	return false;
}

int** create(int** array, int num)
{
	for (int i = 0; i < num; i++)
	{
		array[i] = new int[num];
		
	}
	full(array, num);
	return array;
}

int main()
{
	int x = 5;
	int** giga = new int* [x];
	while(true)
	{
		create(giga, x);
		if (dotX(giga, x))
		{
			view(giga, x);
			break;
		}
		
	}
    
}
