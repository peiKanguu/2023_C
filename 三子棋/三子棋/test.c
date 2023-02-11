#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("----------------------\n");
	printf("***-----1.play-----***\n");
	printf("***-----0.exit-----***\n");
	printf("----------------------\n");
}

void game()
{
	char board[ROW][COL];
	char ret = 0;
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);

	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret= is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'O')
		printf("���Ի�ʤ\n");
	else if (ret == 'X')
		printf("��һ�ʤ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");

}

void test()
{
	srand(time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ����Ч");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}