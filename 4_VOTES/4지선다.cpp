#include <stdio.h>
int main() {
	int m;//������
	int answers[100] = { 0 };  // ���� �迭 
	int points[100] = { 0 };   // ���� �迭 
	int st_answers[100] = { 0 }; // �л� �� �迭 
	int number;//�л���
	int score[100] = { 0 };//�л� ����
	int max = 0;//���� ���� ����
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {//for���� ���� ������ �ݺ������� �迭�� ����
		scanf("%d", &answers[i]);
	}
	for (int i = 0; i < m; i++) {//for���� ���� ������ �ݺ������� �迭�� ����
		scanf("%d", &points[i]);
	}
	scanf("%d", &number);


	for (int i = 0; i < number; i++) {//
		int a = 0;//�л��� �� ������ ���� ���� a ���� �� �ݺ��� ������ 0���� �ʱ�ȭ
		for (int j = 0; j < m; j++) {
			scanf("%d", &st_answers[j]);//�л��� ���� for������ ����
		}
		for (int j = 0; j < m; j++) {
			if (answers[j] == st_answers[j])//�л��� ���� ������ ��
				score[i] += points[j];	//�� ������ ������ ������ ����
		}

		a += score[i];//�л��� �� ���� ���� a�� ����

		if (a >= max)//�л����� ���� �� ���� ���� ������ ���� max�� ����
			max = a;
	}

	printf("%d", max);
	return 0;
}
