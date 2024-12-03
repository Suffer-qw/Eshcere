// recurs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "windows.h"
#include "string"
using namespace std;

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




int qqnum(string txt) {
    string qq = "aeiouy";
    int qwe = 0;
    int i = 0;
    while (qq[i] != NULL) {
        int z = 0;
        while (txt[z] != NULL)
        {
            if (qq[i] == txt[z]) {
                qwe++;
            }
            z++;
        }
        i++;
    }
    return qwe;
}


string up(string txt) {
    int z = 0;

        while (txt[z] != NULL)
        {
            if (int(txt[z]) >= 97 || int(txt[z]) >= 122) {
                txt[z] = int(txt[z])-32;
            }
            z++;
        }
        
    return txt;
}

string down(string txt) {
    string qq = "aeiouy";
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


void gg(string test) {
    int z = 0;
    while (test[z] != NULL)
    {
        cout << test[z];
        z++;
    }
    cout << endl;
}

string crypt(string txt, int plus) {

    int z = 0;
    int qq = 0;
    int y = 0;
    string plusplus  = txt;
        while (txt[z] != NULL)
        {
            if (qq + plus >= txt.size()) {
                plusplus[y] = txt[z];
                y++;
                z++;
                continue;
            }
            plusplus[qq + plus] = txt[z];

            z++;
            qq++;

            
        }

        return plusplus;
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

//97 122
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

void numword(string txt) {
    string qq = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    int size = qq.size();
    int* array = new int[size]+1;
    while (qq[i] != NULL)
    {
        array[i] = i;
        i++;
    }

    int z = 0;
    while (txt[z] != NULL)
    {
        int count = int(txt[z]) - 97;

        cout << txt[z] <<" " << array[count] << " "<< endl;
        z++;
    }
    cout << endl;
    // 97 98 99 90
    //122 121 120 119

}


int main()
{
    string test = "abcdefghijklmnopqrstuvwxyz";
    gg(test);

    // 97 98 99 90
    //122 121 120 119 
    
    qrts(test);
    numword(test);

    /*
    int test11 = test[24];
    string word = " ";
    word[0] = test[24] + ((122 - 97) - Num(test[24]));
    cout << test[24] <<" " << int(test[24])<<endl;
    cout << word[0] << " " << int(word[0]) <<endl;
    */
     
    string test2 = up(test);
   // gg(test2);

    string test3 = down(test2);
   // gg(test3);
    /*int z = 0;
    while (true) {

        Sleep(100);
        string test4 = crypt(test, z);
        if (z == test.size()) {
            z = 0;
        }
        gg(test4);
        z++;
    }*/

    //cout << qqnum(test);
    //cout << int('a') << " " << int('z') << endl;
    //cout << int(test[0]) << " " << int(test[3]) << endl;
    //cout << int('A') << " " << int('Z') << endl;
}


