#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ⷨ��˼·�����������������ʣ���������ͬ�����������Ϊ0��
//�κ�������0���Ľ��Ϊ�䱾�����ȼ����������������ֵ��������
//Ȼ���ҵ�������е�һ��Ϊ 1 ��λ�������������и�λΪ 1 ���������õ� x��
//�����������и�λΪ 0 ���������õ� y����Ϊ���������ֻ����һ�ε����֡�
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