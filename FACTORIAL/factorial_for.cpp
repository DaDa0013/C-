#include<iostream>
using namespace std;
int main() {
	long fact = 1;
	int n;
	cout << "정수를 입력하세요: ";
	cin >> n;

	for (int j = 1; j <= n; j++) //for문으로 여기서 조건식은 j<=n이므로 변수 j의 값이 변수 n의 값과 같아질때까지 다음 식을 반복수행한다.

		fact = fact * j; //자연수 n에 대하여 n!의 값은 1부터 n까지 자연수를 모두 곱한 값이다. 따라서 이 식을 반복수행하면 팩토리얼의 값을 구할 수 있다.

	cout << n << "!은" << fact << "입니다.\n";
	return 0;
}
