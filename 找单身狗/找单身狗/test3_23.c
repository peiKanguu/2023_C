#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//这个解法的思路是利用异或运算的性质，即两个相同的数字异或结果为0，
//任何数字与0异或的结果为其本身。首先计算数组中所有数字的异或结果，
//然后找到异或结果中第一个为 1 的位，将数组中所有该位为 1 的数字异或得到 x，
//将数组中所有该位为 0 的数字异或得到 y，即为所求的两个只出现一次的数字。
void findSingleNumbers(int* p, int n)
{
	int totalXor = 0;
	int XorFirstOne = 0;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		totalXor ^= p[i];
	}

	XorFirstOne = totalXor ^ (totalXor - 1);

	for (int i = 0; i < n; i++)
	{
		if (p[i] & XorFirstOne)
		{
			a ^= p[i];
		}
	}

	b = totalXor ^= a;

	printf("%d\n%d\n", a, b);
	
}

int main()
{
	int arr[] = { 1,1,2,2,3,4,4,5,5,6,7,7 };
	int n = sizeof(arr) / sizeof(int);
	findSingleNumbers(arr, n);

	return 0;
}