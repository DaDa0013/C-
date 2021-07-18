// tictactoc_con.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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

		//(A) ����

		printf("Player %d, enter a number:  ", player);
		scanf_s("%d", &choice);

		if (square[choice] == 'X' || square[choice] == 'O')//if������ �̹� ���� ���� �ڸ��϶� ������ ����ȴ�.
		{

			printf("�ߺ��� ���Դϴ�. �ٽ� �Է��Ͻʽÿ�.");
			getchangeturn();//���ο� �ڸ��� ��ȣ�� �Է¹޵��� player�� ������ �ʰ� �Ѵ�.
			continue;//���ο��ڸ��� ��ȣ�� �Է¹޴´�.

		}
		mark = (player == 1) ? 'X' : 'O';
		square[choice] = mark;



		i = checkwin();

		if (i == 1)
		{
			board();
			printf("==>\aPlayer %d win ", player);

			for (int j = 1; j < 10; j++) {
				square[j] = '0' + j; //for���� ���� �迭 square���� ���� �ٽ� ó��ó�� ������ش�.
			}
			getchangeturn();//player������ �ٽ� ó������ �ٲ��ش�.
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
		return DRAW; //���
	else
		return GOING; //���� ������
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
