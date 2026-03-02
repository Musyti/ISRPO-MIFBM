#include <iostream>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    system("chcp 1251");
    int num1, num2;
    std::cout << "Введите 2 целых числа: ";
    std::cin >> num1 >> num2;
    int result = gcd(num1, num2);
    std::cout << "НОД этих чисел: " << result << std::endl;
    return 0;
}