#include <iostream>
#include <cmath>

int main() {
    const int R = 10; // Вы можете изменить значение R для разных размеров треугольника
    const int height = static_cast<int>(R * std::cos(M_PI / 6)); // Высота R*cos30
    const int base = 2 * R;

    // Первое половина треугольника
    for (int i = 1; i <= height; ++i) {
        // Вывод пробелов перед символами
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }
        // Вывод закрашенных символов
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

    // Вторая половина треугольника
    for (int i = 1; i <= height; ++i) {
        // Вывод пробелов перед символами
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }
        // Вывод закрашенных символов
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
