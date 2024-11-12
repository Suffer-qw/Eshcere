

#include <iostream>
using namespace std;

int fact(int &num) {
    int u = 1;
    for (int i = 1; i < num + 1; i++) {
        u = u * i;
    }
    
    return u;
}

int* Arryrand(int* arry,int size) {
    for (int i = 0; i < size; i++) {
        arry[i] = rand() % 10;
    }
    return arry;
}

int Arrytarget(int* arry, int target, int size) {
    int z = -1;
    for (int i = 0; i < size; i++) {
        if (arry[i] == target) {
            z = i;
            break;
        }
    }
    return z;
}

int Arrsum(int* arry, int size) {
    int z = 0;
    for (int i = 0; i < size; i++) {
        z = z + arry[i];
    }
    return z;
}

int* ArrytargetDEL(int* arry, int target, int size) {
    int z  = size - 1;
    int j = 0;
    int* newarr = new int[z];
    for (int i = 0; i < size; i++) {
        if (arry[i] == target){
            continue;
            j--;
        }
        else {
            newarr[j] = arry[i];
        }
        j++;
    }
    delete arry;
    return newarr;
}



int main()
{
    /*int z;
    cin >> z;
    fact(z);
    int zxc = fact(z);
    cout << zxc;
    */
    int size_a;
    cin >> size_a;
    int* qwe = new int[size_a];
    Arryrand(qwe, size_a);
    for (int i = 0; i < size_a; i++) {
        cout <<  qwe[i] << " ";
    }
    cout << "|";
    int target;
    //cin >> target;
    //Arrytarget(qwe, target, size_a);
    //cout << Arrytarget(qwe, target, size_a);
    cout << "|";
    cout << Arrsum(qwe, size_a);
    cout << "|";
    cin >> target;
    int* newqwe = ArrytargetDEL(qwe, target, size_a);
    for (int i = 0; i < size_a ; i++) {
        cout << newqwe[i] << " ";
    }
        
}

