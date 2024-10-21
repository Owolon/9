#include <iostream>
#include <cmath>

int main() {
    const int R = 10; // �� ������ �������� �������� R ��� ������ �������� ������������
    const int height = static_cast<int>(R * std::cos(M_PI / 6)); // ������ R*cos30
    const int base = 2 * R;

    // ������ �������� ������������
    for (int i = 1; i <= height; ++i) {
        // ����� �������� ����� ���������
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }
        // ����� ����������� ��������
        for (int k = 0; k < base / 2; ++k) {
            if (k < i) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    // ������ �������� ������������
    for (int i = 1; i <= height; ++i) {
        // ����� �������� ����� ���������
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }
        // ����� ����������� ��������
        for (int k = 0; k < base / 2; ++k) {
            if (k < i) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
