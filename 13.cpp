#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, res;// ���������� ����� ������������� ��� ������ int.

	a = rand() % 9;// ��������� ����� ��� �
	b = rand() % 9;// ��������� ����� ��� b

	printf("%d * %d = ", a, b);//%d	���������� ����� ������ ���� �� ������/ ������� printf() ���������� ���������� ������������� ���������� ��������
	scanf_s("%d",  &res);//������� ����� ����� � ��������� ��� �������� ���������� res, ���������� ���������������  ���������� � scanf():

	printf("%s\n", res == a * b ? "true" : "false");//�����
	return 0;//������� 0 ��������, ��� ��������� ����� ��������� ������� � ������� ��, ��� ���� ���� �������������.
}