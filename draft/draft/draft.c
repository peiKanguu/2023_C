#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


#include<stdio.h>
int main()
{
    int t;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else if (t < 0)
            printf("0\n");
    }
    return 0;
}


//�������룬һ��������1~100������ʾ�߶γ��ȣ����� * ����������
//���ÿ�����룬���ռһ�У��á� * ����ɵĶ�Ӧ���ȵ��߶Ρ�
//���룺10
//�����
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
//��һ�����⣺��������ͨ����������Ҳ����˵����10
//                                                2
// Ȼ���ӡ��**********
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






//дһ�����������������Ľϴ�ֵ
//�磺
//���룺10 20
//����ϴ�ֵ��20
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