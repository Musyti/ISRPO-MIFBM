#include <iostream>

void isLessThanNull( const float arr[7]) {
	std::cout << "Отрицательные числа: ";
	for (int i = 0; i < 7; i++) {
		if (arr[i] < 0) std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void isNotInteger(const float arr[7]) {
	std::cout << "Нецелые числа: ";
	for (int i = 0; i < 7; i++) {
		if (arr[i] != static_cast<int>(arr[i])) std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void isIntegerAndPositive(const float arr[7]) {
	std::cout << "Нецелые числа: ";
	for (int i = 0; i < 7; i++) {
		if (arr[i] == static_cast<int>(arr[i]) && arr[i] >= 0) std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	system("chcp 1251");
	system("cls");
	float arr[7] = {};
	std::cout << "Введите элементы массива (дробные и отрицательные допускаются): ";
	for (int i = 0; i < 7; i++) {
		std::cin >> arr[i];
	}
	isLessThanNull(arr);
	isNotInteger(arr);
	isIntegerAndPositive(arr);
}