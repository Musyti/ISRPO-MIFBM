#include <iostream>
int main() {
    system("chcp 1251");
    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;
    int* arr = new int[n];
    std::cout << "Введите " << n << " чисел:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << "\nИсходный массив:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int choice;
    std::cout << "\nВыберите тип сортировки:" << std::endl;
    std::cout << "1 - по возрастанию" << std::endl;
    std::cout << "2 - по убыванию" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else if (choice == 2) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    std::cout << "\nОтсортированный массив:" << std::endl;
    if (choice == 1) {
        std::cout << "(по возрастанию)" << std::endl;
    }
    else if (choice == 2) {
        std::cout << "(по убыванию)" << std::endl;
    }
    else {
        std::cout << "(неверный выбор, сортировка по возрастанию по умолчанию)" << std::endl;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}