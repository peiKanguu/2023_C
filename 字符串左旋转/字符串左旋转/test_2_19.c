#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include <stdio.h>
#include <string.h>

//Question???
// Ϊʲô��sizeof���������ַ������ʲô�����sizeΪ4������

void RotateLeft(char str[],int n ,int sz)
{
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

//void RotateLeft(char str[], int n, int sz)
//{
//	printf("%d\n", sz);
//	int times = n % sz;
//	for (int i = 0; i < times; i++)
//	{
//		char tmp = str[0];
//		for (int i = 0; i < sz; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[sz - 1] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", str[i]);
//	}
//}

int main()
{
	char arr[] = "ABCDE";
	int n = 0;
	/*int size = strlen(arr);*/
	int size = sizeof(arr);
	scanf("%d", &n);

	RotateLeft(arr,n,size);

	return 0;
}