#define _CRT_SECURE_NO_WARNINGS 1

//strlen非递归模拟实现

//#include <stdio.h>

//int main()
//{
//	char arr[] = "XMUM";
//	char* str = arr;
//	int len = 0;
//
//	while(*str != '\0') //EOF 和'\0' 不是一个意思，前者用于文件？后者用于string
//	{
//		len++;
//		str++;
//	}
//	printf("%d", len);
//
//	return 0;
//}


//strlen递归实现

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