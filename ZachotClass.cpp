#include <iostream>

using namespace std;

class Pechat
{
public:
    virtual void print() = 0;
};


class Jurnal : public Pechat
{
public:
    Jurnal() {
        nameJur = "gg";
        osnJ = "20.01.2000";
    }
    void print() override{
        cout << "Журнал"<<endl;
    }

    friend ostream& operator<<(ostream& os, Jurnal& Item) {
        os << Item.nameJur <<"\n" << Item.osnJ << "\n";
        return os;
    }

    string nameJur;
    string osnJ;
};

class Book : public Pechat
{
public:
    Book() {
        nameBo = "TIP Kryta";
        datePub = 2500;
        nameAut = "Pushkin";
    }

    void print() override {
        cout << "Книга" << endl;
    }

    friend ostream& operator<<(ostream& os, Book& Item) {
        os << Item.nameBo << "\n" << Item.datePub << "\n"<<Item.nameAut << "\n";
        return os;
    }

    string nameBo;
    int datePub;
    string nameAut;
};
class ShkoolB : public Pechat
{
public:
    ShkoolB() {
        nameBo = "Math";
        datePub = 3000;
        classS = 9;
        nameAut = "ne pon pepole";
    }

    void print() override {
        cout << "Книга" << endl;
    }
    void ourClass() {
        int size = this->classS;
        for (int num = 1; num < 11; num++)
        {
            if (num < this->classS)
                cout << num << " ";
            else
                break;
        }
        
    }
    friend ostream& operator<<(ostream& os, ShkoolB& Item) {
        os << Item.nameBo << "\n" << Item.datePub << "\n"<< Item.classS << "\n" << Item.nameAut << "\n";
        return os;
    }

    string nameBo;
    int datePub;
    int classS;
    string nameAut;
};
int main()
{
    setlocale(LC_ALL, "RUS");
    Jurnal* ll = new Jurnal();
    Book* bb = new Book();
    ShkoolB* ss = new ShkoolB();
    ll->print();
    cout << *ll;
    cout << endl;
    Pechat** Collect = new Pechat * [3];
    Collect[0] = ll;
    Collect[1] = bb;
    Collect[2] = ss;
    for (int i = 0; i < 3; i++) {
        if (Jurnal* g = dynamic_cast<Jurnal*>(Collect[i]))
        {
            g->print();
            cout << *g;
            cout << endl;
        }
        if (Book* g = dynamic_cast<Book*>(Collect[i]))
        {
            g->print();
            cout << *g;
            cout << endl;
        }
        if (ShkoolB* g = dynamic_cast<ShkoolB*>(Collect[i]))
        {
            g->print();
            cout << *g;
            cout << "перед нашим классом нашего учебника нужно учиться в ";
            g->ourClass();
            cout << endl;
        }
    }

}
