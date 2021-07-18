#include <stdio.h>
#include <string.h>

//달
int mon(int a) {//윤년인지 판별하여 2월의 일수를 정하는 함수
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))//윤년인 경우
		return 29;
	else
		return 28;
}
int yoon(int b) {//윤년인지 판별하는 함수
	if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0))//윤년인 경우
		return 1;
	else
		return 0;
}

int main() {
	int dd, mm, yy, n_day;//일, 월, 년, 더할 일수를 담을 변수 dd, mm, yy, n_day를 선언
	int total, w = 0;//총 일수, 요일을 판별할 변수 total, w를 선언
	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	char week[7][4];  // string week[7]  week[0] = "Sun".....

	strcpy(week[0], "Sun");
	strcpy(week[1], "Mon");
	strcpy(week[2], "Tue");
	strcpy(week[3], "Wed");
	strcpy(week[4], "Thr");
	strcpy(week[5], "Fri");
	strcpy(week[6], "Sat");

	scanf("%d %d %d %d", &yy, &mm, &dd, &n_day);

	month[2] = mon(yy);//입력 받은 연도가 윤년인지 판별하여 2월의 일수를 정함

	for (int i = 1; i < mm; i++) {//입력 받은 달까지의 총 일수를 총합에 더함
		total += month[i];
	}
	total += dd;//총합에 일수를 더함
	total += n_day;//총 일수에 계산할 일수를 더함

	if (total >= 365) {//총 일수가 365일 이상인 경우
		for (; total >= 365; yy++) {//총 일수가 365일 미만이 될 때까지 반복
			if (yoon(yy) == 1) {//계산할 연도가 윤년인 경우
				total -= 366;//총합에 366일을 빼 줌
			}
			else
				total -= 365;//윤년이 아닌 경우 총합에서 365일 빼 줌
		}
	}

	if (total == -1) {//연도를 계산했을 때 -1일이 되는 경우
				//(total이 365일이며 입력 받은 년도가 윤년이라 366일을 빼는 경우)
		yy--;//1년을 계산한 것을 빼 줌
		total = 365;//총일 수에 365일을 넣음
	}

	month[2] = mon(yy);//새로 알아낸 년도가 윤년인지 판별하여 2월의 총 일수를 정함

	if (total == 0) {//총 일수가 0인 경우는 1년을 딱 계산한 경우이므로
		mm = 12;//새로 구하는 월과 일은 해의 마지막 날인 12월 31일이다
		total = 31;
		yy--;//1년을 빼 줌(일년이 지난 것이 아니기 때문)
	}
	else {
		for (mm = 1; total > month[mm]; mm++)//총 일수에서 월의 일수를 빼서 월을 구함
			total -= month[mm];
	}

	printf("%d %d %d\n", yy, mm, total);

	for (int i = 2019; i < yy; i++) {//2019년부터 시작하여 해당 년도까지의 일수를 구함
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))//윤년인 경우
			total += 366;//총 일수에 366일을 더함
		else
			total += 365;//윤년이 아닌 경우 365일을 총 일수에 더함
	}

	month[2] = mon(yy);//해당 년도가 윤년인지 판단하여 2월의 총 일수를 구함

	for (int i = 1; i < mm; i++) {//해당 달까지의 일수를 총 일수에 더함
		total += month[i];
	}
	w = (total + 1) % 7;//요일을 판별할 변수 w를 계산(일주일이 7일이고 2019년 1월 1일이 화요일이므로)
	printf(week[w]);
	return 0;
}
