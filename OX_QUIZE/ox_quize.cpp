#include<stdio.h>

int main() {
	int count;
	int sum;
	char arr[10] = { };

	while (1) {
		sum = 0; //변수 sum을 초기화한다.
		scanf("%s", &arr); //입력 받은 문자열을 arr에 넣는다.
		for (int i = 0, count = 0; arr[i]; i++)//변수 i를 선언한 후 0으로 초기화한다. 변수 count의 값도 초기화한다.그리고 for문을 통해 배열 arr의 길이만큼 반복해준다.
		{
			if (arr[i] == 'o') // if문으로 arr[i]가 'o'일 때 다음을 수행한다.
				count += 1; //변수 count의 값을 1 증가시킨다. 따라서 연속된 o의 갯수만큼 변수 count에 저장된다. 
			else //arr[i]가 'o'가 아닐 때('x'일 때) 다음을 수행한다.
				count = 0; //변수 count의 값을 0으로 만든다.이는 x가 나오면 정답일때의 점수가 다시 1이 되기 때문이다.
			sum += count; //변수 sum에 count 값을 더한다.
		}
		printf("%d", sum); //sum의 값을 출력한다.

	}
	return 0;

}
