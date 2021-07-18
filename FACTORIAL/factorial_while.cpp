#include<iostream>
using namespace std;
int main() {
	long fact = 1;
	int n;
	cout << "정수를 입력하세요: ";
	cin >> n;

	int j = 1; //변수 j를 1로 초기화시키고 선언한다.
	while (j <= n)//여기서 조건식은 j<=n이므로 변수 j의 값이 n과 같아질 때까지 while문의 블록을 반복수행한다.
	{
		fact = fact * j;//팩토리얼의 값을 계산하는 식으로, 이 식을 while문의 조건식이 만족할 때 반복수행하면 팩토리얼의 값이 구해진다.
		j++; //변수 j값이 1 증가하게 한다.
	}

	cout << n << "!은" << fact << "입니다.\n";
	return 0;
}
