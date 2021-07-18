#include<stdio.h>

int solution(int n) { //셀프 넘버 함수 int solution(N)를 정의하고, 입력 받은 자연수를 대입할 변수 n을 선언한다.
	int t = n / 10; // 십의 자릿수를 나타낼 변수 t를 선언하고, 자연수 n을 10으로 나눈 몫을 변수 t에 대입한다.
	int o = n % 10; // 일의 자릿수를 나타낼 변수 o를  선언하고, 자연수 n를 10으로 나눈 나머지를 변수 o에 대입한다.
	for (int sum = n; sum < (5 * n) - (t + o);) { // 셀프 넘버의 값을 나타낼 변수 sum을 선언하고, 자연수 n을 대입한다. 이때 for문이 5*n 전까지 계속 진행되어야 하기 때문에 변수 sum의 값이 (5*n)-(t+o)보다 작을때까지 반복한다.
		int t = sum / 10; //십의 자릿수를 나타내기 위해 sum의 값을 10으로 나눈 몫을 변수 t에 대입하여 선언한다.
		int o = sum % 10; //일의 자릿수를 나타내기 위해 sum의 값을 10으로 나눈 나머지를 변수 o에 대입하여 선언한다.
		sum = sum + t + o; //변수 sum에 sum의 값과 십의 자릿수 t, 일의 자릿수 o를 더한값을 대입한다.
		printf("%d\n", sum); //sum의 값을 출력한다.
	}
	return 0;

}
int main() {
	int n; //입력 받을 자연수를 대입할 변수 n을 선언한다.
	printf("N is = ");//콘솔창에 "N is ="을 출력한다.
	scanf("%d", &n); // 입력 받은 자연수를 변수 n에 대입한다.
	solution(n); // 함수 solution을 호출하여 출력한다.
}