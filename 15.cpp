#include <iostream> 

int main()
{
    int n;// ���������� ����� ������������� ��� ������ int.

    std::cout << "enter the number of month" << std::endl;// ����������� ������ �� ����������� ���������� ������
    std::cin >> n;// ���� n
    if (n == 1)// ���� n=1 nj
        std::cout << "January ";// ����� ������
    else if (n == 2)// ���� ����
        std::cout << "February ";// ����� �������
    else if (n == 3)// ���� ����
        std::cout << "March ";// ����� ����
    else if (n == 4) // ���� 4
        std::cout << "April ";// ����� ������
    else if (n == 5)// ���� 5
        std::cout << "May " ;// ����� ���
    else if (n == 6)// ���� 6
        std::cout << "June " ;// ����� ����
    else if (n == 7)// ���� 7
        std::cout << "July ";// ����� ����
    else if (n == 8)// ���� 8
        std::cout << "August ";// ����� ������
    else if (n == 9)// ���� 9
        std::cout << "September ";// ����� ��������
    else if (n == 10)// ���� 10
        std::cout << "october ";// ����� �������
    else if (n == 11)// ���� 11
        std::cout << "November ";// ����� ������
    else if (n == 12)// ���� 12
        std::cout << "December ";// ����� �������
    if (n== 1 || n == 2 || n== 12)// ���� 1 2 ��� 12
        std::cout << "Winter " << std::endl;// ����� ����
    else if (n > 2 && n< 6)// ���� �� 3 �� 5
        std::cout << "Spring " << std::endl;// ����� �����
    else if (n > 5 && n < 9)// ���� �� 6 �� 8
        std::cout << "Summer " << std::endl;// ����� ����
    else if (n> 8 && n < 12)// ���� �� 9 �� 11
        std::cout << "Autmn " << std::endl;// ����� �����
    else
        std::cout << "������ ����� ������ " << std::endl;// ����� ����� ������ ������
}