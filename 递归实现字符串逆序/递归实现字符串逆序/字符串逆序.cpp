#define _CRT_SECURE_NO_WARNINGS 1

//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//
//逆序之后数组的内容变成：fedcba
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
//(a + sz - 1) = ‘\0’;
//每次递推时都会执行这四行代码，其中sz的大小一直在改变，
//而且每次减小2个大小，因为在传参的时候数组首元素地址一直在向右增加，
//而且数组右边“\0”每次都会增加一，每递推一次数组右边的值都会相应的赋给左边，
//而左边的值去哪里呢？没错都“暂存起来了”，当回归时暂存的数值将会重新赋给右边，(a + sz - 1) = t; 
//因为在回归时这行代码才会执行
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




//////////////////////////////////////////////////////////////////////////////////////////////////////答案
/*
思路：
逆置字符串，循环的方式实现非常简单
  1. 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
  2. 交换两个指针位置上的字符
  3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束
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
递归方式：
对于字符串“abcdefg”，递归实现的大概原理：
  1. 交换a和g，
  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
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