#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

char board[ROWS][COLS];  // ����
char player1 = 'X';      // ���1��ʹ�� X ��ʾ
char player2 = 'O';      // ���2��ʹ�� O ��ʾ

// ��ʼ������
void init_board()
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// ��ӡ����
void print_board()
{
    int i, j;
    printf("\n");
    for (i = 0; i < ROWS; i++)
    {
        printf("\t");
        for (j = 0; j < COLS; j++)
        {
            printf("%c | ", board[i][j]);
        }
        printf("\n");
        printf("\t--- --- ---\n");
    }
    printf("\n");
}

// �������
void player_move(char player)
{
    int x, y;
    printf("���%c���ӣ����������꣨x y����", player);
    scanf("%d%d", &x, &y);
    x--;
    y--;
    if (x >= 0 && x < ROWS && y >= 0 && y < COLS && board[x][y] == ' ')
    {
        board[x][y] = player;
    }
    else
    {
        printf("��Ч�����ӣ�����������\n");
        player_move(player);
    }
}

// ���������
void computer_move(char player)
{
    int x, y;
    srand(time(NULL));
    x = rand() % ROWS;
    y = rand() % COLS;
    if (board[x][y] == ' ')
    {
        board[x][y] = player;
        printf("��������ӣ����꣨%d %d��\n", x + 1, y + 1);
    }
    else
    {
        computer_move(player);
    }
}

// �ж��Ƿ���ʤ��
char check_win()
{
    int i, j;
    // ������
    for (i = 0; i < ROWS; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    // ������
    for (j = 0; j < COLS; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
        {
            return board[0][j];
        }
    }
    // б����
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }
    return ' ';
}

int main()
{
    char win;
    init_board();
    printf("�˻���ս��������Ϸ\n");
    printf("�������꼴�����ӣ��磺1 1\n");
    print_board();
    while (1)
    {
        player_move(player1);
        print_board();
        win = check_win();
        if (win == player1)
        {
            printf("���%cʤ��\n", player1);
            break;
        }
        if (win == ' ' && check_full() == 1)
        {
            printf("ƽ�֣�\n");
            break;
        }
        computer_move(player2);
        print_board();
        win = check_win();
        if (win == player2)
        {
            printf("���%cʤ��\n", player2);
            break;
        }
        if (win == ' ' && check_full() == 1)
        {
            printf("ƽ�֣�\n");
            break;
        }
    }
    return 0;
}
