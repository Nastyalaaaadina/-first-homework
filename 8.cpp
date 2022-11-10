#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c; // переменные a, b, c  имеют целочисленный тип данных int.
	std::cout << "first side:"; // отображение вывода на стандартное устройство вывода первого основания
	std::cin >> a; // ввод с консоли a
	std::cout << " Second side:";// отображение вывода на стандартное устройство вывода второго основания
	std::cin >> b;//ввод с консоли b
	std::cout << "third side:";// отображение вывода на стандартное устройство вывода высоты
	std::cin >> c;//ввод с консоли c
	double ma = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);// формула медианы из а 
	cout << " ma = " << ma;// вывод медианы из а
	double mb = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);// формула медианы из а 
	cout << " mb = " << mb;// вывод медианы из b
	double mc = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);// формула медианы из а 
	cout << " mc = " << mc;// вывод медианы из c
	double ma1 = 0.5 * sqrt(2 * mb * mb + 2 * mc * mc - ma * ma);// формула медианы из а 
	cout << " ma1 = " << ma1;// вывод медианы из mа
	double mb1 = 0.5 * sqrt(2 * ma * ma + 2 * mc * mc - mb * mb);// формула медианы из а 
	cout << " mb1 = " << mb1;// вывод медианы из mb
	double mc1 = 0.5 * sqrt(2 *ma * ma + 2 * mb * mb - mc * mc);// формула медианы из а 
	cout << " mc1 = " << mc1;// вывод медианы из mc
	return 0;
}
