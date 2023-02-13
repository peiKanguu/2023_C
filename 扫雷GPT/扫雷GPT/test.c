#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define MINES 10

void init(char mine[ROW][COL], char show[ROW][COL]);
void print(char show[ROW][COL]);
void set_mines(char mine[ROW][COL]);
int get_mines_around(char mine[ROW][COL], int row, int col);
void open_cell(char mine[ROW][COL], char show[ROW][COL], int row, int col);

int main()
{
    char mine[ROW][COL];
    char show[ROW][COL];

    init(mine, show);
    set_mines(mine);

    int x, y;
    while (1) {
        print(show);
        printf("请输入您要翻开的格子的行和列：");
        scanf("%d%d", &x, &y);
        open_cell(mine, show, x, y);

        int mines = get_mines_around(mine, x, y);
        if (mine[x][y] == '*') {
            printf("你踩到了地雷！游戏结束！\n");
            break;
        }
        else if (mines == 0) {
            printf("这个格子周围没有地雷！\n");
        }
        else {
            printf("这个格子周围有%d个地雷！\n", mines);
        }
    }
    printf("游戏结束！\n");
    return 0;
}

void init(char mine[ROW][COL], char show[ROW][COL])
{
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            mine[i][j] = '.';
            show[i][j] = '*';
        }
    }
}

void print(char show[ROW][COL])
{
    int i, j;
    printf("  ");
    for (i = 0; i < COL; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < ROW; i++) {
        printf("%d ", i);
        for (j = 0; j < COL; j++) {
            printf("%c ", show[i][j]);
        }
        printf("\n");
    }
}

void set_mines(char mine[ROW][COL])
{
    srand((unsigned int)time(0));
    int count = 0;
    while (count < MINES) {
        int x = rand() % ROW;
        int y = rand() % COL;
        if (mine[x][y] == '.') {
            mine[x][y] = '*';
            count++;
        }
    }
}

void open_cell(char mine[ROW][COL], char show[ROW][COL], int row, int col)
{
    if (row < 0 || row >= ROW || col < 0 || col >= COL) {
        printf("输入的坐标超出了范围！\n");
        return;
    }
    if (show[row][col] != '*') {
        printf("这个格子已经翻开过了！\n");
        return;
    }
    int mines = get_mines_around(mine, row, col);
    show[row][col] = mines ? mines + '0' : ' ';
}

int get_mines_around(char mine[ROW][COL], int row, int col)
{
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < ROW && j >= 0 && j < COL && mine[i][j] == '*') {
                count++;
            }
        }
    }
    return count;
}
