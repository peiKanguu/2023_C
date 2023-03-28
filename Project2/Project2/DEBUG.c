#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>






//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    int arr1[n], arr2[m], res[n + m];
//    int i, j, k;
//    i = j = k = 0;
//
//    // 读取输入数据
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//
//    for (j = 0; j < m; j++) {
//        scanf("%d", &arr2[j]);
//    }
//
//    // 归并排序，将arr1和arr2合并到res数组中
//    i = j = k = 0;
//    while (i < n && j < m) {
//        if (arr1[i] <= arr2[j]) {
//            res[k++] = arr1[i++];
//        }
//        else {
//            res[k++] = arr2[j++];
//        }
//    }
//
//    while (i < n) {
//        res[k++] = arr1[i++];
//    }
//
//    while (j < m) {
//        res[k++] = arr2[j++];
//    }
//
//    // 输出结果
//    for (i = 0; i < n + m; i++) {
//        printf("%d ", res[i]);
//    }
//
//    return 0;
//}




//void adjust(int arr[])
//{
//	int n = 0;
//	int m = 0;
//	int arr1[10];
//	int arr2[10];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr2[n] = arr[i];
//			n++;
//		}
//		if (arr[i] % 2 != 0)
//		{
//			arr1[m] = arr[i];
//			m++;
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		arr[i] = arr1[i];
//	}
//
//	for (int i = m; i < 10; i++)
//	{
//		arr[i] = arr2[i-m];
//	}
//}
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	adjust(arr);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void adjust(int arr[])
//{
//    int n = 0;
//    int m = 0;
//    int arr1[10];
//    int arr2[10];
//
//    for (int i = 0; i < 10; i++)
//    {
//        if (arr[i] % 2 == 0)
//        {
//            arr2[n] = arr[i];
//            n++;
//        }
//        else
//        {
//            arr1[m] = arr[i];
//            m++;
//        }
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        arr[i] = arr1[i];
//    }
//
//    for (int i = m; i < 10; i++)
//    {
//        arr[i] = arr2[i - m];
//    }
//}
//
//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    adjust(arr);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
