#include <stdio.h>
int main() {
	int n, i, j;
	int numbers[10000];//���� �ڿ������� ���� �迭
	int t, count, mode = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)//for������ �ڿ������� �޾� �迭�� ����
		scanf("%d", &numbers[i]);

	for (i = 0; i < n; i++) {
		t = 1;//������ ������ �ʱ�ȭ��
		for (j = i + 1; j < n; j++) {//for���� ���� �迭�� ���� ���ڰ� �ִ� �� �Ǻ�
			if (numbers[i] == numbers[j])
				t++;//���� ���ڰ� ������ �� ������ ������ ����
		}
		if (t > count) {//���� ���� ���Ե� ���� �Ǻ�
			mode = numbers[i];//���� ���� ���Ե� ���ڸ� ���� mode�� ����
			count = t;//���� ���� ���Ե� ������ ������ ���� count�� ����
		}
		else if (t == count) {//������ ���� ���ڰ� ���� ���
			if (mode < numbers[i])
				mode = numbers[i];//���� ū ���� ���� mode�� ����
		}
	}
	printf("%d %d", mode, count);
	return 0;
}
