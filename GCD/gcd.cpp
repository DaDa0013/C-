#include <stdio.h>
long long LCM(long long a, long long b)//�ּ� ������� ���� �Լ� LCM
{
	long long A = a;
	long long B = b;
	long long lcm;//�ּ� ������� ���� ���� lcm�� ����
	if (A < B) { //�� ���� ū ���� A��, ���� ���� B�� ����
		A = b;
		B = a;
	}
	while (B != 0) {//���� B�� 0�� �ƴ� ������ while���� �ݺ�
		long long gcd = A % B;//while�� ���� �ĵ��� ��Ŭ���� ȣ��������, �ִ������� ����
		A = B;
		B = gcd;
	}
	lcm = a * b / A;//�ּ� ������� ���ϴ� ����
	return lcm; //�Լ��� ���ϰ��� ���� lcm���� ����
}
int main() {
	int n[1000] = { 0, };//�Է� ���� ���� �������� ���� �迭
	int count = 0;//���� �������� ����
	for (int i = 0; i < sizeof(n); i++) {//for������ ���� �������� �迭n�� ����
		scanf("%d", &n[i]);
		count++;
		if (n[i] == -1)//-1�� �Է� ������ for���� ����
			break;
	}
	long long num = n[0];//�ּ� ������� ��Ÿ�� ���� num�� ����, �迭n�� 0��° ���� ����
	for (int j = 0; j < count - 1; j++) {//�迭 n�� �������� -1�̹Ƿ� ���� �������� ������ 1�� �� ����ŭ �ݺ�
		num = LCM(num, n[j + 1]);//�Լ� LCM�� �� �� num�� �迭 n�� j+1��° ���� �����Ͽ� �ּ� ������� ���ϰ�, ���� num�� �ּ� ������� ����
	}
	printf("%lld", num);//�ּҰ������ ��Ÿ���� ���� num�� ���
	return 0;
}
