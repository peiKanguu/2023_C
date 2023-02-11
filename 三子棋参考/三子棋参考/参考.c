#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROWS 3
#define COLS 3

char board[ROWS][COLS];   /*��Ϸ��*/

void init_board();        /*��ʼ����Ϸ��*/
void print_board();       /*��ӡ��Ϸ��*/
bool check_win(char ch);  /*���ʤ��*/

int main()
{
    char current_player = 'X';   /*��ǰ���*/
    int x, y;
    bool win = false;

    init_board();
    print_board();

    while (!win) {
        printf("�����%c��������(x y): ", current_player);
        scanf("%d%d", &x, &y);

        /*�ж����������Ƿ�Ϸ�*/
        if (x < 0 || x >= ROWS || y < 0 || y >= COLS) {
            printf("�����������\n");
            continue;
        }

        /*�жϸ������Ƿ��Ѿ�������*/
        if (board[x][y] != ' ') {
            printf("��λ���������ӣ�\n");
            continue;
        }

        board[x][y] = current_player;

        /*����Ƿ�����һ�ʤ*/
        if (check_win(current_player)) {
            win = true;
            printf("���%c��ʤ��\n", current_player);
        }

        /*�л����*/
        if (current_player == 'X')
            current_player = 'O';
        else
            current_player = 'X';

        print_board();
    }

    return 0;
}

void init_board()
{
    int i, j;

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            board[i][j] = ' ';
}

void print_board()
{
    int i = 0;
    for (i = 0; i < ROWS; i++)
    {
        int j = 0;
        for (j = 0; j < COLS; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < COLS - 1)
                printf("|");
        }
        printf("\n");
        if (i < ROWS - 1)
        {
            for (j = 0; j < COLS; j++)
            {
                printf("---");
                if (j < COLS - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

bool check_win(char ch)
{
    int i, j;

    /*�����*/
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (board[i][j] != ch)
                break;
        }
        if (j == COLS)
            return true;
    }

    /*�����*/
    for (j = 0; j < COLS; j++) {
        for (i = 0; i < ROWS; i++) {
            if (board[i][j] != ch)
                break;
        }
        if (i == ROWS)
            return true;
    }

    /*���Խ���*/
    for (i = 0; i < ROWS; i++) {
        if (board[i][i] != ch)
            break;
    }
    if (i == ROWS)
        return true;

    for (i = 0; i < ROWS; i++) {
        if (board[i][ROWS - i - 1] != ch)
            break;
    }
    if (i == ROWS)
        return true;

    return false;
}