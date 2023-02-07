#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//找最大值

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

//找第二大值

//#define N 10
//int main()
//{
//    int arr[N]= { 1,0,0,8,6,13,14,5,2,0 };
//    int i = 0;
//    //先找出最大值
//    int max = arr[0];
//    for (i = 1; i < N; ++i)
//    {
//        if (arr[i] >= max)
//        {
//            max = arr[i];
//        }
//    }
//    //再剔除最大值
//    int sec = arr[0];
//    for (i = 0; i < N; ++i)
//    {
//        if (arr[i] == max)
//        {
//            continue;//等于最大值就提前跳出
//        }
//        else if (arr[i] > sec)
//        {
//            sec = arr[i];//因为最大值已经跳过，所以这里的最大值即为第二大
//        }
//    }
//
//    printf("%d", sec);
//    return 0;
//}

//用逻辑字符改写上面的代码，求第二大值
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
