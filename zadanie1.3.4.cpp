#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	int x1, x2;
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << "Введите целое число: "; cin >> x1;
	cout << "Введите целое число: "; cin >> x2;

	if ((-100 <= x1) && (x1 <= 100) || (-100 <= x2) && (x2 <= 100))
	{
		if (x1 > x2)
		{
			std::string chis = std::to_string(x1) + " больше " + std::to_string(x2);
		}
		else if  (x1 < x2)
		{
			std::string chis = std::to_string(x1) + " меньше " + std::to_string(x2);
		}
		else if (x1 = x2)
		{
			std::string chis = std::to_string(x1) + " равно " + std::to_string(x2);
		}
	}
	else 
	{
		std::cout << "Ошибка! Одно из чисел вне диапазона!"
	}

	

	return EXIT_SUCCESS;
}