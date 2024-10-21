#include <iostream>

int main() {
    // Начальное и конечное значения
    int start = 41;
    int end = 80;

    // Цикл для вывода чисел от start до end
    for (int i = start; i <= end; ++i) {
        std::cout << i << " ";

        // Печатаем новую строку каждые 10 чисел
        if ((i - start + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}