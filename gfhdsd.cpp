// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Я НЕ ПРИДУМАЛ КАК РЕАЛИЗОВАТЬ row

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

class Window;
class UIElement {
public:
    virtual void draw() {};
};

class UIElementButtons : public UIElement {
public:
    bool isFocused;

    void draw() {

    }
};

class UIElementComposable : public UIElement {
public:

    void draw() {

    }
};

class Button : public UIElementButtons {
public:
    int size_x;
    int size_y;
    string text;
    int padding_horizontal;
    bool onoff;

    Button() {
        size_x = 10;
        size_y = 3;
        text = "Button";
        padding_horizontal = 1;
        onoff = false;
    }

    Button(string text, int padding_horizontal = 1, int padding_vertical = 1) {
        this->text = text;
        this->padding_horizontal = padding_horizontal;
        this->onoff = false;

        this->size_x = text.size() + padding_horizontal * 2 + 2;
        this->size_y = padding_vertical * 2 + 2 + 1;
    }
    void click(Window* okno);
    
    void draw() override {
        string textBuffer = this->text;

        //padding > 2 -> Bug
        for (int i = 0; i < size_y; i++) {
            for (int j = 0; j < size_x; j++) {
                if (i == 0 || i == size_y - 1) {
                    cout << '*';
                    if (j == size_x-1)
                    {
                        cout << "  ";
                        for (int w = 0; w < size_y+2; w++)
                        {
                            cout << '*';
                            continue;
                        }
                        break;
                    }
                    continue;
                }

                if (j == 0 || j == size_x - 1) {
                    cout << '*';
                    if (j == size_x-1)
                    {
                        cout << "  ";
                        cout << '*';
                        for (int w = 0; w < size_y; w++)
                        {

                            switch (onoff)
                            {
                            case true:
                                cout << "+";
                                break;
                            case false: 
                                cout << " "; 
                                break;
                            }
                        }
                        cout << '*';

                    }
                            
                        continue;
                }

                if (i == size_y / 2 && j > padding_horizontal && textBuffer.size() > 0) {
                    cout << textBuffer[0];
                    textBuffer.erase(0, 1);
                    continue;
                }

                cout << " ";
            }
            cout << endl;
        }
    }
    
};
class Column : public UIElementComposable {
public:
    vector<UIElement*> components;

    Column(vector<UIElement*> components) {
        for (int i = 0; i < components.size(); i++) {
            this->components.push_back(components[i]);
        }
    }

    void draw() override {
        for (auto& component : components) {
            component->draw();
        }
    }
};

class Window {
public:
    int size_x;
    int size_y;
    UIElement* component;

    Window(int size_x, int size_y, UIElement* component) {
        this->size_x = size_x;
        this->size_y = size_y;
        this->component = component;
    }

    void draw() {
        component->draw();
    }
};

void Button :: click(Window* okno)
{
    onoff == true ? onoff = false : onoff = true;
    system("cls");
    okno->draw();

}

int main() {
    setlocale(LC_ALL, "rus");

    Button button1 = Button("First Button",7, 5 );
    Button button2 = Button( "Second Button",9, 5 );
    Button button3 = Button( "Third Button", 11, 5);

    Column column({ &button1, &button2, &button3 });

    Window screen(100, 100, &column);
    screen.draw();
    button1.click(&screen);
}
