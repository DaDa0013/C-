#include <stdio.h>
int main() {
	int input[100] = { 0 };//�� �ﰢ���� ���� �迭
	scanf("%d", input);//�迭 input�� 0��°�� �Է¹��� ���� ����
	int num[100] = { 0, };//�ﰢ������ ���� �迭

	if (0 < input[0] && input[0] < 1001) {//�Է¹޴� ���� ������ 1�̻� 1000�����̹Ƿ� if�� �������� ��
		for (int i = 1; i <= 44; i++) {//�ﰢ������ 44���� �迭�� ����
			num[i] = i * (i + 1) / 2;
		}
		for (int i = 1; i <= 44; i++) {//3�� for���� ���� ���� �Է� ���� ���� �� �ﰢ���� ã���� ��
			for (int j = 1; j <= 44; j++) {
				for (int k = 1; k <= 44; k++) {
					if (num[i] + num[j] + num[k] == input[0]) {//�� �ﰢ���� �迭 input�� ������
						input[0] = num[i];
						input[1] = num[j];
						input[2] = num[k];
						break;
					}
				}
			}
		}

		if (input[0] * input[1] * input[2] != 0)//�� �� �� 0�� ���� ��� �� �ﰢ������ ���
			printf("%d %d %d", input[0], input[1], input[2]);
		else//�ƴ� ��� -1�� ���
			printf("-1");
	}
	return 0;
}
