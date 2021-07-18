//ver.c++언어

#include <iostream>
using namespace std; //namespace에 있는 std에 정의되어있는 함수들을 사용하기 위해 적음
int main() {
	int money;//현재 가진돈
	int price;//사탕 가격
	cout << "현재 가지고 있는 돈:""";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> price;
	int number = money / price; //살 수 있는 캔디 갯수
	cout << "최대로 살 수 있는 캔디의 개수=" << number << endl;
	int remain = money % price; //거스름돈
	cout << "캔디 구입 후 남은 돈 =" << remain << endl;
	return 0;
}
