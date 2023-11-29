#include <iostream>
#include <Windows.h>

int SqSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum * sum;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int choice;

    std::cout << "Виберіть варіант:\n";
    std::cout << "1. Сума чисел 1 + 3 + 5 + 7 + ... + (2n - 1)\n";
    std::cout << "2. Кількість років для отримання бажаною суми в банку\n";
    std::cout << "3. Числа, менші k, квадрат суми цифр яких дорівнює g\n";

    std::cin >> choice;

    switch (choice) {
    case 1: {
        int n;
        std::cout << "Введіть значення n: ";
        std::cin >> n;

        int sum = 0;
        for (int i = 1; i <= 2 * n - 1; i += 2) {
            sum += i;
        }

        std::cout << "Сума чисел 1 + 3 + 5 + 7 + ... + (2n - 1) дорівнює " << sum << std::endl;
        break;
    }
    case 2: {
        double S, N, r;
        std::cout << "Введіть початкову суму (S): ";
        std::cin >> S;

        std::cout << "Введіть бажану суму (N): ";
        std::cin >> N;

        r=0.2;

        int n = 0;
        while (S < N) {
            S *= 1.2;
            n += 1;
        }

        std::cout << "Кількість років, необхідних для досягнення бажаної суми: " << n << std::endl;
        break;
    }
    case 3: {
        int k, g;
        std::cout << "Введіть значення k: ";
        std::cin >> k;
        std::cout << "Введіть значення g: ";
        std::cin >> g;

        std::cout << "Числа, менші " << k << ", квадрат суми цифр яких дорівнює " << g << ":\n";
        for (int i = 1; i < k; ++i) {
            if (SqSum(i) == g) {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
        break;
    }
    default:
        std::cout << "Невірний вибір опції\n";
        break;
    }

    return 0;
}
