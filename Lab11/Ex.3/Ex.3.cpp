#include <iostream>
#include <cmath>
#include <Windows.h>

double f1(double x)
{
    return 7 * cos(x) * sin(7 + 2 * x);
}

double f2(double x)
{
    return 2 * sin(x - 4.5) / (sin(0) - x);
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a = 0;
    double b = 0;

    for (int k = 9; k <= 14; k++)
        a += f1(k);

    for (int k = 9; k <= 17; k++)
        b += f2(k);

    double z = pow(a * b, 1 / 4);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "z = " << z << std::endl;

    return 0;
}