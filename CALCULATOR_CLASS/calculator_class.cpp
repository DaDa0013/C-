#include <iostream>
using namespace std;
class Calculator //클래스 calculator를 선언
{
private:
	int value;//값을 저장할 변수 value를 선언
	int memoryValue;//메모리 값을 저장할 변수 m를 선언
public:
	Calculator() {
		memoryValue = 0;//memoryValue의 값을 0으로 초기화
		value = 0;//value 값을 0으로 초기화
	}
	int setValue(int num) {//num을 받아 현재값으로 지정하여 value를 반환할 함수 setValue 선언
		value = num;
		return value;
	}
	int getValue() {//value를 반환할 함수 getValue 선언
		return value;
	}
	int add(int num) {//value(현재 값)에 num을 더한 값을 반환할 함수 add 선언
		value += num;
		return value;
	}
	int sub(int num) {//value에 num을 뺀 값을 반환할 함수 sub 선언
		value -= num;
		return value;
	}
	int multiply(int num) {//value에 num을 곱한 값을 반환할 함수 value 선언
		value *= num;
		return value;
	}
	int divide(int num) {//value에 num을 나눈 값의 몫을 반환할 함수 divide 선언
		value /= num;
		return value;
	}
	int mod(int num) {//value에 num을 나눈 나머지 값을 반환할 함수 mod 선언
		value %= num;
		return value;
	}
	void changeSign() {//value 값의 부호를 바꿔줄 함수 changeSign 선언
		value = -value;
	}
	int clear() {//value의 값을 0으로 바꾼 값을 반환할 함수 clear 선언
		value = 0;
		return value;
	}
	int memorySave() {//memoryValue에 value값을 넣은 값을 반환할 함수 memorySave 선언
		memoryValue = value;
		return memoryValue;
	}
	int memoryRead() {//value에 memoryValue 값을 넣은 것을 반환할 함수 memoryRead 선언
		value = memoryValue;
		return value;
	}
	int memoryClear() {//memoryValue값을 0으로 초기화한 값을 반환할 함수 memoryClear 선언
		memoryValue = 0;
		return memoryValue;
	}
	int memoryAdd() {//memoryValue에 value를 더한 값을 반환할 함수 memoryAdd 선언
		memoryValue += value;
		return memoryValue;
	}
	int memorySub() {//memoryValue에 value를 뺀 값을 반환할 함수 memorySub 선언
		memoryValue -= value;
		return memoryValue;
	}
};


int main()
{
	Calculator c;
	string command;//입력받은 값을 저장할 문자열 command 선언
	c = Calculator();

	while (1) {
		cin >> command;
		if (command == "add") {//"add"를 입력 받았을 때
			int num;//입력받은 수를 저장할 변수 num 선언
			cin >> num;//입력 받은 수를 num에 저장
			c.add(num);//add에 num을 대입함
		}
		else if (command == "sub") {
			int num;//입력받은 수를 저장할 변수 num 선언
			cin >> num;//입력 받은 수를 num에 저장
			c.sub(num);//sub에 num을 대입함
		}
		else if (command == "mul") {
			int num;//입력받은 수를 저장할 변수 num 선언
			cin >> num;//입력 받은 수를 num에 저장
			c.multiply(num);//multiply에 num을 대입함
		}
		else if (command == "div") {
			int num;//입력받은 수를 저장할 변수 num 선언
			cin >> num;//입력 받은 수를 num에 저장
			c.divide(num);//divide에 num을 대입함

		}
		else if (command == "mod") {
			int num;//입력받은 수를 저장할 변수 num 선언
			cin >> num;//입력 받은 수를 num에 저장
			c.mod(num);//mod에 num을 대입함
		}
		else if (command == "change") {
			c.changeSign();//함수 changeSign을 시행함
		}
		else if (command == "clear") {
			c.clear();//함수 clear 시행
		}
		else if (command == "MS") {
			c.memorySave();//함수 memorySave 시행
		}
		else if (command == "MR") {
			cout << c.memoryRead() << endl;//함수 memoryRead값을 출력
		}
		else if (command == "MPlus") {
			c.memoryAdd();//함수 memoryAdd 시행
		}
		else if (command == "MMinus") {
			c.memorySub();//함수 memorySub 값을 출력
		}
		else if (command == "MC") {
			c.memoryClear();// 함수 memoryClear 값을 출력 
		}
		else if (command == "result") {
			cout << c.getValue() << endl;//함수 getValue 값을 출력
		}
		else if (command == "quit") {
			break;
		}
	}
	return 0;
}
