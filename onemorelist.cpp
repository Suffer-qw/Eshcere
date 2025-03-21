// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
public:
    class Node {
    public:
        T data;
        Node* next;

        Node() { this->data = 0; this->next = nullptr; }

        Node(T value) { this->data = value; this->next = nullptr; }
    };

    Node* Head;

    LinkedList() 
    {
        this->Head = nullptr; 
    }

    LinkedList(Node* head) 
    { 
        this->Head = head; 
    }

    void push(T value) {
        if (Head == nullptr) {
            Head = new Node(value);
        }
        else {
            Node* current = Head;

            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new Node(value);
        }
    }

    void print() {
        if (Head == nullptr) {
            cout << "Список пустой";
        }
        else {
            Node* current = Head;

            while (current->next != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << current->data << " ";
            cout << endl;
        }
    }
    void subList(int indexStart, int indexEnd) {
            Node* current = Head;
            int index = 0;
            while (index < indexEnd+1 && current->next != nullptr) {
                if (index >= indexStart)
                {
                    cout << current->data << " ";
                }
                current = current->next;
                index++;
                
            }
            cout << endl;
            
    }

    T get(int index) {
        if (Head == nullptr) {
            return 0;
        }
        else {
            Node* current = Head;

            while (current->next != nullptr && index > 0) {
                current = current->next;
                index--;
            }
            return current->data;
        }
    }

    void remove(T data) {
        Node* current = Head;

        while (current->next != nullptr && current->next->data != data) {
            current = current->next;
        }
        Node* buffer = current->next->next;
        delete current->next;
        current->next = buffer;
    }

    void clear() {
        Node* current = Head;
        
        while (current != nullptr)
        {
            Node* tm = current->next;
            delete current;
            current = tm;
        }
        Head = nullptr;
    }

    void removeAt(int index) {

        Node* current = Head;

        while (current->next != nullptr && index > 1) {
            current = current->next;
            index--;
        }
        Node* buffer = current->next->next;
        delete current->next;
        current->next = buffer;
    }

    T& operator[] (int i) {
        Node* current = Head;
        while (i > 0) {
            current = current->next;
            i--;
        }
        return current->data;
    }

    friend std::ostream& operator<<(std::ostream& os, const LinkedList& list) {
        if (list.Head == nullptr) {
            os << "Список пустой";
        }
        else {
            Node* current = list.Head;

            while (current != nullptr) {
                os << current->data << " ";
                current = current->next;
            }
        }
        return os;
    }

    LinkedList& operator= (const LinkedList& list) {
        Node* currentSecond = list.Head;
        this->clear();
        while (currentSecond != nullptr) {
            this->push(currentSecond->data);
            currentSecond = currentSecond->next;
        }
        return *this;
    }

    //Добавить очистку текущего списка перед присваиванием.


};



int main() {
    setlocale(LC_ALL, "rus");
    LinkedList<string> list;
    list.push("10");
    list.push("15");
    list.push("20");
    list.push("25");
    list.push("30");
    list.print();
    list.push("40");
    list.subList(0, 1);
    LinkedList<string> list2;
    list2 = list;
    list[3] = "Error";
    list2.print();
    list.print();
}
