#include <iostream>
using namespace std;
int main()//main() вернет в качестве значения целое число.
{
	int a, t1, t2, t3,b;// переменные имеют целочисленный тип данных int.
	cout << "Enter your number ";// отображение вывода на стандартное устройство вывода
	cin >> a;// ввод с консоли а
	if (a >= 100 && a < 1000)
	{

		t1 = a / 100;// t1- цифра единиц
		a = a % 100;
		t2 = a / 10;// t2 - цифра десятков
		a = a % 10;
		t3 = a;// t3 - цифра сотен
		cout << "composition of numbers " << t1 * t2 * t3;// вывод произведения
		cout << "    Enter a new number ";// отображение вывода на стандартное устройство вывода
		cin >> b;// ввод числа для сравнения
		if (t1 * t2 * t3 < b)// если произведение меньше введеного числа, то 
			cout << "the composition is smaller than b";// вывод
		else// иначе
			cout << "the composition is bigger than b";// вывод

		if (a % 7 == 0)// если а кратно 7 то
		{
			cout << "number is a multiple of 7" << endl;// вывод
		}
		else
			cout << " number is not a multiple of 7" << endl;// вывод
	}
	else
		cout << "error";
	
		return 0;//возврат 0 означает, что программа будет выполнена успешно и сделала то, для чего была предназначена.


}