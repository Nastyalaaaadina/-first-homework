#include <iostream>
#include <math.h>
using namespace std;

int main2() //main() ������ � �������� �������� ����� �����.
{
	double r; // ���������� r ����� ��� ������ double.
	std::cout << "radius:"; // ����������� ������ �� ����������� ���������� ������ ������� ���������
	std::cin >> r; // ���� � ������� r
	double pi = 3.14;
	double s = pi * (r * r);

	double C = 2 * pi * r;
	cout << "square:" << s << "length" << C;
	return 0;
}

