#define _CRT_SECURE_NO_WARNINGS 1

//��������ʱ����ʵ�����������Ľ���

#include <stdio.h>

int main()
{
	int a = 23;
	int b = 25;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);

	return 0;
}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}