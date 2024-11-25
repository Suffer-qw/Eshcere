/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct node {
    int vale;
    node* next = nullptr;
};

node* krytanode(int size) {
    node* head = new node();
    node* carrent = head;
    for (int i = 0; i < size-1; i++) {

        carrent->next = new node();
         carrent = carrent->next;
         carrent->vale = i+1;
       
    }
    return head;
}



void nodeq(int num, node* head) {
    node* carrent = head;
    int z = 0;
    while (carrent != nullptr) {

        if (num == carrent->vale) {
            cout << z + 1 << " " << endl;
        }
        z++;
        carrent = carrent->next;
    }
}



int nodemax(node* head) {
    node* carrent = head;
    int max = 0;
    while (carrent != nullptr) {
        if (carrent->next == nullptr) {
            break;
        }
        if (carrent->vale <  carrent->next->vale) {
            max = carrent->next->vale;
        }
        
        carrent = carrent->next;
    }
    return max;
}

int nodemin(node* head) {
    node* carrent = head;
    int max = carrent->vale;
    while (carrent != nullptr) {
        if (carrent->next == nullptr) {
            break;
        }
        if (carrent->vale > carrent->next->vale) {
            max = carrent->next->vale;
        }

        carrent = carrent->next;
    }
    return max;
}

int SumOfList(node* head) {
    node* carrent = head;
    int max = carrent->vale;
    while (carrent != nullptr) {
        max = max + carrent->vale;

        carrent = carrent->next;
    }
    return max;
}


void printnode(node* head) {
    node* carrent = head;
    while (carrent != nullptr) {
        cout << carrent->vale << " ";
        carrent = carrent->next;
    }

}

node* noddel(int num, node* head) {
    node* carrent = head;
    while (carrent != nullptr) {
        if (carrent->next == nullptr) {
            break;
        }
        if (num == carrent->next->vale) {
            node* z = carrent->next;
            carrent = carrent->next->next;
            delete z;
        }
        return head;
   
    }
  
}

node* krytanodeaaa( node* kryta) {
    node* head = new node();
    node* carrent = head;
    while (kryta != nullptr){
        carrent->next = new node();
        carrent->vale = kryta -> vale;
        carrent = carrent->next;
        kryta = kryta->next;
    }
    return head;
}

/*node* krytadele(node* kryta, int num) {
    node* head = new node();
    node* carrent = head;
    while (kryta != nullptr) {
        
        if (kryta->vale == num) {
            carrent = carrent->next;
            kryta = kryta->next;
        }
        carrent->next = new node();
        carrent->vale = kryta->vale;
        carrent = carrent->next;
        kryta = kryta->next;
    }
    return head;
}
*/

int main()
{

    node* test = krytanode(10);
    printnode(test);
    cout << endl;
    int zzz = nodemax(test);
    cout <<zzz <<endl;
    zzz = nodemin(test);
    cout << zzz << endl;
    zzz = SumOfList(test);
    cout << zzz << endl;
    node* teeest = krytanodeaaa( test);
    printnode(teeest);
   
}
