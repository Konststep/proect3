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
    int x1, x2, ax1, ax2;
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    wcout << L"Введите целое число: "; wcin >> x1;
    wcout << L"Введите целое число: "; wcin >> x2;
    ax1 = x1;
    ax2 = x2;

    if (-100 > x1 || x1 > 100 || -100 > x2 || x2 > 100)
    {
        std::wcout << L"Ошибка! Одно из чисел вне диапазона!";
    }
    else
    {
        if (ax1 < 0)
        {
            std::wcout << L"минус ";
            ax1 = x1 * -1;
        }
        if (ax1 / 10 == 1) {

            switch (ax1 % 10) {
            case 1: wcout << L"одинадцать "; break;
            case 2: wcout << L"двенадцать "; break;
            case 3: wcout << L"тринадцать "; break;
            case 4: wcout << L"четырнадцать "; break;
            case 5: wcout << L"пятнадцать "; break;
            case 6: wcout << L"шестнадцать "; break;
            case 7: wcout << L"семнадцать "; break;
            case 8: wcout << L"восемнадцать "; break;
            case 9: wcout << L"девятнадцать "; break;
            }
        }
        else {
            switch (ax1 / 10)
            {
            case 1: wcout << L"десять "; break;
            case 2: wcout << L"двадцать "; break;
            case 3: wcout << L"тридцать "; break;
            case 4: wcout << L"сорок "; break;
            case 5: wcout << L"пятьдесят "; break;
            case 6: wcout << L"шестьдесят "; break;
            case 7: wcout << L"Семьдесят "; break;
            case 8: wcout << L"восемьдесят "; break;
            case 9: wcout << L"Девяносто "; break;
            }

            switch (ax1 % 10)
            {
            case 0: wcout << L"ноль "; break;
            case 1: wcout << L"один "; break;
            case 2: wcout << L"два "; break;
            case 3: wcout << L"три "; break;
            case 4: wcout << L"четыре "; break;
            case 5: wcout << L"пять "; break;
            case 6: wcout << L"шесть "; break;
            case 7: wcout << L"семь "; break;
            case 8: wcout << L"восемь "; break;
            case 9: wcout << L"девять "; break;
            }

        }

        if (x1 > x2)
        {
            std::wcout << L"больше ";
        }
        else if (x1 < x2)
        {
            std::wcout << L"меньше ";
        }
        else if (x1 = x2)
        {
            std::wcout << L"равно ";
        }

        if (ax2 < 0)
        {
            std::wcout << L"минус ";
            ax2 = x2 * -1;
        }
        if (ax2 / 10 == 1) {

            switch (ax2 % 10) {
            case 1: wcout << L"одинадцать "; break;
            case 2: wcout << L"двенадцать "; break;
            case 3: wcout << L"тринадцать "; break;
            case 4: wcout << L"четырнадцать "; break;
            case 5: wcout << L"пятнадцать "; break;
            case 6: wcout << L"шестнадцать "; break;
            case 7: wcout << L"семнадцать "; break;
            case 8: wcout << L"восемнадцать "; break;
            case 9: wcout << L"девятнадцать "; break;
            }
        }
        else {
            switch (ax2 / 10)
            {
            case 1: wcout << L"десять "; break;
            case 2: wcout << L"двадцать "; break;
            case 3: wcout << L"тридцать "; break;
            case 4: wcout << L"сорок "; break;
            case 5: wcout << L"пятьдесят "; break;
            case 6: wcout << L"шестьдесят "; break;
            case 7: wcout << L"Семьдесят "; break;
            case 8: wcout << L"восемьдесят "; break;
            case 9: wcout << L"Девяносто "; break;
            }
            switch (ax2 % 10)
            {
            case 0: wcout << L"ноль "; break;
            case 1: wcout << L"один "; break;
            case 2: wcout << L"два "; break;
            case 3: wcout << L"три "; break;
            case 4: wcout << L"четыре "; break;
            case 5: wcout << L"пять "; break;
            case 6: wcout << L"шесть "; break;
            case 7: wcout << L"семь "; break;
            case 8: wcout << L"восемь "; break;
            case 9: wcout << L"девять "; break;
            }

        }
    }
    return EXIT_SUCCESS;
}