#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//实现冒泡升序排序算法的函数，arr[] 为待排序数组
void Bubble_sort(int arr[],int sz)
{
    int i, j;
    int temp = 0;

    for (i = 0; i < sz-1; i++) // sz 个元素，遍历 sz-1 次，因为当求出第二小的数是，最小的数也就确定了
    {
        for (j = 0; j < sz - 1 - i; j++) // 从第 1 个元素开始遍历，遍历至 sz-1-i
        {                                //这里的sz-1-i=sz-(i+i),i+1表示求最大值的次数，每次求得最大                                           //值后，下一次求最大值需要遍历的次数都减少一次
            if (arr[j] > arr[j + 1]) //比较 arr[j] 和 arr[j+1] 的大小
            {                         //根据大小关系交换 2 个元素的位置
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i = 0;
    int arr[] = { 3, 2, 4, 1, 6, 5 };
    int sz = sizeof(arr) / sizeof(int);  //求数组的大小

        Bubble_sort(arr,sz);             //进行冒泡排序

    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}




//int main()
//{
//	int arr[] = { 2, 4, 1, 3, 6, 7, 5, 8, 10, 9 };
//	int sz = sizeof(arr) / sizeof(int);
//	int tmp;
// 
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{ 
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%d", sz);
//	return 0;
//}