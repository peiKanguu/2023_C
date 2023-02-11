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
		printf("电脑获胜\n");
	else if (ret == 'X')
		printf("玩家获胜\n");
	else if (ret == 'Q')
		printf("平局\n");

}

void test()
{
	srand(time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择无效");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}