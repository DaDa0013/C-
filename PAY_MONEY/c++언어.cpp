//ver.c++���

#include <iostream>
using namespace std; //namespace�� �ִ� std�� ���ǵǾ��ִ� �Լ����� ����ϱ� ���� ����
int main() {
	int money;//���� ������
	int price;//���� ����
	cout << "���� ������ �ִ� ��:""";
	cin >> money;
	cout << "ĵ���� ����: ";
	cin >> price;
	int number = money / price; //�� �� �ִ� ĵ�� ����
	cout << "�ִ�� �� �� �ִ� ĵ���� ����=" << number << endl;
	int remain = money % price; //�Ž�����
	cout << "ĵ�� ���� �� ���� �� =" << remain << endl;
	return 0;
}
