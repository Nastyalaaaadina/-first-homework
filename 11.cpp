#include <iostream>
using namespace std;

int main()
{
    int amount;// ���������� ����� ������������� ��� ������ int.
    double result;// ���������� �����  ��� ������ double.

    std::cout << "enter amount: ";// ����������� ������ �� ����������� ���������� ������
    std::cin >> amount;// ���� � ������� ����� �������

    if (amount > 1000)// ���� ���� ������ 1000 ��
    {
        result = amount*0.9;// ������� �������� ��������� �� �������
        cout << "the amount with a discount of 10% : " << result;// ����� ����������
    }
    else//�����
    {
        cout << "the amount of your purchase is less than 1000, the discount is not provided";// ����� ����, ��� ������ �� �����
    }
    return 0;//������� 0 ��������, ��� ��������� ����� ��������� ������� � ������� ��, ��� ���� ���� �������������.
}