#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����ֵ

//int main()
//{
//    int arr[10] = {1,0,0,8,6,13,14,5,2,0};
//    int i = 0;
//   
//    int max = arr[0];
//    int min = arr[0];
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("Max is %d\n", max);
//
//    return 0;
//}

//�ҵڶ���ֵ

//#define N 10
//int main()
//{
//    int arr[N]= { 1,0,0,8,6,13,14,5,2,0 };
//    int i = 0;
//    //���ҳ����ֵ
//    int max = arr[0];
//    for (i = 1; i < N; ++i)
//    {
//        if (arr[i] >= max)
//        {
//            max = arr[i];
//        }
//    }
//    //���޳����ֵ
//    int sec = arr[0];
//    for (i = 0; i < N; ++i)
//    {
//        if (arr[i] == max)
//        {
//            continue;//�������ֵ����ǰ����
//        }
//        else if (arr[i] > sec)
//        {
//            sec = arr[i];//��Ϊ���ֵ�Ѿ�������������������ֵ��Ϊ�ڶ���
//        }
//    }
//
//    printf("%d", sec);
//    return 0;
//}

//���߼��ַ���д����Ĵ��룬��ڶ���ֵ
#define N 10
int main()
{
    int arr[N] = { 1,0,0,8,6,13,14,5,2,0 };
    int i = 0;
    int max = arr[0];
    for (i = 1; i < N; ++i)
    {
        max = (arr[i] >= max) ? arr[i] : max;
    }
    int sec = arr[0];
    for (i = 0; i < N; ++i)
    {
        sec = (arr[i] == max) ? sec : (arr[i] > sec) ? arr[i] : sec;
    }
    printf("%d", sec);
    return 0;
}
