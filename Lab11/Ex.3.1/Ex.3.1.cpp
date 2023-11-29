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

    std::cout << "������� ������:\n";
    std::cout << "1. ���� ����� 1 + 3 + 5 + 7 + ... + (2n - 1)\n";
    std::cout << "2. ʳ������ ���� ��� ��������� ������� ���� � �����\n";
    std::cout << "3. �����, ����� k, ������� ���� ���� ���� ������� g\n";

    std::cin >> choice;

    switch (choice) {
    case 1: {
        int n;
        std::cout << "������ �������� n: ";
        std::cin >> n;

        int sum = 0;
        for (int i = 1; i <= 2 * n - 1; i += 2) {
            sum += i;
        }

        std::cout << "���� ����� 1 + 3 + 5 + 7 + ... + (2n - 1) ������� " << sum << std::endl;
        break;
    }
    case 2: {
        double S, N, r;
        std::cout << "������ ��������� ���� (S): ";
        std::cin >> S;

        std::cout << "������ ������ ���� (N): ";
        std::cin >> N;

        r=0.2;

        int n = 0;
        while (S < N) {
            S *= 1.2;
            n += 1;
        }

        std::cout << "ʳ������ ����, ���������� ��� ���������� ������ ����: " << n << std::endl;
        break;
    }
    case 3: {
        int k, g;
        std::cout << "������ �������� k: ";
        std::cin >> k;
        std::cout << "������ �������� g: ";
        std::cin >> g;

        std::cout << "�����, ����� " << k << ", ������� ���� ���� ���� ������� " << g << ":\n";
        for (int i = 1; i < k; ++i) {
            if (SqSum(i) == g) {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
        break;
    }
    default:
        std::cout << "������� ���� �����\n";
        break;
    }

    return 0;
}
