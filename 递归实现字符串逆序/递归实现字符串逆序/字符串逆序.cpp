#define _CRT_SECURE_NO_WARNINGS 1

//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//
//����֮����������ݱ�ɣ�fedcba
#include <stdio.h>
#include <string.h>
//void reverse_string(char* a)
//{
//
//	int sz = strlen(a);
//	char t = *a;
//	*a = *(a + sz - 1);
//	*(a + sz - 1) = '\0';
//
//	if (sz - 2 >= 2)
//	{
//		reverse_string(a + 1);
//	}
//
//	*(a + sz - 1) = t;
//}
//int sz = strlen(a);
//char t = *a;
//*a = *(a + sz - 1);
//(a + sz - 1) = ��\0��;
//ÿ�ε���ʱ����ִ�������д��룬����sz�Ĵ�Сһֱ�ڸı䣬
//����ÿ�μ�С2����С����Ϊ�ڴ��ε�ʱ��������Ԫ�ص�ַһֱ���������ӣ�
//���������ұߡ�\0��ÿ�ζ�������һ��ÿ����һ�������ұߵ�ֵ������Ӧ�ĸ�����ߣ�
//����ߵ�ֵȥ�����أ�û�����ݴ������ˡ������ع�ʱ�ݴ����ֵ�������¸����ұߣ�(a + sz - 1) = t; 
//��Ϊ�ڻع�ʱ���д���Ż�ִ��
//int main()
//{
//	char arr[] = "abcdef";
//	char* str = arr;
//
//	reverse_string(str);
//
//	printf("%s", arr);
//
//	return 0;
//}




//////////////////////////////////////////////////////////////////////////////////////////////////////��
/*
˼·��
�����ַ�����ѭ���ķ�ʽʵ�ַǳ���
  1. ������ָ�룬left�����ַ�����࣬right�������һ����Ч�ַ�λ��
  2. ��������ָ��λ���ϵ��ַ�
  3. leftָ�������ߣ�rightָ����ǰ�ߣ�ֻҪ����ָ��û������������2������ָ�����������ý���
*/
//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}


/*
�ݹ鷽ʽ��
�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��
  1. ����a��g��
  2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
*/
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}

//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* str = arr;
//
//	reverse_string(str);
//
//	printf("%s", arr);
//
//	return 0;
//}
#include <stdio.h>
int main()
{
    char str[] = "hello bit";
    printf("%d %d\n", sizeof(str), strlen(str));
    return 0;
}