#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c; // ���������� a, b, c  ����� ������������� ��� ������ int.
	std::cout << "first side:"; // ����������� ������ �� ����������� ���������� ������ ������� ���������
	std::cin >> a; // ���� � ������� a
	std::cout << " Second side:";// ����������� ������ �� ����������� ���������� ������ ������� ���������
	std::cin >> b;//���� � ������� b
	std::cout << "third side:";// ����������� ������ �� ����������� ���������� ������ ������
	std::cin >> c;//���� � ������� c
	double ma = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);// ������� ������� �� � 
	cout << " ma = " << ma;// ����� ������� �� �
	double mb = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);// ������� ������� �� � 
	cout << " mb = " << mb;// ����� ������� �� b
	double mc = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);// ������� ������� �� � 
	cout << " mc = " << mc;// ����� ������� �� c
	double ma1 = 0.5 * sqrt(2 * mb * mb + 2 * mc * mc - ma * ma);// ������� ������� �� � 
	cout << " ma1 = " << ma1;// ����� ������� �� m�
	double mb1 = 0.5 * sqrt(2 * ma * ma + 2 * mc * mc - mb * mb);// ������� ������� �� � 
	cout << " mb1 = " << mb1;// ����� ������� �� mb
	double mc1 = 0.5 * sqrt(2 *ma * ma + 2 * mb * mb - mc * mc);// ������� ������� �� � 
	cout << " mc1 = " << mc1;// ����� ������� �� mc
	return 0;
}