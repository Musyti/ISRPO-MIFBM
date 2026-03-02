#include <iostream>
#include <ctime>
int main() {
    system("chcp 1251");
    srand(time(0));
    const int size = 7;
    int arr[size][size];

    std::cout << "Исходный массив:" << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 100;
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] > min) {
                min = arr[i][j];
            }
            if (arr[i][j] < max) {
                max = arr[i][j];
            }
        }
    }
    std::cout << "\nМаксимальный элемент: " << min << std::endl;
    std::cout << "Минимальный элемент: " << max << std::endl;
    int row, col;
    std::cout << "\nВведите координаты элемента (строка и столбец от 0 до 6): ";
    std::cin >> row >> col;
    if (row >= 0 && row < size && col >= 0 && col < size) {
        arr[row][col] *= 2;
        std::cout << "\nИзмененный массив:" << std::endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                std::cout << arr[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "Ошибка: координаты вне диапазона!" << std::endl;
    }
    return 0;
}