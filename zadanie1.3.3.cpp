#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	std::string pol;
	std::string znak;
	int voz, num;


	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << "Введите пол: "; cin >> pol;
	cout << "Введите знак зодиака: "; cin >> znak;
	cout << "Введите возраст: "; cin >> voz;
	
	if (voz < 40 && voz > 0 && pol == "м")
	{
		if (znak == "рак" || znak == "скорпион" || znak == "рыбы")
		{
		num = 1;
	}
		else num = 99;
	}
	else num = 99;

	if (voz <= 30 && voz >= 15 && pol == "ж")
	{
		if (znak == "телец" || znak == "дева" || znak == "козерог")
		{
			num = 2;
		}
		else num = 99;
	}
	else num = 99;

	switch (num) {
		case 1:
			std::cout << "Сегодня очень плодотворный день.Можно добиться того, что прежде казалось почти невозможным." << std::endl; break;
		case 2:
			std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl; break;
		case 99:
			std::cout << "Гороскоп для вас находится в разработке.Приходите чуточку позже;)" << std::endl; break;
		}
	
	return EXIT_SUCCESS;
}