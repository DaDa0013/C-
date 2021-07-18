#include <stdio.h>
void display(int image[8][16]) { //display라는 함수를 선언한다.
	for (int r = 0; r < 8; r++) { //for문을 통해 배열 image의 1행부터 8행까지 반복한다.
		for (int j = 0; j < 16; j++) { //for문을 통해 배열 image의 1열부터 16열까지 반복한다.
			if (image[r][j] == 0)
				printf("*"); //0일때 '*'을 출력한다.
			else
				printf("_"); //0이 아닐 때(1일때) '_'를 출력한다.
		}
		printf("\n");//줄을 바꾼다.
	}
}
void inverse(int image[8][16]) { //inverse라는 함수를 선언한다.
	for (int r = 0; r < 8; r++) { //for문을 통해 배열 image의 1행부터 8행까지 반복한다.
		for (int j = 0; j < 16; j++) { //for문을 통해 배열 image의 1열부터 16열까지 반복한다.
			if (image[r][j] == 0)
				printf("_"); //0일때 '_'을 출력한다.
			else
				printf("*"); //0이 아닐 때(1일때) '*'를 출력한다.
		}
		printf("\n");//줄을 바꾼다.
	}
}

int main() {
	int image[8][16] = {
	{ 1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	};
	printf("Before Inversion\n"); //콘솔창에 "Before Inversion"을 출력한다.
	display(image); //함수 display를 호출하여 배열 image를 출력한다.
	printf("\n"); //줄을 바꾼다.
	printf("After Inversion\n");//콘솔창에 "After Inversion"을 출력한다.
	inverse(image);//함수 inverse를 호출하여 배열 image를 출력한다.

	return 0;
}
