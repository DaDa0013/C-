#include <iostream>
using namespace std;
class Calculator //Ŭ���� calculator�� ����
{
private:
	int value;//���� ������ ���� value�� ����
	int memoryValue;//�޸� ���� ������ ���� m�� ����
public:
	Calculator() {
		memoryValue = 0;//memoryValue�� ���� 0���� �ʱ�ȭ
		value = 0;//value ���� 0���� �ʱ�ȭ
	}
	int setValue(int num) {//num�� �޾� ���簪���� �����Ͽ� value�� ��ȯ�� �Լ� setValue ����
		value = num;
		return value;
	}
	int getValue() {//value�� ��ȯ�� �Լ� getValue ����
		return value;
	}
	int add(int num) {//value(���� ��)�� num�� ���� ���� ��ȯ�� �Լ� add ����
		value += num;
		return value;
	}
	int sub(int num) {//value�� num�� �� ���� ��ȯ�� �Լ� sub ����
		value -= num;
		return value;
	}
	int multiply(int num) {//value�� num�� ���� ���� ��ȯ�� �Լ� value ����
		value *= num;
		return value;
	}
	int divide(int num) {//value�� num�� ���� ���� ���� ��ȯ�� �Լ� divide ����
		value /= num;
		return value;
	}
	int mod(int num) {//value�� num�� ���� ������ ���� ��ȯ�� �Լ� mod ����
		value %= num;
		return value;
	}
	void changeSign() {//value ���� ��ȣ�� �ٲ��� �Լ� changeSign ����
		value = -value;
	}
	int clear() {//value�� ���� 0���� �ٲ� ���� ��ȯ�� �Լ� clear ����
		value = 0;
		return value;
	}
	int memorySave() {//memoryValue�� value���� ���� ���� ��ȯ�� �Լ� memorySave ����
		memoryValue = value;
		return memoryValue;
	}
	int memoryRead() {//value�� memoryValue ���� ���� ���� ��ȯ�� �Լ� memoryRead ����
		value = memoryValue;
		return value;
	}
	int memoryClear() {//memoryValue���� 0���� �ʱ�ȭ�� ���� ��ȯ�� �Լ� memoryClear ����
		memoryValue = 0;
		return memoryValue;
	}
	int memoryAdd() {//memoryValue�� value�� ���� ���� ��ȯ�� �Լ� memoryAdd ����
		memoryValue += value;
		return memoryValue;
	}
	int memorySub() {//memoryValue�� value�� �� ���� ��ȯ�� �Լ� memorySub ����
		memoryValue -= value;
		return memoryValue;
	}
};


int main()
{
	Calculator c;
	string command;//�Է¹��� ���� ������ ���ڿ� command ����
	c = Calculator();

	while (1) {
		cin >> command;
		if (command == "add") {//"add"�� �Է� �޾��� ��
			int num;//�Է¹��� ���� ������ ���� num ����
			cin >> num;//�Է� ���� ���� num�� ����
			c.add(num);//add�� num�� ������
		}
		else if (command == "sub") {
			int num;//�Է¹��� ���� ������ ���� num ����
			cin >> num;//�Է� ���� ���� num�� ����
			c.sub(num);//sub�� num�� ������
		}
		else if (command == "mul") {
			int num;//�Է¹��� ���� ������ ���� num ����
			cin >> num;//�Է� ���� ���� num�� ����
			c.multiply(num);//multiply�� num�� ������
		}
		else if (command == "div") {
			int num;//�Է¹��� ���� ������ ���� num ����
			cin >> num;//�Է� ���� ���� num�� ����
			c.divide(num);//divide�� num�� ������

		}
		else if (command == "mod") {
			int num;//�Է¹��� ���� ������ ���� num ����
			cin >> num;//�Է� ���� ���� num�� ����
			c.mod(num);//mod�� num�� ������
		}
		else if (command == "change") {
			c.changeSign();//�Լ� changeSign�� ������
		}
		else if (command == "clear") {
			c.clear();//�Լ� clear ����
		}
		else if (command == "MS") {
			c.memorySave();//�Լ� memorySave ����
		}
		else if (command == "MR") {
			cout << c.memoryRead() << endl;//�Լ� memoryRead���� ���
		}
		else if (command == "MPlus") {
			c.memoryAdd();//�Լ� memoryAdd ����
		}
		else if (command == "MMinus") {
			c.memorySub();//�Լ� memorySub ���� ���
		}
		else if (command == "MC") {
			c.memoryClear();// �Լ� memoryClear ���� ��� 
		}
		else if (command == "result") {
			cout << c.getValue() << endl;//�Լ� getValue ���� ���
		}
		else if (command == "quit") {
			break;
		}
	}
	return 0;
}
