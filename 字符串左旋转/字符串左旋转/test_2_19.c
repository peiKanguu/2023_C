#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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