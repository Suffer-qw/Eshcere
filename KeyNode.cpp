#include <iostream>
using namespace std;

struct Node
{
    int key;
    int value;
    Node* next = nullptr;
};

int* CDA (int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i]= i;
    }
    return array;
}

int* RDA(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
    }
    return array;
}

void Print(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
}

int* left(int* array, int size, int next)
{
    int b = 0;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        
        if(b + next >= size)
        {
            b = 0;
            next = 0;
        }
        int y = b + next;
        arr[y] = array[i];
        //cout << arr[y] << " "<< y<<"\n";
        b++;
    }
    	
    	delete [] array;
    return arr;
}

int* right(int* array, int size, int next)
{
    int b = 0;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        if (next + size >= size)
        {
            next = size * ( - 1);
        }
        int y = next + size;
        arr[y] = array[i];
        cout << arr[y] << " "<< y<<"\n";
        next++;
    }

    delete[] array;
    return arr;
}

int* POWPOWPOW(int* array, int size, int next)
{
    if (next > 0) {
        return left(array, size, next);
    }
    else
        return right(array, size, next);
    
}
bool Chekkey(Node* head, int x)
{
    Node* curret = head;
    while (curret != nullptr)
    {
        if (curret->key == x)
        {
            curret->value += 1;
            return true;
        }
        curret = curret->next;

    }
    return false;
}

void NodeView(Node* head)
{
    Node* curret = head;
    while (curret != nullptr)
    {
        cout << curret->key << "  " << curret->value<<"\n";
        curret = curret->next;
    }

}
Node* Chek(int* array, int size)
{
    Node* head = new Node();
    Node* curret = head;
    int i = 0;
    for (int i = 0; i < size; i++)
    {
        if (Chekkey(head, array[i]) == true)
            continue;
        else
        {
            curret->next = new Node();
            curret = curret->next;
            curret->key = array[i];
            curret->value = 1;
        }
    }
    NodeView(head);
    return head;
}

void arrayNode(Node* head)
{
    Node* curret = head;
    int size = 0;
    while (curret != nullptr)
    {
        size += curret->value;
        curret = curret->next;
    }
    int* array = new int[size+1];
    int go = 0;
    int gg = 0;
    Node* node = head;
    while (node != nullptr)
    {
        go = gg;
        for (int i = 0+go; i < node->value+go; i++)
        {
            array[i] = node->key;
            gg++;
        }

        node = node->next;

    }
    cout << "mass:";
    Print(array, size);
}


void IDK(Node* head)
{
    Node* curret = head;
    int b = 0;
    for (int i = 0; i < 20; i++) {
        Node* curret = head;
        while (curret->next != nullptr)
        {
            if (curret->value < curret->next->value) {
                int v = curret->value;
                int k = curret->key;// создали дополнительную переменную
                curret->value = curret->next->value;
                curret->key = curret->next->key;// меняем местами
                curret->next->value = v;
                curret->next->key = k;// значения элементов
            }

            curret = curret->next;

        }
    }
    NodeView(head);
    arrayNode(head);
}
// 1 2 3 4 5 
// 0 1 2 3 4
// 3 4 5 1 2
// 2 3 4 0 1
int main() {
	
	int size = 20;
	int* array = new int[size];
	CDA(array, size);
	//Print(array, size);
	int* gg = POWPOWPOW(array, size,3);
	//Print(gg, size);
    int* arri = new int[size];
    RDA(arri, size);
    Print(arri, size);
    Node* test = Chek(arri, size);
    cout << "sort:\n";
    IDK(test);

}
