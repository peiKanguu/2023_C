#define _CRT_SECURE_NO_WARNINGS 1
//
////��������22 33�����5
////22��00010110
////23��00100001
//
#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0;
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int Temp = 0;
//	int count = 0;
//	printf("���������������Ƚ����Ƕ������벻ͬλ�ĸ�����\n");
//	scanf("%d %d", &num1, &num2);
//	Temp = num1 ^ num2;
//	while (Temp != 0)
//	{
//		count++;
//		Temp = Temp & (Temp - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}


int main()
{
    int x = 0;
    int y = 0;
    int count = 0;
    printf("������������:");
    scanf("%d %d", &x, &y);

    for (int i = 0; i < 32; i++)
    {
        if (((x >> i) & 1) != ((y >> i) & 1))
        {
            count++
        }
    }
    printf("count:%d", count);

    return 0;
}