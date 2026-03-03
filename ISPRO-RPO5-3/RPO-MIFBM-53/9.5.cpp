#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Размер: ";
    cin >> n;

    int arr[100];
    cout << "Элементы: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nДубликаты:\n";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " на позициях " << i << "," << j << endl;
            }
        }
    }

    int minv = arr[0], maxv = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minv) minv = arr[i];
        if (arr[i] > maxv) maxv = arr[i];
    }

    cout << "\nМассив (размер " << n << "): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nMin: " << minv << " Max: " << maxv << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Отсортировано: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << "\nУникальные: ";
    bool used[1000] = { 0 };
    for (int i = 0; i < n; i++) {
        if (!used[arr[i] + 500]) {
            cout << arr[i] << " ";
            used[arr[i] + 500] = true;
        }
    }
    cout << endl;

    return 0;
}
