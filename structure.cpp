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
            node* z = carrent->next;
            carrent = carrent->next->next;
            delete z;
        }
        return head;

    }

}

node* krytanodeaaa(node* kryta) {
    node* head = new node();
    node* carrent = head;
    while (kryta != nullptr) {
        carrent->next = new node();
        carrent->vale = kryta->vale;
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

giganode* hehe(int size = 20) {
    giganode* head = new giganode();
    giganode* carrent = head;
    carrent->vale = 0;
    carrent->left = nullptr;
    for (int i = 1; i < size ; i++) {
        carrent->next = new giganode();
        carrent->next->left = carrent;
        carrent = carrent->next;
        carrent->vale = i;
    }
    return head;
}

void printgiganode(giganode* head) {
    giganode* carrent = head;
    while (carrent != nullptr) {
        cout << carrent->vale << " ";
        carrent = carrent->next;
    }

}

void giganodeq(giganode* head, int index) {
    giganode* carrent = head;
    while (carrent != nullptr) {
        if (carrent->vale == index) {
            cout << carrent->left->vale << " ";
            cout << carrent->next->vale << " ";
            break;
        }
        //cout << carrent->left->vale << " ";
        carrent = carrent->next;
    }

}

giganode* giganodedele(giganode* head, int index) {
    giganode* carrent = head;
    while (carrent != nullptr) {
        if (carrent->vale == index) {
            //giganode* x = carrent->next->;
            carrent->left = carrent->next;
            giganode* y = carrent->next;
            carrent->next = carrent->next->next;
            delete carrent;
            carrent = y;
        }
        //cout << carrent->left->vale << " ";
        /*if (carrent->next == nullptr) {
            break;
        }*/
        carrent = carrent->next;
        
    }
    return head;

}

int main()
{

    giganode* test = hehe();
    //printgiganode(test);
    giganodeq(test, 4);
    giganode* testtwo = giganodedele(test, 4);
    printgiganode(testtwo);
    

}
