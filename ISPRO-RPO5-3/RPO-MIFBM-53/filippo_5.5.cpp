#include <iostream>

int main() {
	system("chcp 1251");

	int number;
	std::cout << "Введите число: ";
	std::cin >> number;
	std::cout << std::endl;

	if (number > 99999 && number < 1000000) {
		std::cout << number << ": число шестизначное!" << std::endl;
	}
	else {
		std::cout << number << ": число не шестизначное!" << std::endl;
	}
}