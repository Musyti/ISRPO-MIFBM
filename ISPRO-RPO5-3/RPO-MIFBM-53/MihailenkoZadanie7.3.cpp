#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {

    system("chcp 1251");

    const int ROWS = 7;
    const int COLS = 5;
    int arr[ROWS][COLS];

    srand(time(NULL));  


    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = rand() % 100;  
        }
    }

    cout << "Массив 7x5:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << "\t";  // [web:27]
        }
        cout << endl;
    }


    int row;
    cout << "\nВведите номер строки (0-6): ";
    cin >> row;

    if (row < 0 || row >= ROWS) {
        cout << "Неверный номер строки!" << endl;
        return 1;
    }

    cout << "Строка " << row << ": ";
    for (int j = 0; j < COLS; ++j) {
        cout << arr[row][j] << "\t";
    }
    cout << endl;
    int value;
    cout << "Введите число для поиска: ";
    cin >> value;

    bool found = false;
    cout << "Элементы со значением " << value << ":" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (arr[i][j] == value) {
                cout << "Найден: " << value << " в [" << i << "][" << j << "]" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Элемент не найден." << endl;
    }

    return 0;
}
