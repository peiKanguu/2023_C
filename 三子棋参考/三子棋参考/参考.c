#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROWS 3
#define COLS 3

char board[ROWS][COLS];   /*游戏板*/

void init_board();        /*初始化游戏板*/
void print_board();       /*打印游戏板*/
bool check_win(char ch);  /*检查胜负*/

int main()
{
    char current_player = 'X';   /*当前玩家*/
    int x, y;
    bool win = false;

    init_board();
    print_board();

    while (!win) {
        printf("请玩家%c输入坐标(x y): ", current_player);
        scanf("%d%d", &x, &y);

        /*判断输入坐标是否合法*/
        if (x < 0 || x >= ROWS || y < 0 || y >= COLS) {
            printf("输入坐标错误！\n");
            continue;
        }

        /*判断该坐标是否已经有棋子*/
        if (board[x][y] != ' ') {
            printf("该位置已有棋子！\n");
            continue;
        }

        board[x][y] = current_player;

        /*检查是否有玩家获胜*/
        if (check_win(current_player)) {
            win = true;
            printf("玩家%c获胜！\n", current_player);
        }

        /*切换玩家*/
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

    /*检查行*/
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (board[i][j] != ch)
                break;
        }
        if (j == COLS)
            return true;
    }

    /*检查列*/
    for (j = 0; j < COLS; j++) {
        for (i = 0; i < ROWS; i++) {
            if (board[i][j] != ch)
                break;
        }
        if (i == ROWS)
            return true;
    }

    /*检查对角线*/
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