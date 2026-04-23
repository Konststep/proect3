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

    //for (int a = 0; a < 2; a++)
    if (-100 > x1 || x1 > 100 || -100 > x2 || x2 > 100)
       {       
           std::cout << "Ошибка! Одно из чисел вне диапазона!";
       }
       else
       {
        if (-20 < x1 < 20) {
            switch (x1 % 100) {
            case 10: cout << "десять "; break;
            case 11: cout << "одинадцать "; break;
            case 12: cout << "двенадцать "; break;
            case 13: cout << "тринадцать "; break;
            case 14: cout << "четырнадцать "; break;
            case 15: cout << "пятнадцать "; break;
            case 16: cout << "шестнадцать "; break;
            case 17: cout << "семнадцать "; break;
            case 18: cout << "восемнадцать "; break;
            case 19: cout << "девятнадцать "; break;
            }
        }
        else {
            switch (x1 / 10)
            {
            case 2: cout << "двадцать "; break;
            case 3: cout << "тридцать "; break;
            case 4: cout << "сорок "; break;
            case 5: cout << "пятдесят "; break;
            case 6: cout << "шестьдесят "; break;
            case 7: cout << "Семьдесят "; break;
            case 8: cout << "Восемьдесят "; break;
            case 9: cout << "Девяносто "; break;
            }
           
                switch (x1 % 10)
                {
                case 0: cout << "ноль "; break;
                case 1: cout << "один "; break;
                case 2: cout << "два "; break;
                case 3: cout << "три "; break;
                case 4: cout << "четыре "; break;
                case 5: cout << "пять "; break;
                case 6: cout << "шесть "; break;
                case 7: cout << "семь "; break;
                case 8: cout << "восемь "; break;
                case 9: cout << "девять "; break;
                }
            
        }
        }
            
            if (x1 > x2)
            {
                std::cout << "больше ";
            }
            else if (x1 < x2)
            {
                std::cout << "меньше ";
            }
            else if (x1 = x2)
            {
                std::cout << "равно ";
            }

            switch ((x2 % 100) / 10)
            {
            case 20: cout << "двадцать "; break;
            case 30: cout << "тридцать "; break;
            case 40: cout << "сорок "; break;
            case 50: cout << "пятдесят "; break;
            case 60: cout << "шестьдесят "; break;
            case 70: cout << "Семьдесят "; break;
            case 80: cout << "Восемьдесят "; break;
            case 90: cout << "Девяносто "; break;
            }

            if (x2 % 100 >= 10 & x2 % 100 < 20) {
                switch (x2 % 100) {
                case 10: cout << "десять "; break;
                case 11: cout << "одинадцать "; break;
                case 12: cout << "двенадцать "; break;
                case 13: cout << "тринадцать "; break;
                case 14: cout << "четырнадцать "; break;
                case 15: cout << "пятнадцать "; break;
                case 16: cout << "шестнадцать "; break;
                case 17: cout << "семнадцать "; break;
                case 18: cout << "восемнадцать "; break;
                case 19: cout << "девятнадцать "; break;
                }
            }
            else {
                switch (x2 % 10)
                {
                case 0: cout << "ноль "; break;
                case 1: cout << "один "; break;
                case 2: cout << "два "; break;
                case 3: cout << "три "; break;
                case 4: cout << "четыре "; break;
                case 5: cout << "пять "; break;
                case 6: cout << "шесть "; break;
                case 7: cout << "семь "; break;
                case 8: cout << "восемь "; break;
                case 9: cout << "девять "; break;
                }
            }
        
   
            return EXIT_SUCCESS;
        }