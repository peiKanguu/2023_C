#pragma once

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ͷ�ļ�����������

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);

//��ӡ����
void print_board(char board[ROW][COL], int row, int col);

//�������
void player_move(char board[ROW][COL], int row, int col);

//��������
void computer_move(char board[ROW][COL], int row, int col);

//�ж���Ӯ�ĺ���
char is_win(char board[ROW][COL], int row, int col);


