//#1 <최대한의 사탕사기>

#include <studio.h>

int main() {
	int money; //현재 가지고 있는 돈을 지정할 변수 money를 선언함
	int candy_price;

	printf("현재 가지고 있는 돈");//콘솔창에 '현재 가지고 있는 돈"을 출력
	scanf("%d", &money); //"현재 가지고 있는 돈"에서 입력받은 정수를 money 라는 변수에 저장

	printf("캔디의 가격:"); //콘솔창에 "캔디의 가격: "을 출력
	scanf("%d", &candy_price); // 캔디의 가격을 입력받은 정수를 candy_price라는 변수에 저장

	int number; //변수 number를 선언
	number = money / candy_price; //변수 number의 값이 money를 candy_price로 나눈 값으로 몫을 선언
	printf("최대로 살 수 있는 캔디의 개수=%d\n", number); //콘솔창에 최대로 살 수 있는 캔디 개수 출력

	int remain;//변수 remain을 선언
	remain = money % candy_price;//변수 remain의 값에 money를 candy_price로 나눈 값의 나머지 선언
	printf('캔디 구입 후 남은 돈 = %d\n', remain); //콘솔창에 캔디 구입 후 남은 돈 출력

	return 0;

}