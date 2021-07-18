#include <stdio.h>
int main() {
	int input[100] = { 0 };//세 삼각수를 담을 배열
	scanf("%d", input);//배열 input의 0번째에 입력받은 수를 대입
	int num[100] = { 0, };//삼각수들을 담을 배열

	if (0 < input[0] && input[0] < 1001) {//입력받는 수의 조건이 1이상 1000이하이므로 if문 조건으로 검
		for (int i = 1; i <= 44; i++) {//삼각수들을 44까지 배열에 담음
			num[i] = i * (i + 1) / 2;
		}
		for (int i = 1; i <= 44; i++) {//3중 for문을 통해 합이 입력 받은 수인 세 삼각수를 찾도록 함
			for (int j = 1; j <= 44; j++) {
				for (int k = 1; k <= 44; k++) {
					if (num[i] + num[j] + num[k] == input[0]) {//세 삼각수를 배열 input에 대입함
						input[0] = num[i];
						input[1] = num[j];
						input[2] = num[k];
						break;
					}
				}
			}
		}

		if (input[0] * input[1] * input[2] != 0)//세 수 중 0이 없는 경우 세 삼각수들을 출력
			printf("%d %d %d", input[0], input[1], input[2]);
		else//아닌 경우 -1을 출력
			printf("-1");
	}
	return 0;
}
