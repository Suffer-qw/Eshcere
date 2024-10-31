//DZ511Four.cpp

#include <iostream>
#include <math.h>
using namespace std;

void chisla(float& y)
{
    if (y >= 1 && y <= 3) {
        cout << "vxodit:" << y << " ";
    }
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
        switch (i) {
        case(0): {
            a = a;
            break;
        }
        case(1): {
            a = b;
            break;
        }
        case(2): {
            a = c;
            break;
        }

        }

        chisla(a);
    }
}
