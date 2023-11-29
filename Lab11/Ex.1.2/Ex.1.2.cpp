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

    switch (tel)
    {
    case 50:
    case 66:
    case 95:
    case 99:
        std::cout << "Vodafone";
        break;
    case 67:
    case 68:
    case 96:
    case 97:
    case 98:
        std::cout << "Київстар";
        break;
    case 63:
    case 73:
    case 93:
        std::cout << "Lifecell";
        break;
    case 91:
        std::cout << "3Mob";
        break;
    case 92:
        std::cout << "PEOPLEnet";
        break;
    case 94:
        std::cout << "Інтертелеком";
        break;
    default:
        std::cout << "Невідомий оператор";
    }

    return 0;
}