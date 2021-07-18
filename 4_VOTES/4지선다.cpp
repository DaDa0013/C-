#include <stdio.h>
int main() {
	int m;//문제수
	int answers[100] = { 0 };  // 정답 배열 
	int points[100] = { 0 };   // 배점 배열 
	int st_answers[100] = { 0 }; // 학생 답 배열 
	int number;//학생수
	int score[100] = { 0 };//학생 점수
	int max = 0;//가장 높은 점수
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {//for문을 통해 정답을 반복적으로 배열에 담음
		scanf("%d", &answers[i]);
	}
	for (int i = 0; i < m; i++) {//for문을 통해 배점을 반복적으로 배열에 담음
		scanf("%d", &points[i]);
	}
	scanf("%d", &number);


	for (int i = 0; i < number; i++) {//
		int a = 0;//학생의 총 점수를 받을 변수 a 선언 후 반복할 때마다 0으로 초기화
		for (int j = 0; j < m; j++) {
			scanf("%d", &st_answers[j]);//학생의 답을 for문으로 받음
		}
		for (int j = 0; j < m; j++) {
			if (answers[j] == st_answers[j])//학생의 답이 정답일 때
				score[i] += points[j];	//그 문제의 배점을 성적에 담음
		}

		a += score[i];//학생의 총 점을 변수 a에 담음

		if (a >= max)//학생들의 점수 중 가장 높은 점수를 변수 max에 담음
			max = a;
	}

	printf("%d", max);
	return 0;
}
