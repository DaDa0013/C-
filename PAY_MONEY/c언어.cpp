//#1 <�ִ����� �������>

#include <studio.h>

int main() {
	int money; //���� ������ �ִ� ���� ������ ���� money�� ������
	int candy_price;

	printf("���� ������ �ִ� ��");//�ܼ�â�� '���� ������ �ִ� ��"�� ���
	scanf("%d", &money); //"���� ������ �ִ� ��"���� �Է¹��� ������ money ��� ������ ����

	printf("ĵ���� ����:"); //�ܼ�â�� "ĵ���� ����: "�� ���
	scanf("%d", &candy_price); // ĵ���� ������ �Է¹��� ������ candy_price��� ������ ����

	int number; //���� number�� ����
	number = money / candy_price; //���� number�� ���� money�� candy_price�� ���� ������ ���� ����
	printf("�ִ�� �� �� �ִ� ĵ���� ����=%d\n", number); //�ܼ�â�� �ִ�� �� �� �ִ� ĵ�� ���� ���

	int remain;//���� remain�� ����
	remain = money % candy_price;//���� remain�� ���� money�� candy_price�� ���� ���� ������ ����
	printf('ĵ�� ���� �� ���� �� = %d\n', remain); //�ܼ�â�� ĵ�� ���� �� ���� �� ���

	return 0;

}