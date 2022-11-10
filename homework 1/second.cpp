#include <iostream>
#include <math.h>
using namespace std;

int main2() //main() вернет в качестве значения целое число.
{
	double r; // переменная r имеют тип данных double.
	std::cout << "radius:"; // отображение вывода на стандартное устройство вывода первого основания
	std::cin >> r; // ввод с консоли r
	double pi = 3.14;
	double s = pi * (r * r);

	double C = 2 * pi * r;
	cout << "square:" << s << "length" << C;
	return 0;
}

