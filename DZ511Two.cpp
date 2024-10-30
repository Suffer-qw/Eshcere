#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;

    cout << sqrt(pow((ax - bx),2)+ pow((ay - by), 2));
}
