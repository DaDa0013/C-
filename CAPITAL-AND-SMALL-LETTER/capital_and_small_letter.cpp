#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

bool isPalindrome(string str)//회문 판별하는 재귀함수 isPalindrome을 선언
{
	if (str.length() <= 1)
		return true; //문자열의 길이가 1보다 작아지면 true로 return
	else {
		if (str[0] == str[str.length() - 1])//길이가 1보다 작지 않은 경우에 회문인 경우 isPalindrome함수를 재귀함
			return isPalindrome(str.substr(1, str.length() - 2));
		else
			return false;//회문이 아닌경우 false로 return
	}
}
int main() {

	string str;//문자열을 받을 변수 str을 선언
	cin >> str;
	int length;//문자열의 길이를 받을 변수 length 선언
	string tmp;//임시로 문자열을 담을 변수 tmp 선언
	length = str.length();//변수 length에 문자열 str의 길이를 대입
	int max = 0;//회문 중 최대 길이를 담을 변수 max 선언
	int size = length; //임시로 길이를 담을 변수 size선언

	for (int i = 0; i < length; i++) {//for문으로 length만큼 반복
		str[i] = tolower(str[i]);//str의 모든 문자를 소문자로 변환
	}
	for (size = length; size >= 1; size--) {//for문으로 size가 1보다 클때까지만 반복
		for (int i = 0; i <= length - size; i++) {//for문으로 length-size만큼 반복
			tmp = str.substr(i, size);//변수 tmp에 str을 i번째부터 size만큼 자름
			if (isPalindrome(tmp)) {//if문의 조건으로 isPalindrome에 tmp를 넣은 값이 true라면
				max = tmp.length();//그 문자열의 길이를 max에 대입
				goto OUT;//OUT로 이동
			}
		}
	}
OUT:
	string substring{ "z" };//z로 초기화시킨 배열 substring 을 선언
	for (int i = 0; i <= length - max; i++) {//for문으로 length-max만큼 반복
		if (isPalindrome(str.substr(i, max))) {//str을 i번째부터 max만큼 자른 문자열을 isPalindrome에 넣었을때 true라면
			tmp = str.substr(i, max);//tmp에 그 문자열 대입
			if (substring > tmp) {//if문의 조건으로 길이가 같은 문자열이 있을경우 사전식으로 가장 먼저 나오는 것을 substring에 대입
				substring = tmp;
			}
		}
	}


	cout << max << "\n" << substring << endl;
	return 0;
}
