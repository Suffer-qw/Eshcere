#include <iostream>
using namespace std;
struct node {
    int vale;
    node* left = nullptr;
    node* next = nullptr;
};

struct giganode {
    int vale;
    giganode* left;
    giganode* next;
};



node* krytanode(int size) {
    node* head = new node();
    node* carrent = head;
    for (int i = 0; i < size - 1; i++) {

        carrent->next = new node();
        carrent = carrent->next;
        carrent->vale = i + 1;

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
        if (carrent->vale < carrent->next->vale) {
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
            node* z  = new node();
            z = carrent->next->next;
            delete carrent->next;
            carrent->next = z;
            continue;
        }
        carrent = carrent->next;
    }
    return head;
}

node* eshkere(int num,int numtwo, node* head) {
    node* carrent = head;
    while (carrent != nullptr) {
        if (num == carrent->vale) {
            carrent->vale = numtwo;
            carrent = carrent->next;
            continue;
        }
        if (numtwo == carrent->vale) {
            carrent->vale = num;
            carrent = carrent->next;
            continue;
        }
        carrent = carrent->next;
    }
    return head;
}


int main()
{

    node* test = krytanode(10);
    printnode(test);
    node* testtwo =noddel(4, test);
    cout << endl;
    printnode(testtwo);
    cout << endl;
    node* testeshkere = eshkere(2, 5, testtwo);
    printnode(testeshkere);

}
