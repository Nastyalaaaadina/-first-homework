#include <iostream>
using namespace std;
int main()
{
    int a, b, c;// ?????????? b1,b2,h ????? ????????????? ??? ?????? int.
    std::cout << "Enter a: ";// ??????????? ?????? ?? ??????????? ?????????? ??????
    std::cin >> a; // ???? ? ??????? a
    std::cout << "Enter b: ";// ??????????? ?????? ?? ??????????? ?????????? ??????
    std::cin >> b; // ???? ? ??????? b
    std::cout << "Enter c:";// ??????????? ?????? ?? ??????????? ?????????? ??????
    std::cin >> c; // ???? ? ??????? c
    if (a == b || a == c || b == c)//???? ?????-?? ??? ??????? ????? ??
        std::cout << " isosceles.";// ?????, ??? ??????????? ??????????????
    else// ?????
        std::cout << " not isosceles.";// ?????, ??? ??????????? ?? ??????????????

    return 0;//??????? 0 ????????, ??? ????????? ????? ????????? ??????? ? ??????? ??, ??? ???? ???? ?????????????.
}