#include <iostream>
using namespace std;

template <typename T>
void show_operations(T a, T b) {
    cout << "\nРезультаты для " << a << " и " << b << ":\n";
    cout << "1. Максимум: " << (a > b ? a : b) << endl;
    cout << "2. Среднее: " << (a + b) / 2.0 << endl;
    cout << "3. Модуль суммы: " << abs(a + b) << endl;
    cout << "4. Целая часть суммы: " << floor(a + b) << endl;
}

int main() {
    int type;

    cout << "Выберите тип:\n";
    cout << "1 - int\n";
    cout << "2 - float\n";
    cout << "3 - double\n";
    cout << ">> ";
    cin >> type;

    if (type == 1) {
        int x, y;
        cout << "Введите два int: ";
        cin >> x >> y;
        show_operations(x, y);
    }
    else if (type == 2) {
        float x, y;
        cout << "Введите два float: ";
        cin >> x >> y;
        show_operations(x, y);
    }
    else if (type == 3) {
        double x, y;
        cout << "Введите два double: ";
        cin >> x >> y;
        show_operations(x, y);
    }

    return 0;
}
