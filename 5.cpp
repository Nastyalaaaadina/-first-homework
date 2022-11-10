#include <iostream>
#include <cmath>

int main()
{
    double x, y;//  переменные  имеют нецелочисленный тип данных double.
    printf("x = "); // вывод значения х на консоли
    std::cin >> x;// ввод х с клавиатуры
    printf("y = "); // вывод значения у на консоли
    std::cin >> y; // ввод у с клавиатуры
    printf("radius = %f\n angle = %f radians\n", std::hypot(x, y), std::atan2(y, x));// перенос из декартовой в полярную систему
}