#include <stdio.h>
int main() {
	int n, i, j;
	int numbers[10000];//받을 자연수들을 담을 배열
	int t, count, mode = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)//for문으로 자연수들을 받아 배열에 넣음
		scanf("%d", &numbers[i]);

	for (i = 0; i < n; i++) {
		t = 1;//숫자의 개수를 초기화함
		for (j = i + 1; j < n; j++) {//for문을 통해 배열에 같은 숫자가 있는 지 판별
			if (numbers[i] == numbers[j])
				t++;//같은 숫자가 있으면 그 숫자의 개수를 구함
		}
		if (t > count) {//가장 많이 포함된 숫자 판별
			mode = numbers[i];//가장 많이 포함된 숫자를 변수 mode에 저장
			count = t;//가장 많이 포함된 숫자의 개수를 변수 count에 저장
		}
		else if (t == count) {//개수가 같은 숫자가 있을 경우
			if (mode < numbers[i])
				mode = numbers[i];//가장 큰 수를 변수 mode에 담음
		}
	}
	printf("%d %d", mode, count);
	return 0;
}
