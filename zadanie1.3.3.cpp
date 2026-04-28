#include <iostream>
#include <clocale>
#include <string>
#include <fcntl.h>
#include <io.h>
#include <Windows.h>
using namespace std;

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	std::wstring pol;
	std::wstring znak;
	int voz, num=99;

	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	wcout << L"Введите пол: "; wcin >> pol;
	wcout << L"Введите знак зодиака: "; wcin >> znak;
	wcout << L"Введите возраст: "; wcin >> voz;

	if (voz < 40 && voz > 0 && pol == L"м")
	{
		while (znak == L"рак" || znak == L"скорпион" || znak == L"рыбы")
		{
		num = 1;
		break;
		}
	}
		else if (voz <= 30 && voz >= 15 && pol == L"ж")
		{
		while (znak == L"телец" || znak == L"дева" || znak == L"козерог")
			{
			num = 2;
			break;
			}
		}
	
		else
			{
			num = 99;
			}

			
		switch (num) {
	case 1:
		std::wcout << L"Сегодня очень плодотворный день.Можно добиться того, что прежде казалось почти невозможным." << std::endl; break;
	case 2:
		std::wcout << L"Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl; break;
	case 99:
		std::wcout << L"Гороскоп для вас находится в разработке.Приходите чуточку позже;)" << std::endl; break;
	}

	return EXIT_SUCCESS;
}