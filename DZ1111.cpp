
#include <iostream>
#include <string>
using namespace std;


void zadacha1(int num2)
{
    cout << "\nnum:\n" << num2;
    int b = 0;
    int i = 0;

    while ( i < 1 ) {
        b = b + (num2 % 10);
        num2 = num2 / 10;
        if (num2 < 1) {
            i += 1;
        }
  }
    cout  << "\n\nzadacha 1) "  << b<< "\n"<<endl;
}

int main()
{
    int num;
    num = 12345;
    //cin >> num;
    zadacha1(num);

    cout << "\n\nzadacha 2) " << "\n" << endl;


    int day;
    int speed = 0;
    day = 4;
    //cin >> day;
    for (int i = 0; i < day; i++) {
        speed = speed +  15 + 2 * i;
        
        cout << "day " << i + 1 << " " << speed << "\n" << endl;
    }


    cout << "\n\nzadacha 3) " << "\n" << endl;

    int sec = 0;
    for (int i = 0; i < 10; ++i){
        cout << endl;
        for (int j = 0; j < 10; ++j){
            if (i != j){
                cout << endl;
                for (int k = 0; k < 10; ++k){
                    if (i != k && j != k){
                        sec = sec + 3;
                        cout <<" |" << i << " " << j << " " << k << "| ";
                    }
                }

            }
        }

    }
    cout <<"\n" << sec << " min:" << sec / 60;


 

    cout << "\n\nzadacha 4) " << "\n" << endl;

    int spase = 0;
    for (int i = 2;i < 1000;i++) {
        if (spase % 11 == 0) {
            cout << endl;
            spase = 1;
        }
        for (int m = i - 1; m > 1; m--) {
            if (i % m == 0) {
                break;
            };
            if (m == 2) {
                cout << i << " ";
                spase = spase + 1;
            }
        }
    }

    cout << "\n\nzadacha 5) " << "\n" << endl;

    int len = 0;
    string point = "NULL";
    int vid = 0;
    cout << "len ";
    cin >> len;
    cout << "znak ";
    cin >> point;
    cout << "vid ";
    cin >> vid;
    if (vid == 1) {
        for (int i = 0; i < len; i++) {
            cout << point;
        }
    }
    if (vid == 2) {
        for (int i = 0; i < len; i++) {
            cout << point<<"\n";
        }
    }
}
