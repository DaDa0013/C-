#include<stdio.h>

int main() {
	int count;
	int sum;
	char arr[10] = { };

	while (1) {
		sum = 0; //���� sum�� �ʱ�ȭ�Ѵ�.
		scanf("%s", &arr); //�Է� ���� ���ڿ��� arr�� �ִ´�.
		for (int i = 0, count = 0; arr[i]; i++)//���� i�� ������ �� 0���� �ʱ�ȭ�Ѵ�. ���� count�� ���� �ʱ�ȭ�Ѵ�.�׸��� for���� ���� �迭 arr�� ���̸�ŭ �ݺ����ش�.
		{
			if (arr[i] == 'o') // if������ arr[i]�� 'o'�� �� ������ �����Ѵ�.
				count += 1; //���� count�� ���� 1 ������Ų��. ���� ���ӵ� o�� ������ŭ ���� count�� ����ȴ�. 
			else //arr[i]�� 'o'�� �ƴ� ��('x'�� ��) ������ �����Ѵ�.
				count = 0; //���� count�� ���� 0���� �����.�̴� x�� ������ �����϶��� ������ �ٽ� 1�� �Ǳ� �����̴�.
			sum += count; //���� sum�� count ���� ���Ѵ�.
		}
		printf("%d", sum); //sum�� ���� ����Ѵ�.

	}
	return 0;

}
