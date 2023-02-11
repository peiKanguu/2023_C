#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}

void player_move(char board[ROW][COL], int row, int col)
{
	printf("�������\n");
	while (1)
	{
		printf("���������꣺");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("�Ƿ�����\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
	
}

//�ж������Ƿ�����
static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//ƽ�֣�
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}

	//����
	//û����һ��ߵ���Ӯ��Ҳû��ƽ�֣���Ϸ����
	return 'C';
}