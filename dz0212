  // ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct node{

    int value;
    node* next = nullptr;
};

node* create(int size) {
    node* head = new node();
    node* z = head;
    for (int i = 0; i < size; i++) {
        z->value = i;
        if (i == size - 1) {
            break;
        }
        z->next = new node();
        z = z->next;
    }
    return head;
}

node* newnode(int num, node* head) {
    node* carret = head;
    while (carret != nullptr) {
        if (carret->next == nullptr) {
            carret->next = new node();
            carret->next->value = num;
            break;
        }
        carret = carret->next;
    }
    return head;
}

//Написать функцию, удаляющую элемент из списке по его индексу и возвращает новый массив, 
// там по индексу почти тоже самое только нужно добавить перемееную которая будет считать индексы как а nodeq
node* delnode(int num, node* head) {

    node* carret = head;
    while (carret != nullptr) {

        if (carret->next == nullptr || carret == nullptr) {
            break;
        }
        
        if (carret->next->value == num) {
            node* y = new node();
            y = carret->next->next;
            delete carret->next;
            carret->next = y;
        }
        carret = carret->next;
       

    }
    return head;
}

int index(node* head) {
    node* carrent = head;
    int z = 0;
    while (carrent != nullptr) {
        z++;
        carrent = carrent->next;
    }
    return z;
   
}

//Написать функцию полностью удаляющую с помощью оператора delete весь список
void delet(node* head) {
    int z = index(head);
    node* carret = head;

    for (int i = 0; i < z;) {
        while (true) {
            if (carret->next->next == nullptr) {
                
                delete carret->next;
                continue;
            }
            carret = carret->next;

            
        }
        z--;
        
        
    }
   
}


//Написать функцию, определяющую существует ли элемент targetValue в списке
void nodeq(int num, node* head) {
    node* carrent = head;
    int z = 0;
    bool who = false;
    while (carrent != nullptr) {

        if (num == carrent->value) {   
            who = true;
        }
        z++;
        carrent = carrent->next;
        
    }
    if (who == true) {
        cout << z << " NODEQ " << endl;
    }
    else
        cout << " element not detected " << endl;
}

void printlist(node* head) {
    while (head != nullptr) {
        cout << head->value<<endl;
        head = head->next;
    }


}


//Написать функцию, возвращающую минимальный элемент в списке
int nodemin(node* head) {
    node* carrent = head;
    int max = carrent->value;
    while (carrent != nullptr) {
        if (carrent->next == nullptr) {
            break;
        }
        if (carrent->value > carrent->next->value) {
            max = carrent->next->value;
        }

        carrent = carrent->next;
    }
    return max;
}


//Написать функцию, возвращающую сумму всех элементов в списке
int SumOfList(node* head) {
    node* carrent = head;
    int max = carrent->value;
    while (carrent != nullptr) {
        max = max + carrent->value;

        carrent = carrent->next;
    }
    return max;
}


int main()
{


    node* test = create(5);
    printlist(test);
    cout << endl;

    node* testtwo = newnode(7, test);
    printlist(testtwo);
    cout << endl;

    nodeq(7, test);

    //int z = index(test);
   // cout << z;

    //int test3 = delet(test);
    //cout << test3;
    //cout << endl;




    


}

