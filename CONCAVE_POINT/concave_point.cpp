#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct p {//typedef�� x,y��ǥ�� ���� ����ü p�� Point�� ����
	int x;
	int y;
}Point;


int ccw(Point P1, Point P2, Point P3) {//������ �������� ����ϴ� �Լ�
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
	int n; //�������� ������ ���� ���� n ����
	scanf("%d", &n);
	int number; //������ �������� ���� ���� number ����
	Point* arr = (Point*)malloc(sizeof(Point) * n);
	int count = 0; //�������� ������ ���� ���� count���� �� �ʱ�ȭ

	for (int i = 0; i < n; i++) {//for������ �����迭 arr�� ���� ��ǥ�� ����
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	for (int i = 0; i < n - 2; i++) {//for������ number�� ccw�� �迭 arr�� ������ ���� ����
		number = ccw(arr[i], arr[i + 1], arr[i + 2]);
		if (number < 0) {//number�� 0���� ������, �� -1�̸� �������̹Ƿ� count�� 1 ����
			count++;
		}
	}

	if (ccw(arr[n - 2], arr[n - 1], arr[0]) == -1)//for������ ������� ���� ���� ����Ͽ� �� ���� -1�� ��� count ����
		count++;

	if (ccw(arr[n - 1], arr[0], arr[1]) == -1)//for������ ������� ���� ���� ����Ͽ� �� ���� -1�� ��� count ����
		count++;
	printf("%d", count);

	free(arr);//���� �迭 arr�� �޸𸮸� �ʱ�ȭ

	return 0;
}
