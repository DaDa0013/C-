#include<stdio.h>

int main() {
	int n;//줄의 개수
	scanf("%d", &n);//몇 줄인지 입력


	for (int i = 0; i < n; i++) //for문으로 줄의 개수만큼 반복수행하도록 한다.
	{
		for (int space = 1; space < n - i; space++) //공백의 개수를 나타내는 변수 space를 정의하여 조건식이 만족할 때마다 반복수행한다.따라서 각 줄마다 출력할 공백의 개수를 정한다.
			printf(" ");//공백을 출력한다
		for (int star = 0; star <= i; star++)//*의 개수를 나타내는 변수 star을 정의하여 조건식이 만족할 때마다 반복 수행한다. 즉 한 줄에 출력할 *의 개수를 정한다. 
			printf("*");//*을 출력한다.


		printf("\n");
	}
	return 0;

}
