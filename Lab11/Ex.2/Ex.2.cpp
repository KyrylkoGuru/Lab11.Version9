#include <iostream>
#include <cmath>
#include <Windows.h>

    int main() 
    {
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        double x, y, r;

        std::cout << "������ ���������� x: ";
        std::cin >> x;

        std::cout << "������ ���������� y: ";
        std::cin >> y;

        std::cout << "������ ����� ���� r: ";
        std::cin >> r;

        if (x >= -r && x <= 0 && y >= 0 && y <= r && pow(x + r, 2) + pow(y - r, 2) >= pow(r, 2)) 
        {
            std::cout << "����� ��������� � ������������ �������" << std::endl;
        }
        else
        {



            if (x >= 0 && y <= 0 && pow(x - r, 2) + pow(y + r, 2) <= pow(r, 2))

                std::cout << "����� ��������� � ������������ �������" << std::endl;
            else
            {
                std::cout << "����� �� ��������� � ������������ �������" << std::endl;
            }
        }
      

        return 0;
    }