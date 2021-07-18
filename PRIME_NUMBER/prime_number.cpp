#include <stdio.h>
int main() {

	int n;//입력받을 수
	int i, j;//for문에 쓰일 변수
	int p[1000] = {};//소수와 소수가 아닌 것들을 구별하여 넣을 배열
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {//첫번째 for문은 2부터 n까지 소수인지 판별할 수 i를 지정
		for (j = 2; j < i; j++) {//두번째 for문은 i가 소수인지 판별
			if (i % j == 0)//if 조건문이 성립한다는 것은 i가 소수가 아니기 때문에 for문을 나옴
				break;
		}
		if (i == j) {//if 조건문이 성립한다는 것은 소수라는 것
			p[i] = 1;//소수일때 배열 p에 1을 대입
		}
	}
	for (int q = n / 2; q >= 0; q--) {//두 소수의 차가 적어야 하기 때문에 n의 중간에서부터 시작
		if (p[q] && p[n - q] == 1)//두 수가 소수라면 두 수를 출력한다.
		{
			printf("%d %d\n", q, n - q);
			break;
		}
	}

	return 0;
}
