#include <iostream>
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


string up(string txt) {
    string qq = "aeiouy";
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

int main()
{
    string test = "test";
    gg(test);

    string test1 = strq(test,"_");
    gg(test1);
     
    string test2 = up(test);
    gg(test2);
    string test3 = down(test2);
    gg(test3);
    //cout << int('a') << " " << int('z') << endl;
    //cout << int(test[0]) << " " << int(test[3]) << endl;
    //cout << int('A') << " " << int('Z') << endl;
}
