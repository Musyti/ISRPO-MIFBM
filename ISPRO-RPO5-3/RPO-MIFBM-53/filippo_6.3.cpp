#include <iostream>

int main() {
	system("chcp 1251");

	int mas[5], sum = 0, arithmetic = 0, max = 0, min = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << "Введите " << i+1 << " число: ";
		std::cin >> mas[i];
	}
	std::cout << "\nМассив: ";
	max = min = mas[0];
	for (int i = 0; i < 5; i++) {
		sum += mas[i];
		std::cout << mas[i] << " ";
		if (mas[i] >= max) {
			max = mas[i];
		}
		else {
			min = mas[i];
		}
	}
	arithmetic = sum / 5;
	std::cout << "\nСумма всех элементов: " << sum;
	std::cout << "\nСреднее арифметическое: " << arithmetic;
	std::cout << "\nМаксимальное: " << max << " Минимальное: " << min;


}