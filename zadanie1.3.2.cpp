#include <iostream>
#include <clocale>
#include <Windows.h>

int main() {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a, b, c, max, sred, min;

	std::cout << "Введите первое число: " << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число: " << std::endl;
	std::cin >> b;
	std::cout << "Введите третье число: " << std::endl;
	std::cin >> c;

	max = (a >= b && a >= c) ? a : b >= c ? b : c;
	min = (a <= b && a <= c) ? a : b <= c ? b : c;
	sred = (max > a && a >= min) ? a : (max > b && b > min) ? b : c;

	std::cout << max << "\t" << sred << "\t" << min << std::endl;

	return EXIT_SUCCESS;
}