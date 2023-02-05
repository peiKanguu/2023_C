#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//实现一个函数，判断一个数是不是素数。
//
//利用上面实现的函数打印100到200之间的素数
// 
#include <math.h>
////////////////////////////////////////////////////正确示例
//void IsPrimeNumber(int n)
//{
//    int flag = 0;
//    for (int j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//        {
//            flag++;
//            break;
//        }
//    }
//    if (flag == 0)
//    {
//        printf("%d ", n);
//    }
//}
//
//int main()
//{
//    int i;
//    for (i = 100; i <= 200; i++)
//    {
//        IsPrimeNumber(i);
//    }
//    return 0;
//}
#include <math.h>
void IsPrimeNumber(int n)
{
	int flag = 0;
	for (int j = 2; j < sqrt(n); j++)
	{
		if (n % j == 0)
		{
			flag++;                                 
		}		
	}
	if (flag == 0)
	{
		printf("%d ", n);
	}
}

int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		IsPrimeNumber(i);
	}
	return 0;
}





////判断闰年
//void IsLeapYear(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		printf("%d是闰年",n);
//	else
//		printf("%d不是闰年",n);
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//
//	IsLeapYear(year);
//
//	return 0;
//}




//交换两个数
//void swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10, b = 34;
//
//	swap( &a, &b);
//	printf("a = %d  b = %d", a, b);
//
//	return 0;
//}




//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}