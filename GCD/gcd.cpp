#include <stdio.h>
long long LCM(long long a, long long b)//최소 공배수를 구할 함수 LCM
{
	long long A = a;
	long long B = b;
	long long lcm;//최소 공배수를 담을 변수 lcm을 선언
	if (A < B) { //두 수중 큰 수를 A에, 작은 수를 B에 대입
		A = b;
		B = a;
	}
	while (B != 0) {//변수 B가 0이 아닐 때까지 while문을 반복
		long long gcd = A % B;//while문 안의 식들은 유클리드 호제법으로, 최대공약수를 구함
		A = B;
		B = gcd;
	}
	lcm = a * b / A;//최소 공배수를 구하는 공식
	return lcm; //함수의 리턴값을 변수 lcm으로 지정
}
int main() {
	int n[1000] = { 0, };//입력 받은 양의 정수들을 담을 배열
	int count = 0;//양의 정수들의 개수
	for (int i = 0; i < sizeof(n); i++) {//for문으로 양의 정수들을 배열n에 대입
		scanf("%d", &n[i]);
		count++;
		if (n[i] == -1)//-1을 입력 받으면 for문을 나감
			break;
	}
	long long num = n[0];//최소 공배수를 나타낼 변수 num을 선언, 배열n의 0번째 수를 대입
	for (int j = 0; j < count - 1; j++) {//배열 n의 마지막은 -1이므로 양의 정수들의 개수에 1을 뺀 값만큼 반복
		num = LCM(num, n[j + 1]);//함수 LCM에 두 수 num과 배열 n의 j+1번째 값을 대입하여 최소 공배수를 구하고, 변수 num에 최소 공배수를 대입
	}
	printf("%lld", num);//최소공배수를 나타내는 변수 num을 출력
	return 0;
}
