#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

char board[ROWS][COLS];  // 棋盘
char player1 = 'X';      // 玩家1，使用 X 表示
char player2 = 'O';      // 玩家2，使用 O 表示

// 初始化棋盘
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

// 打印棋盘
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

// 玩家落子
void player_move(char player)
{
    int x, y;
    printf("玩家%c落子，请输入坐标（x y）：", player);
    scanf("%d%d", &x, &y);
    x--;
    y--;
    if (x >= 0 && x < ROWS && y >= 0 && y < COLS && board[x][y] == ' ')
    {
        board[x][y] = player;
    }
    else
    {
        printf("无效的落子，请重新输入\n");
        player_move(player);
    }
}

// 计算机落子
void computer_move(char player)
{
    int x, y;
    srand(time(NULL));
    x = rand() % ROWS;
    y = rand() % COLS;
    if (board[x][y] == ' ')
    {
        board[x][y] = player;
        printf("计算机落子，坐标（%d %d）\n", x + 1, y + 1);
    }
    else
    {
        computer_move(player);
    }
}

// 判断是否有胜负
char check_win()
{
    int i, j;
    // 横向检查
    for (i = 0; i < ROWS; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    // 纵向检查
    for (j = 0; j < COLS; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
        {
            return board[0][j];
        }
    }
    // 斜向检查
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
    printf("人机对战三子棋游戏\n");
    printf("输入坐标即可落子，如：1 1\n");
    print_board();
    while (1)
    {
        player_move(player1);
        print_board();
        win = check_win();
        if (win == player1)
        {
            printf("玩家%c胜！\n", player1);
            break;
        }
        if (win == ' ' && check_full() == 1)
        {
            printf("平局！\n");
            break;
        }
        computer_move(player2);
        print_board();
        win = check_win();
        if (win == player2)
        {
            printf("玩家%c胜！\n", player2);
            break;
        }
        if (win == ' ' && check_full() == 1)
        {
            printf("平局！\n");
            break;
        }
    }
    return 0;
}
