#include <iostream>
using namespace std;
int main()//main() ������ � �������� �������� ����� �����.
{
	int a, t1, t2, t3,b;// ���������� ����� ������������� ��� ������ int.
	cout << "Enter your number ";// ����������� ������ �� ����������� ���������� ������
	cin >> a;// ���� � ������� �
	if (a >= 100 && a < 1000)
	{

		t1 = a / 100;// t1- ����� ������
		a = a % 100;
		t2 = a / 10;// t2 - ����� ��������
		a = a % 10;
		t3 = a;// t3 - ����� �����
		cout << "composition of numbers " << t1 * t2 * t3;// ����� ������������
		cout << "    Enter a new number ";// ����������� ������ �� ����������� ���������� ������
		cin >> b;// ���� ����� ��� ���������
		if (t1 * t2 * t3 < b)// ���� ������������ ������ ��������� �����, �� 
			cout << "the composition is smaller than b";// �����
		else// �����
			cout << "the composition is bigger than b";// �����

		if (a % 7 == 0)// ���� � ������ 7 ��
		{
			cout << "number is a multiple of 7" << endl;// �����
		}
		else
			cout << " number is not a multiple of 7" << endl;// �����
	}
	else
		cout << "error";
	
		return 0;//������� 0 ��������, ��� ��������� ����� ��������� ������� � ������� ��, ��� ���� ���� �������������.


}