
#include <iostream>
#include <string>
using namespace std;

void chisla(string& y )
{
    int numOne= stoi(y.substr(0, 1));
    string oper = y.substr(1, 1);
    int numTwo = stoi(y.substr(2, 2));
    if (oper == "+") {
        cout << numOne + numTwo;
    }
    if (oper == "-") {
        cout << numOne - numTwo;
    }
    if (oper == "*") {
        cout << numOne * numTwo;
    }
    if (oper == "/") {
        cout << numOne / numTwo;
    }

}

int main()
{
    string a;
    cin >> a ;
    chisla(a);
}
