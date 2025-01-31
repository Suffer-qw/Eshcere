#include <iostream>
using namespace std;


struct Figure {
    int id;
    int field[4][4];
};

Figure* createTetrisFigures() {
    Figure* figures= new Figure[7];

    // Фигура I
    figures[0]={ 1, {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    } };

    // Фигура O
    figures[1] = { 2, {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    } };

    // Фигура T
    figures[2] = { 3, {
        {0, 0, 0, 0},
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 0}
    } };

    // Фигура S
    figures[3] = { 4, {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 0}
    } };

    // Фигура Z
    figures[4] = { 5, {
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    } };

    // Фигура J
    figures[5] = { 6, {
        {0, 0, 0, 0},
        {1, 0, 0, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 0}
    } };

    // Фигура L
    figures[6] = { 7, {
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 0}
    } };

    return figures;
}

// Функция для создания массива случайных фигур
Figure* createRandomFigures(int count,Figure* allFigures) {
    Figure* randomFigures= new Figure[count];
    for (int i = 0; i < count; i++) {
        randomFigures[i]=allFigures[rand() % 6];
    }
    return randomFigures;
}

// Функция для вывода фигуры
void printFigure(Figure* figure) {
    cout << " ID: " << figure->id << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << (figure->field[i][j] ? "#" : ".");
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    Figure* allFigures = createTetrisFigures();

    for (int i = 0; i < 7; i++) {
        Figure* randomFigures = createRandomFigures(7, allFigures);
        printFigure(randomFigures);
    }

}
