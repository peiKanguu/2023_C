#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include<stdio.h>

void RotateLeft(char str[],int n)
{
	int sz = sizeof(str);
	int times = n % sz;
	for (int i = 0; i < times ; i++)
	{
		char tmp = str[0];
		for (int i = 0; i < sz ; i++)
		{
			str[i] = str[i + 1];
		}			
		str[sz - 1] = tmp;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%c", str[i]);
	}
}

int main()
{
	char arr[] = "ABCD";
	int n = 0;
	scanf("%d", &n);

	RotateLeft(arr,n);

	return 0;
}