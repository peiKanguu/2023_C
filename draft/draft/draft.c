#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>





//实现一个函数，判断一个数是不是素数。
//
//利用上面实现的函数打印100到200之间的素数
// 
#include <math.h>
////////////////////////////////////////////////////正确示例
void IsPrimeNumber(int n)
{
    int flag = 0;
    for (int j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            flag++;
            break;
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
//////////////////////////////////////////////////////错误示例
//#include <math.h>
//void IsPrimeNumber(int n)
//{
//	int flag = 0;
//	for (int j = 2; j < sqrt(n); j++)
//	{
//		if (n % j != 0)
//		{
//			flag++;                                 //错误原因：
//		}		
//	}
//	if (flag == 0)
//	{
//		printf("%d ", n);
//	}
//}
//
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		IsPrimeNumber(i);
//	}
//	return 0;
//}





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






//#include<stdio.h>
//int main()
//{
//    int t;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)
//            printf("0.5\n");
//        else if (t < 0)
//            printf("0\n");
//    }
//    return 0;
//}


//多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。
//针对每行输入，输出占一行，用“ * ”组成的对应长度的线段。
//输入：10
//输出：
//***********

//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF && n != 0) {
//        for (int i = 0; i < n; i++) {
//            putchar('*');
//        }
//        putchar('\n');
//    }
//    return 0;
//}
//留一个问题：这道题如何通过数组解决，也就是说输入10
//                                                2
// 然后打印出**********
//           **
//int main()
//{
//	int num[] = { 0 };
//	int n = 0;
//	while (scanf("%d", &num[n]) != EOF)
//	{
//		n++;
//	}
//
//	return 0;
//}


//int main() 
//{
//    int i = 0;
//    int j = 0;
//    float student[5][5] = { 0.0 };
//
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &student[i][j]);
//        }
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        float sum = 0.0;
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", student[i][j]);
//            sum += student[i][j];
//        }
//        printf("%.1f", sum);
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        if (a % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != 0)
//    {
//        if (a >= b)
//        {
//           if (a > b)
//               printf("%d>%d\n", a, b);
//           else
//               printf("%d=%d\n", a, b);
//        }     
//        if (a < b)
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}






//写一个函数求两个整数的较大值
//如：
//输入：10 20
//输出较大值：20
//#include <stdio.h>
//
//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a, b, max;
//	scanf("%d %d",&a ,& b);
//	
//	max = Max(a, b);
//
//	printf("%d", max);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char ch[10] = "hello bit";
//    return 0;
//} 
///*int a;
//    char c[10];
//    scanf("%d%s", &a ,&c);
//    printf("%d\n", strlen("c:\test\121"));*/