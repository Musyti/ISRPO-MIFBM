#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;

int main() {
    system("chcp 1251");
    srand(time(NULL));  

    
    int size1 = 2 + rand() % 29; 
    int arr1[30];  
    cout << "\n1. Одномерный массив размера " << size1 << ":" << endl;
    for (int i = 0; i < size1; ++i) {
        arr1[i] = rand() % 100;
        cout << arr1[i] << " ";
    }
    cout << endl;

    int rows = 1 + rand() % 10; 
    int cols = 1 + rand() % 10;
    int arr2[10][10];
    cout << "\n2. Двумерный массив " << rows << "x" << cols << ":" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr2[i][j] = rand() % 100;
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }


    int pages, rws, clms;
    cout << "\n3. Трехмерный массив. Введите размеры:" << endl;
    cout << "Количество страниц (1-10): ";
    cin >> pages;
    cout << "Количество строк (1-20): ";
    cin >> rws;
    cout << "Количество столбцов (1-20): ";
    cin >> clms;


    if (pages < 1 || pages > 10 || rws < 1 || rws > 20 || clms < 1 || clms > 20) {
        cout << "Неверные размеры!" << endl;
        return 1;
    }

    int arr3[10][20][20];  
    cout << "Трехмерный массив [" << pages << "][" << rws << "][" << clms << "]:" << endl;
    for (int p = 0; p < pages; ++p) {
        cout << "Страница " << p << ":" << endl;
        for (int i = 0; i < rws; ++i) {
            for (int j = 0; j < clms; ++j) {
                arr3[p][i][j] = rand() % 100;
                cout << arr3[p][i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
