#include<iostream>
using namespace std;
int main() {
	long fact = 1;
	int n;
	cout << "������ �Է��ϼ���: ";
	cin >> n;

	for (int j = 1; j <= n; j++) //for������ ���⼭ ���ǽ��� j<=n�̹Ƿ� ���� j�� ���� ���� n�� ���� ������������ ���� ���� �ݺ������Ѵ�.

		fact = fact * j; //�ڿ��� n�� ���Ͽ� n!�� ���� 1���� n���� �ڿ����� ��� ���� ���̴�. ���� �� ���� �ݺ������ϸ� ���丮���� ���� ���� �� �ִ�.

	cout << n << "!��" << fact << "�Դϴ�.\n";
	return 0;
}
