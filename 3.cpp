#include <iostream>
#include <math.h>
using namespace std;

int main() //main() ?????? ? ???????? ???????? ????? ?????.
{
	int a, b; // ?????????? a,b,c,S ?????  ??? ?????? int.
	std::cout << "first catet:"; // ??????????? ?????? ?? ??????????? ?????????? ?????? ??????? ??????
	std::cin >> a; // ???? ? ??????? b1
	std::cout << "second catet:";// ??????????? ?????? ?? ??????????? ?????????? ?????? ??????? ??????
	std::cin >> b;//???? ? ??????? b2
	double c = sqrt(a * a + b * b);
	double S = (a * b) / 2;// ??????? ??????? ?????????????? ????????????
	cout <<"gipotenuza: "<< c << " square: " << S;// ????? ???????? ?????????? ???????
	return 0;//??????? 0 ????????, ??? ????????? ????? ????????? ??????? ? ??????? ??, ??? ???? ???? ?????????????.
}