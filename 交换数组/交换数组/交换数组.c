#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void exchange(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		char tmp;
		tmp = *str2;
		*str2 = *str1;
		*str1 = tmp;
		str1++;
		str2++;
	}
}
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "12345";
	exchange(arr1, arr2);
	printf("arr1[]= %s\narr2[]= %s", arr1, arr2);
	return 0;
}