#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*****************************************\n");
	printf("*********  1.play      0.exit   *********\n");
	printf("*****************************************\n");
}

void game()
{
	//��ŵ��׵�����
	char mine[ROWS][COLS] = { 0 };
	//չʾ���û���������
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	//���õ���
	set_mine(mine, ROW, COL);
	system("cls");//�����Ļ
	//��ӡ����
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	//��ʼɨ��
	find_mind(mine, show, ROW, COL);
}

int main()
{
	//��������������
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//�˵�
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}



//
//��չʵ�֣�
//1. �ܹ�չ��һƬ�Ĳ���
//2. ��Ǻ�ȡ����
//3. ��ʾʣ���׵ĸ���
//

//EasyX - C���ԵĽ����
