// tictactoc_con.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
//#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

#define DRAW 0
#define WIN 1
#define GOING -1

//using namespace std;

int getchangeturn()
{
	static int turn = 2;

	turn = (turn == 2) ? 1 : 2;
	return turn;
}

int main() {

	int player;
	int i, choice;

	char mark;



	do
	{
		board();
		player = getchangeturn();

		//(A) 수정

		printf("Player %d, enter a number:  ", player);
		scanf_s("%d", &choice);

		if (square[choice] == 'X' || square[choice] == 'O')//if문으로 이미 돌이 놓인 자리일때 다음이 실행된다.
		{

			printf("중복된 수입니다. 다시 입력하십시오.");
			getchangeturn();//새로운 자리의 번호를 입력받도록 player가 변하지 않게 한다.
			continue;//새로운자리의 번호를 입력받는다.

		}
		mark = (player == 1) ? 'X' : 'O';
		square[choice] = mark;



		i = checkwin();

		if (i == 1)
		{
			board();
			printf("==>\aPlayer %d win ", player);

			for (int j = 1; j < 10; j++) {
				square[j] = '0' + j; //for문을 통해 배열 square안의 값을 다시 처음처럼 만들어준다.
			}
			getchangeturn();//player순서를 다시 처음으로 바꿔준다.
			i = GOING;
			continue;

		}

		else

			printf("==>\aGame draw");


	}

	//player++;
	while (i == GOING);

	board();


	//getchar();



	return 0;

}


/*********************************************

FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return WIN;

	else if (square[4] == square[5] && square[5] == square[6])
		return WIN;

	else if (square[7] == square[8] && square[8] == square[9])
		return WIN;

	else if (square[1] == square[4] && square[4] == square[7])
		return WIN;

	else if (square[2] == square[5] && square[5] == square[8])
		return WIN;

	else if (square[3] == square[6] && square[6] == square[9])
		return WIN;

	else if (square[1] == square[5] && square[5] == square[9])
		return WIN;

	else if (square[3] == square[5] && square[5] == square[7])
		return WIN;

	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
		square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
		!= '7' && square[8] != '8' && square[9] != '9')
		return DRAW; //비김
	else
		return GOING; //아직 진행중
}


/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	//system("cls");
	printf("\n\n\tTic Tac Toe\n\n");

	printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

	printf("     |     |     \n\n");
}

/*******************************************************************
END OF PROJECT
********************************************************************/
