// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct rectangle
{
    int a;
    int b;
};



int sh(rectangle* gg) 
{
    return gg->a * gg->b;
}

int pllus(rectangle* gg, rectangle* gg2)
{
    return sh(gg) + sh(gg2);
}

int minuss(rectangle* gg, rectangle* gg2)
{
    return sh(gg) - sh(gg2);
}

float slash(rectangle* gg, rectangle* gg2)
{
    return sh(gg) / sh(gg2);
}

float star(rectangle* gg, rectangle* gg2)
{
    return sh(gg) * sh(gg2);
}

void view(rectangle* gg)
{
    cout << gg->a<<" "<< gg->b << endl;
}

int main()
{
    rectangle* ab = new rectangle();
    ab->a = 4;
    ab->b = 7;

    rectangle* ab2 = new rectangle();
    ab2->a = 5;
    ab2->b = 3;
    view(ab);
    cout << sh(ab) << endl;
    cout << sh(ab2) << endl;
    cout << pllus(ab,ab2) << endl;
    cout << minuss(ab, ab2) << endl;
    cout << slash(ab, ab2) << endl;
    cout << star(ab, ab2) << endl;

}
