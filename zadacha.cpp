// zadacha.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int pow(int num,int degree)
{

    if (degree > 2) {
        return num * pow(num, degree - 1 );
    }
    return num * num;
}

int fib_next(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib_next(n - 1) + fib_next(n - 2);
}

int fib(int n ) {
    int x = 0;
    n++;
    if (n <= 1) {
        x = n - 1;
    }
    else {
       x = fib_next(n-1);
    }
    return x;
}

int main()
{
    cout << pow(5, 3) << endl;
    for (int i = 0; i < 10; i++) {
        cout << fib(i) << endl;

    }
}
