#include <iostream>
#include <vector>
#include <random>

int main() {
	system("chcp 1251");
	int sum = 0, arithmetic = 0, max = 0, min = 0, count, select;
	std::cout << "Введите число элементов массива: ";
	std::cin >> count;
	std::vector<int>mas(count);

	std::cout << "\nКак будем заполнять массив? \n1. Вручную\n2. Заполнить случайными числами\n";
	std::cin >> select;

	switch (select) {
	case 1: {
		for (int i = 0; i < mas.size(); i++) {
			std::cout << "Введите " << i + 1 << " число: ";
			std::cin >> mas[i];
		}
		break;
	}
	case 2: {
		for (int i = 0; i < mas.size(); i++) {
			mas[i] = rand() % 100 -50;
		}
		break;
	}
	}
	
	std::cout << "\nМассив: ";
	max = min = mas[0];
	for (int i = 0; i < mas.size(); i++) {
		sum += mas[i];
		std::cout << mas[i] << " ";
		if (mas[i] > max) {
			max = mas[i];
		}
		if(mas[i] < min) {
			min = mas[i];
		}
	}
	arithmetic = sum / 5;
	std::cout << "\nСумма всех элементов: " << sum;
	std::cout << "\nСреднее арифметическое: " << arithmetic;
	std::cout << "\nМаксимальное: " << max << " Минимальное: " << min;


}