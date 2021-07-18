#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

bool isPalindrome(string str)//ȸ�� �Ǻ��ϴ� ����Լ� isPalindrome�� ����
{
	if (str.length() <= 1)
		return true; //���ڿ��� ���̰� 1���� �۾����� true�� return
	else {
		if (str[0] == str[str.length() - 1])//���̰� 1���� ���� ���� ��쿡 ȸ���� ��� isPalindrome�Լ��� �����
			return isPalindrome(str.substr(1, str.length() - 2));
		else
			return false;//ȸ���� �ƴѰ�� false�� return
	}
}
int main() {

	string str;//���ڿ��� ���� ���� str�� ����
	cin >> str;
	int length;//���ڿ��� ���̸� ���� ���� length ����
	string tmp;//�ӽ÷� ���ڿ��� ���� ���� tmp ����
	length = str.length();//���� length�� ���ڿ� str�� ���̸� ����
	int max = 0;//ȸ�� �� �ִ� ���̸� ���� ���� max ����
	int size = length; //�ӽ÷� ���̸� ���� ���� size����

	for (int i = 0; i < length; i++) {//for������ length��ŭ �ݺ�
		str[i] = tolower(str[i]);//str�� ��� ���ڸ� �ҹ��ڷ� ��ȯ
	}
	for (size = length; size >= 1; size--) {//for������ size�� 1���� Ŭ�������� �ݺ�
		for (int i = 0; i <= length - size; i++) {//for������ length-size��ŭ �ݺ�
			tmp = str.substr(i, size);//���� tmp�� str�� i��°���� size��ŭ �ڸ�
			if (isPalindrome(tmp)) {//if���� �������� isPalindrome�� tmp�� ���� ���� true���
				max = tmp.length();//�� ���ڿ��� ���̸� max�� ����
				goto OUT;//OUT�� �̵�
			}
		}
	}
OUT:
	string substring{ "z" };//z�� �ʱ�ȭ��Ų �迭 substring �� ����
	for (int i = 0; i <= length - max; i++) {//for������ length-max��ŭ �ݺ�
		if (isPalindrome(str.substr(i, max))) {//str�� i��°���� max��ŭ �ڸ� ���ڿ��� isPalindrome�� �־����� true���
			tmp = str.substr(i, max);//tmp�� �� ���ڿ� ����
			if (substring > tmp) {//if���� �������� ���̰� ���� ���ڿ��� ������� ���������� ���� ���� ������ ���� substring�� ����
				substring = tmp;
			}
		}
	}


	cout << max << "\n" << substring << endl;
	return 0;
}
