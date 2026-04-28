#include <iostream>
#include <clocale>
#include <Windows.h>

int main() {
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, max, sred, min;

	std::cout << "¬ведите первое число: " << std::endl;
	std::cin >> a;
	std::cout << "¬ведите второе число: " << std::endl;
	std::cin >> b;
	std::cout << "¬ведите третье число: " << std::endl;
	std::cin >> c;

	min = (a < b && a < c) ? a : (b < c) ? b : c;
	max = (a > b && a > c) ? a : (b > c) ? b : c;
	sred = (max > a && a > min) ? a : (max > b && b > min) ? b : c;

	std::cout << max << "\t" << sred << "\t" << min << std::endl;

	return EXIT_SUCCESS;
}