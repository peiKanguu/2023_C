#define _CRT_SECURE_NO_WARNINGS 1

//strlen�ǵݹ�ģ��ʵ��

//#include <stdio.h>

//int main()
//{
//	char arr[] = "XMUM";
//	char* str = arr;
//	int len = 0;
//
//	while(*str != '\0') //EOF ��'\0' ����һ����˼��ǰ�������ļ�����������string
//	{
//		len++;
//		str++;
//	}
//	printf("%d", len);
//
//	return 0;
//}


//strlen�ݹ�ʵ��

#include <stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		str++;
		return 1 + my_strlen(str);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "XMUM";
	int len = my_strlen(arr);

	printf("%d", len);

	return 0;
}