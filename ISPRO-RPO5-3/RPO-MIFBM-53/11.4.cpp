#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> sales;
    int choice;

    while (true) {
        cout << "\n=== КАССА ===\n";
        cout << "1. Новая продажа\n";
        cout << "2. Список продаж\n";
        cout << "3. Отменить последнюю\n";
        cout << "4. Отчёт\n";
        cout << "5. Min/Max продажа\n";
        cout << "0. Выход\n";
        cout << ">> ";
        cin >> choice;

        if (choice == 1) {
            double sum;
            cout << "Сумма продажи: ";
            cin >> sum;
            sales.push_back(sum);
            cout << "Продажа #" << sales.size() << " добавлена\n";
        }
        else if (choice == 2) {
            cout << "\nСписок продаж:\n";
            for (int i = 0; i < sales.size(); i++) {
                cout << i + 1 << ". " << sales[i] << " руб\n";
            }
        }
        else if (choice == 3) {
            if (!sales.empty()) {
                cout << "Отменена продажа #" << sales.size() << ": " << sales.back() << endl;
                sales.pop_back();
            }
            else {
                cout << "Нет продаж\n";
            }
        }
        else if (choice == 4) {
            if (!sales.empty()) {
                double total = 0;
                for (double s : sales) total += s;
                cout << "Продаж: " << sales.size() << endl;
                cout << "Общая сумма: " << total << " руб\n";
            }
            else {
                cout << "Нет продаж\n";
            }
        }
        else if (choice == 5) {
            if (!sales.empty()) {
                double minv = sales[0], maxv = sales[0];
                for (double s : sales) {
                    if (s < minv) minv = s;
                    if (s > maxv) maxv = s;
                }
                cout << "Мин: " << minv << ", Макс: " << maxv << endl;
            }
            else {
                cout << "Нет продаж\n";
            }
        }
        else if (choice == 0) {
            break;
        }
    }
    return 0;
}
