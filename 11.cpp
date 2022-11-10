#include <iostream>
using namespace std;

int main()
{
    int amount;// переменная имеет целочисленный тип данных int.
    double result;// переменная имеет  тип данных double.

    std::cout << "enter amount: ";// отображение вывода на стандартное устройство вывода
    std::cin >> amount;// ввод с консоли суммы покупки

    if (amount > 1000)// если цена больше 1000 то
    {
        result = amount*0.9;// формула подсчета стоимости со скидкой
        cout << "the amount with a discount of 10% : " << result;// вывод результата
    }
    else//иначе
    {
        cout << "the amount of your purchase is less than 1000, the discount is not provided";// вывод того, что скидки не будет
    }
    return 0;//возврат 0 означает, что программа будет выполнена успешно и сделала то, для чего была предназначена.
}