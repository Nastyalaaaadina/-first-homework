#include <iostream> 

int main()
{
    int n;// переменная имеет целочисленный тип данных int.

    std::cout << "enter the number of month" << std::endl;// отображение вывода на стандартное устройство вывода
    std::cin >> n;// ввод n
    if (n == 1)// если n=1 nj
        std::cout << "January ";// вывод январь
    else if (n == 2)// если двум
        std::cout << "February ";// вывод февраль
    else if (n == 3)// если трем
        std::cout << "March ";// вывод март
    else if (n == 4) // если 4
        std::cout << "April ";// вывод апрель
    else if (n == 5)// если 5
        std::cout << "May " ;// вывод май
    else if (n == 6)// если 6
        std::cout << "June " ;// вывод июнь
    else if (n == 7)// если 7
        std::cout << "July ";// вывод июль
    else if (n == 8)// если 8
        std::cout << "August ";// вывод август
    else if (n == 9)// если 9
        std::cout << "September ";// вывод сентябрь
    else if (n == 10)// если 10
        std::cout << "october ";// вывод октябрь
    else if (n == 11)// если 11
        std::cout << "November ";// вывод ноябрь
    else if (n == 12)// если 12
        std::cout << "December ";// вывод декабрь
    if (n== 1 || n == 2 || n== 12)// если 1 2 или 12
        std::cout << "Winter " << std::endl;// вывод зима
    else if (n > 2 && n< 6)// если от 3 до 5
        std::cout << "Spring " << std::endl;// вывод весна
    else if (n > 5 && n < 9)// если от 6 до 8
        std::cout << "Summer " << std::endl;// вывод лето
    else if (n> 8 && n < 12)// если от 9 до 11
        std::cout << "Autmn " << std::endl;// вывод осень
    else
        std::cout << "Ошибка ввода данных " << std::endl;// иначе вывод ошибки данных
}
