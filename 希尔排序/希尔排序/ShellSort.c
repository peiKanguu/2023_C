#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap >= 1)
	{
		gap /= 2;
		for (int j = 0; j < gap; j++)
		{
			for (int i = j; i < n - gap; i += gap)
			{
				int end = i;
				int tmp = a[i + gap];
				while (end >= 0)
				{
					if (tmp < a[end])
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
					{
						break;
					}
				}
				a[end + gap] = tmp;
			}
		}
	}

	////¶à×é²¢ÅÅ
	//int gap = 3;
	//for (int i = 0; i < n - gap; i += 1)
	//{
	//	int end = i;
	//	int tmp = a[end + gap];
	//	while (end >= 0)
	//	{
	//		if (tmp < a[end])
	//		{
	//			a[end + gap] = a[end];
	//			end -= gap;
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//	a[end + gap] = tmp;
	//}

	//int gap = 3;
	//for (int i = gap; i < n; i++)
	//{
	//	int end = i;
	//	int tmp = a[end];
	//	while (end >= gap && tmp < a[end - gap])
	//	{
	//		a[end] = a[end - gap];
	//		end -= gap;
	//	}
	//	a[end] = tmp;
	//}

}

int main()
{
	int arr[] = { 1,3,2,6,8,9,5,0,5,6 };
	int size = sizeof(arr) / sizeof(int);

	ShellSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

//void ShellSort(int* a, int n)
//{
//    int gap = 3;
//    for (int i = gap; i < n; i++)
//    {
//        int end = i;
//        int tmp = a[end];
//        while (end >= gap && tmp < a[end - gap])
//        {
//            a[end] = a[end - gap];
//            end -= gap;
//        }
//        a[end] = tmp;
//    }
//}
//
//int main()
//{
//    int arr[] = { 1, 3, 2, 6, 8, 9, 5, 0, 5, 6 };
//    int size = sizeof(arr) / sizeof(int);
//
//    ShellSort(arr, size);
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
