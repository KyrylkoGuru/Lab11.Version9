#include <iostream>
#include <Windows.h>


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int tel;
    std::cout << "Введіть телефонний код \n";
    std::cout << "Доступні коди: 050, 066, 095, 099, 067, 068, 096 \n 097, 098, 063, 073, 093, 091, 092, 094" << std::endl;
    std::cin >> tel;

    if (tel == 50 || tel == 66 || tel == 95 || tel == 99)
        std::cout << "Vodafone";
    else if (tel == 67 || tel == 68 || tel == 96 || tel == 97 || tel == 98)
        std::cout << "Київстар";
    else if (tel == 63 || tel == 73 || tel == 93)
        std::cout << "Lifecell";
    else if (tel == 91)
        std::cout << "3Mob";
    else if (tel == 92)
        std::cout << "PEOPLEnet";
    else if (tel == 94)
        std::cout << "Інтертелеком";
    else
        std::cout << "Невідомий оператор";
}