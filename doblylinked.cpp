// doblylinked.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct Node{

    int value;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newnode = new Node();
    newnode->value = data;
    newnode->left = newnode->left = nullptr;
    return newnode;
}

Node* create(int size) {

    Node* head = new Node();

    Node* tail ;

    Node* curret = head;
    curret->value = 0;
    curret->left = nullptr;
    curret->right = nullptr;
     
    tail = curret;
 
    for (int i = 1; i < size; i++) {
        curret = new Node();
        curret->value = i;   
        curret->left = tail;
        tail->right = curret;
        tail = curret;
        
        
    }
    //cout << curret->left->value << curret->value ;
    return head;
}

void wive(Node* head) {
    Node* carret = head;
    while (carret != nullptr) {
        cout << carret->value;
        carret = carret->right;
    }
    cout << endl;
}

void wiveroot(Node* head) {
    Node* carret = head;
    cout << carret->value;
    while (carret != nullptr) {
        cout << endl;
       
        if (carret->left != nullptr)
            cout << carret->left->value << " ";
            carret->left = carret->left->left;
        if (carret->left != nullptr)
            cout << carret->right->value;
            carret->right = carret->right->right;
    }
   
    cout << endl;
}


int main()
{
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right =  createNode(3);
    root->left->left = createNode(4);
    root->right->right = createNode(6);
    root->left->left->left = createNode(5);
    wiveroot(root);
    

    
}

