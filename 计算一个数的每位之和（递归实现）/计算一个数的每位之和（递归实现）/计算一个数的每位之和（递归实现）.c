#define _CRT_SECURE_NO_WARNINGS 1

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19

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