#define _CRT_SECURE_NO_WARNINGS 1

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19

#include <stdio.h>

int DigitSum(int x)
{
	if (x > 0)
	{
		return x % 10 + DigitSum(x / 10);
	}
	else
		return 0;
}
int main()
{
	int n, sum;
	scanf("%d", &n);

	sum = DigitSum(n);

	printf("%d", sum);
	return 0;
}