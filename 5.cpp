#include <iostream>
#include <cmath>

int main()
{
    double x, y;//  ����������  ����� ��������������� ��� ������ double.
    printf("x = "); // ����� �������� � �� �������
    std::cin >> x;// ���� � � ����������
    printf("y = "); // ����� �������� � �� �������
    std::cin >> y; // ���� � � ����������
    printf("radius = %f\n angle = %f radians\n", std::hypot(x, y), std::atan2(y, x));// ������� �� ���������� � �������� �������
}