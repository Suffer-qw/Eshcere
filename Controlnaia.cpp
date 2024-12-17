
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

struct Node
{
    int value;
    Node* next = nullptr;
};



Node* CreateNode(int size)
{
    Node* head = new Node();
    Node* current = head;
    current->value = 0;
    
    for (int i = 0;i < size+1; i++)
    {
        current->next = new Node;
        current = current->next;
        current->value = i + 1;

    }
    return head;
}

void ViewNode(Node* head)
{

    Node* current = head;
    current->value = 0;

    while(current->next != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
      

    }
   
}

void RegNew(string File) 
{
    ofstream out;
    string okey;
    out.open(File, ios::app);
    for (int i = 0; i < 2; i++)
    {
        cin >> okey;
        if (out.is_open())
        {
            out << okey << std::endl;
        }
        
    }
    out.close();
}


void Enter(string File)
{
    ifstream in;
    int guardian = 0;
    string login;
    string pass;
    cin >> login >> pass;
    in.open(File);
    if (in.is_open())
    {
        while (getline(in, File))
        {
            if (login == File)
                guardian++;
            if (pass == File)
                guardian++;
        }
    }
    in.close();
    if (guardian >= 2) {
        cout << "complite";
    }
}

string& revers(string& normal)
{
    int i = 0;
    while (normal[i] != NULL)
    {
        i++;
    }
    string& revers = normal;
    i--;
    int j = 0;
    while (revers[j] != NULL)
    {
        revers[j] = normal[i];
        i--;
        j++;
    }
    return revers;
}

string NewRevers(string& normal)
{
    int i = 0;
    while (normal[i] != NULL)
    {
        i++;
    }
    i--;
    int j = i/2;
    int g = 0;
    while (j != -1)
    {
        //point - буферная переменная
        char point = normal[g];
        normal[g] = normal[i];
        normal[i] = point;
        i--;
        j--;
        g++;
        //cout << normal << endl;
    }
    return normal;
}


char UP(char word) {

    word = int(word) - 32;
    return word;
}

string DigWord(string& normal)
{
    int i = 0;
    while (normal[i] != NULL)
    {
        if (normal[i] == 32)
        {
            i++;
            continue;
        }
        if (normal[i] >= 97 || normal[i] <= 122)
            normal[i] = UP(normal[i]);
        i++;
    }
    
    return normal;
}

int main()
{
    string test = "is side to the west side";
    cout << test<<endl;
    //DigWord(test);
    //cout << test<<endl;
    NewRevers(test);
    cout << test << endl;
   

     
    
}




/*string okey = "txt";
  

    string txt = "filename.txt";

    ofstream out;

    out.open(txt , ios::app);

    if (out.is_open())
    {
        out << okey << std::endl;
    }

    //Node* test = CreateNode(5);
    //ViewNode(test);
    string txt = "filename.txt";
    //RegNew(txt);
    Enter(txt);

    // Закрытие файла
    out.close();
    */
