#include <iostream>

int main() {
    // ��������� � �������� ��������
    int start = 41;
    int end = 80;

    // ���� ��� ������ ����� �� start �� end
    for (int i = start; i <= end; ++i) {
        std::cout << i << " ";

        // �������� ����� ������ ������ 10 �����
        if ((i - start + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}