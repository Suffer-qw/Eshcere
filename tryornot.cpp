// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void checkPass() {
    string pass;

    try {
        cout << "Для регистрации введите пароль состоящий минимиум из 8 символов без знаков '.', ',', '/'"<<endl;

        cin >> pass;
        if (pass.size() < 8)
        {
            throw "пароль должен быть больше";
        }
        for (int i = 0; i < pass.size();i++)
        {
            if (pass[i] == '.'|| pass[i] == ',' || pass[i] == '/')
            {
                throw "не длпустимый символ";
            }
        }
        cout << "Пароль принят" << endl;

        cout << "Новый пароль: " << pass;
    }
    catch (const char* error_message) {
        cout << error_message;
    }

}

int main()
{
    setlocale(LC_ALL, "rus");
    checkPass();
}
