#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//ʵ��һ���������ж�һ�����ǲ���������
//
//��������ʵ�ֵĺ�����ӡ100��200֮�������
// 
#include <math.h>
////////////////////////////////////////////////////��ȷʾ��
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





////�ж�����
//void IsLeapYear(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		printf("%d������",n);
//	else
//		printf("%d��������",n);
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




//����������
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




//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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