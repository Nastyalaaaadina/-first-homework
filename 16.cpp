#include <iostream>
using namespace std;

int main()
{
	int x;// ?????????? ????? ????????????? ??? ?????? int.
	cout << "enter ticket num = ";// ??????????? ?????? ?? ??????????? ?????????? ??????
	cin >> x;// ???? ?????? ??????
	if (x > 99999 && x < 1000000) {// ???????? ????????, ??????????????? ?????? ??????
		if (x / 100000 + x / 10000 % 10 + x / 1000 % 10 == x / 100 % 10 + x / 10 % 10 + x % 10)// ??????? ?????? ??????????? ?????
			cout << "happy";//?????
		else cout << "not happy";// ????? ?????
	}
	else {//?????
		cout << "error";// ???? ???????? ? ?? ???????????? ???????, ?? ??????? ??????
	}
}