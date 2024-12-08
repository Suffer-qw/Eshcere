#include <iostream>
#include "string"
using namespace std;

//заменяет гласную букву на выбранный симвл
string strq(string txt, string use) {
    string qq = "aeiouy";
    int i = 0;
    while (qq[i] != NULL) {
        int z = 0;
        while (txt[z] != NULL)
        {
            if (qq[i] == txt[z]) {
                txt[z] = use[0];
            }
            z++;
        }
        i++;
    }
    return txt;
}

//строка на симыол вперёд
string up(string txt) {
    int z = 0;

    while (txt[z] != NULL)
    {
        if (int(txt[z]) >= 97 || int(txt[z]) >= 122) {
            txt[z] = int(txt[z]) - 32;
        }
        z++;
    }

    return txt;
}

//строка на симыол назад
string down(string txt) {
    int z = 0;

    while (txt[z] != NULL)
    {
        if (int(txt[z]) >= 65 || int(txt[z]) >= 90) {
            txt[z] = int(txt[z]) + 32;
        }
        z++;
    }

    return txt;
}

//вывод
void gg(string test) {
    int z = 0;
    while (test[z] != NULL)
    {
        cout << test[z];
        z++;
    }
    cout << endl;
}


//проверка на полином
void polinom(string test) {
    int z = 0;
    while (test[z] != NULL)
    {
        z++;
    }
    int y = 0;
    string tset = test + " ";

    while (z > -1)
    {
        tset[y] = test[z];
        z--;
        y++;
    }
    cout << test;
    cout << " " << tset << endl;
    if (tset == test) {
        cout << "polinom" << endl;
    }
    else
        cout << "nixya ne polinom" << endl;
}

//проверка на повторяющиеся буквы
void dobleword(string test) {
    int i = 0;
    int z = 0;
    string testcopy = test + " ";
    string noup = "";
    cout << test;
    cout << " " << testcopy << endl;
    while (test[i] != NULL) {
        int z = 0;
        while (testcopy[z] != NULL)
        {
            if (test[i] == testcopy[z]) {
                testcopy[z] = noup[0];
            }
            z++;
        }
        i++;
    }
    cout << " " << testcopy << endl;
}

//буква-число
void numword(string txt) {
    string qq = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    int size = qq.size();
    int* array = new int[size] + 1;
    while (qq[i] != NULL)
    {
        array[i] = i;
        i++;
    }

   int z = 0;
    while (txt[z] != NULL)
    {
        int count = int(txt[z]) - 97;

        cout  << array[count]+1 << " " ;
        z++;
    }
    cout << endl;
    // 97 98 99 90
    //122 121 120 119

}

int Num(char word) {
    int num = word;
    int plus = 0;
    // 97(0) = 122 98(2) = 121
    while (num > 97) {
        num--;
        plus = plus + 2;
    }
    return plus;

}

//шифрование
void qrts(string txt) {
    string qq = "abcdefghijklmnopqrstuvwxyz";
    int z = 0;
    while (txt[z] != NULL)
    {
        int test11 = txt[z];
        string word = " ";
        word[0] = txt[z] + ((122 - 97) - Num(txt[z]));
        cout << word[0];
        z++;
    }
    cout << endl;
    // 97 98 99 90
    //122 121 120 119

}


int main()
{
    string test = "hello";
    gg(test);
    qrts(test);
}
