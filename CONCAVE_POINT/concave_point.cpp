#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct p {//typedef로 x,y좌표를 담을 구조체 p를 Point로 선언
	int x;
	int y;
}Point;


int ccw(Point P1, Point P2, Point P3) {//벡터의 외적값을 계산하는 함수
	int S;
	S = (P2.x - P1.x) * (P3.y - P1.y) - (P2.y - P1.y) * (P3.x - P1.x);
	if (S < 0)
		return -1;
	else if (S == 0)
		return 0;
	else
		return 1;
}

int main() {
	int n; //꼭짓점의 갯수를 담을 변수 n 선언
	scanf("%d", &n);
	int number; //벡터의 외적값을 담을 변수 number 선언
	Point* arr = (Point*)malloc(sizeof(Point) * n);
	int count = 0; //오목점의 개수를 담을 변수 count선언 후 초기화

	for (int i = 0; i < n; i++) {//for문으로 동적배열 arr에 점의 좌표를 담음
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	for (int i = 0; i < n - 2; i++) {//for문으로 number에 ccw에 배열 arr를 대입한 값을 담음
		number = ccw(arr[i], arr[i + 1], arr[i + 2]);
		if (number < 0) {//number가 0보다 작으면, 즉 -1이면 오목점이므로 count를 1 증가
			count++;
		}
	}

	if (ccw(arr[n - 2], arr[n - 1], arr[0]) == -1)//for문에서 계산하지 않은 값을 계산하여 그 값이 -1인 경우 count 증가
		count++;

	if (ccw(arr[n - 1], arr[0], arr[1]) == -1)//for문에서 계산하지 않은 값을 계산하여 그 값이 -1인 경우 count 증가
		count++;
	printf("%d", count);

	free(arr);//동적 배열 arr의 메모리를 초기화

	return 0;
}
